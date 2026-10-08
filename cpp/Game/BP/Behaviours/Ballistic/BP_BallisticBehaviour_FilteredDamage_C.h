// /Game/BP/Behaviours/Ballistic/BP_BallisticBehaviour_FilteredDamage.BP_BallisticBehaviour_FilteredDamage_C
// Derives from: UBP_BallisticBehaviour_Base_C > UBallisticComponent > UTraitComponent > UActorComponent > UObject
// size 0xA58, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_BallisticBehaviour_FilteredDamage_C : public UBP_BallisticBehaviour_Base_C
{
public:

    UFUNCTION(BlueprintCallable) void ApplyDamage(AActor* HitActor, const FHitResult& HitInfo);  // parameters 0x90
};
