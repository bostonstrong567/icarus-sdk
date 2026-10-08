// /Game/BP/Objects/World/Resources/Nodes/BP_GenericTwig.BP_GenericTwig_C
// Derives from: ABP_ResourceNodeBase_C > AGenericResourceBase > AIcarusActor > AActor > UObject
// size 0x3D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GenericTwig_C : public ABP_ResourceNodeBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_GenericTwig(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
