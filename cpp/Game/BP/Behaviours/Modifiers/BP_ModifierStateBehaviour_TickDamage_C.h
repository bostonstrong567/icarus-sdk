// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3EC, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_TickDamage_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x03D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DamageModifierStat;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedDamageModifier;  // 0x03E8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
