// /Game/BP/Behaviours/Hitable/BP_Hitable_AnimalCarcass.BP_Hitable_AnimalCarcass_C
// Derives from: UHitableComponent > UTraitComponent > UActorComponent > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Hitable_AnimalCarcass_C : public UHitableComponent
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
};
