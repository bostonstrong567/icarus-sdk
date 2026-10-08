// /Game/BP/Objects/World/Items/Deployables/Decorations/Paintings/BP_Painting_Metal_Small.BP_Painting_Metal_Small_C
// Derives from: ABP_Painting_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Painting_Metal_Small_C : public ABP_Painting_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Painting_Metal_Small(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
