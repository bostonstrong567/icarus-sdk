// /Game/BP/Objects/World/Items/Deployables/Fortification/BP_Fortification_Wood_FrontRamp.BP_Fortification_Wood_FrontRamp_C
// Derives from: ABP_Fortification_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fortification_Wood_FrontRamp_C : public ABP_Fortification_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0760, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Fortification_Wood_FrontRamp(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
