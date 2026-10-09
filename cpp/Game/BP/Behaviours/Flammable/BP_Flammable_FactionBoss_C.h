// /Game/BP/Behaviours/Flammable/BP_Flammable_FactionBoss.BP_Flammable_FactionBoss_C
// Derives from: UBP_Flammable_Actor_C > UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x12C, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_FactionBoss_C : public UBP_Flammable_Actor_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FBoxSphereBounds GetLocalBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetupCosmetics();
};
