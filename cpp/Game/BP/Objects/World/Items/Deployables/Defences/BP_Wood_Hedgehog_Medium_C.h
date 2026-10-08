// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C
// Derives from: ABP_Spike_Trap_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Wood_Hedgehog_Medium_C : public ABP_Spike_Trap_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Wood_Hedgehog_Medium(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
