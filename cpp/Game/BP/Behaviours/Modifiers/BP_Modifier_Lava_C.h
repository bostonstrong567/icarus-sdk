// /Game/BP/Behaviours/Modifiers/BP_Modifier_Lava.BP_Modifier_Lava_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Lava_C : public UBP_Modifier_Base_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
};
