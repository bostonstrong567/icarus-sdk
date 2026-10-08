// /Game/BP/Quests/Modifiers/BP_QuestWeatherModifier.BP_QuestWeatherModifier_C
// Derives from: UBP_QuestModifierBase_C > UQuestModifierBase > UActorComponent > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_QuestWeatherModifier_C : public UBP_QuestModifierBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_QuestWeatherModifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitQuestListening();
};
