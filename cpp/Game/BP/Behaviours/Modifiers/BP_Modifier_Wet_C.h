// /Game/BP/Behaviours/Modifiers/BP_Modifier_Wet.BP_Modifier_Wet_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Wet_C : public UModifierStateComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
};
