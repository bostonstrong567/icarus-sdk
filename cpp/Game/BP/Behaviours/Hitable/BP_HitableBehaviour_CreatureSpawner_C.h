// /Game/BP/Behaviours/Hitable/BP_HitableBehaviour_CreatureSpawner.BP_HitableBehaviour_CreatureSpawner_C
// Derives from: UHitableComponent > UTraitComponent > UActorComponent > UObject
// size 0xF9, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_HitableBehaviour_CreatureSpawner_C : public UHitableComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EIcarusDamageType> AllowedDamageTypes;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGameplayTag> AllowedDamageSourceTags;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowDrillArrows;  // 0x00F8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ConsumeHit(UActorState* ActorStateIn, FIcarusDamagePacket DamagePacket);  // parameters 0xE1
    UFUNCTION() void ExecuteUbergraph_BP_HitableBehaviour_CreatureSpawner(int32 EntryPoint);  // parameters 0x4
};
