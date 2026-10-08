// /Game/BP/Objects/World/Items/Deployables/Fortification/BP_Fortification_Stone_Spikes.BP_Fortification_Stone_Spikes_C
// Derives from: ABP_Spike_Trap_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fortification_Stone_Spikes_C : public ABP_Spike_Trap_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box02;  // 0x07A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Fortification_Stone_Spikes(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
