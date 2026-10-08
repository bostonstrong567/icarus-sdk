// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Bramble.BP_Bramble_C
// Derives from: ABP_Spike_Trap_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Bramble_C : public ABP_Spike_Trap_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8

    UFUNCTION(BlueprintCallable) void DoDamage(int32 DamageAmount, AActor* Defender);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_Bramble(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayDamageAudio();
};
