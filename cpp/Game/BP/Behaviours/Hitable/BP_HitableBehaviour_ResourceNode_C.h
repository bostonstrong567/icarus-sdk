// /Game/BP/Behaviours/Hitable/BP_HitableBehaviour_ResourceNode.BP_HitableBehaviour_ResourceNode_C
// Derives from: UHitableComponent > UTraitComponent > UActorComponent > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_HitableBehaviour_ResourceNode_C : public UHitableComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x00D0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
};
