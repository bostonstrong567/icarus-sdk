// /Game/BP/Behaviours/Modifiers/BP_Modifier_MarkedTarget.BP_Modifier_MarkedTarget_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3E1, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_MarkedTarget_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x03D0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UActorState* ActorState;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasAppliedDamage;  // 0x03E0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnOwnerDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
};
