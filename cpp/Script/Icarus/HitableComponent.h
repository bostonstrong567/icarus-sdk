// /Script/Icarus.HitableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/HitableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UHitableComponent : public UTraitComponent
{
public:
    UFUNCTION(BlueprintNativeEvent) bool CanConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION(BlueprintNativeEvent) bool ConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHitableData(FHitableData& OutData) const;  // parameters 0x41
    UFUNCTION(BlueprintCallable) void Hitable();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnHit();

    // Virtual functions that start here:
    //   CanConsumeHit_Implementation, ConsumeHit_Implementation, OnHit_Implementation
};
