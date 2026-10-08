// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Lithium_Axe.BP_SkeletalItem_Lithium_Axe_C
// Derives from: ABP_SkeletalItem_LithiumBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Lithium_Axe_C : public ABP_SkeletalItem_LithiumBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ZapActive;  // 0x05A8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPoweredParticleSystem(UNiagaraComponent*& System) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeFuel(const FHitResult& Hit, int32& AmountToConsume);  // parameters 0x8D
};
