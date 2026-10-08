// /Game/BP/Behaviours/Equippable/BP_EquippableModifier_Saddle.BP_EquippableModifier_Saddle_C
// Derives from: UBP_EquippableModifier_C > UEquippableModifier > UActorComponent > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_EquippableModifier_Saddle_C : public UBP_EquippableModifier_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetEquippableStatsToAdd(TMap<FStatsEnum, int32>& Stats);  // parameters 0x50
};
