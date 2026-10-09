// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Scorpion_Hedgehog_Medium.BP_Scorpion_Hedgehog_Medium_C
// Derives from: ABP_Spike_Trap_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Scorpion_Hedgehog_Medium_C : public ABP_Spike_Trap_Base_C
{
public:
    UFUNCTION(BlueprintCallable) void DoDamage(int32 DamageAmount, AActor* Defender);  // parameters 0x10
};
