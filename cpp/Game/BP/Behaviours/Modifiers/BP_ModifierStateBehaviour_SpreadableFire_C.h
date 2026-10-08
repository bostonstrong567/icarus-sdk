// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_SpreadableFire.BP_ModifierStateBehaviour_SpreadableFire_C
// Derives from: UBP_ModifierStateBehaviour_TickDamage_C > UModifierStateComponent > UActorComponent > UObject
// size 0x400, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_SpreadableFire_C : public UBP_ModifierStateBehaviour_TickDamage_C
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UThermalComponent* ThermalComponent;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFlammableComponent* FlammableComponent;  // 0x03F8, size 0x8
};
