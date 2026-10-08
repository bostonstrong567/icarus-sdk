// /Game/BP/Behaviours/Ballistic/BP_BallisticBehaviour_RockGolemGun.BP_BallisticBehaviour_RockGolemGun_C
// Derives from: UBP_BallisticBehaviour_Base_C > UBallisticComponent > UTraitComponent > UActorComponent > UObject
// size 0xA58, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_BallisticBehaviour_RockGolemGun_C : public UBP_BallisticBehaviour_Base_C
{
public:

    UFUNCTION(BlueprintCallable) void PlayHitEffects(FHitResult Hit, bool ValidHit);  // parameters 0x89
};
