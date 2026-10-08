// /Game/BP/Behaviours/Hitable/BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C
// Derives from: UHitableComponent > UTraitComponent > UActorComponent > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_HitableBehaviour_TreePrimitive_C : public UHitableComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00D0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION() void ExecuteUbergraph_BP_HitableBehaviour_TreePrimitive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
