// /Game/BP/Quests/BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_QuestFuncitonLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static int32 GenerateNewDynamicQuestSeed(UObject* __WorldContext);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetClosestActorOfType(AActor* Source, TSubclassOf<AActor> Actor, UObject* __WorldContext, AActor*& Closest, float& Distance);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftClassPtr<UQuestModifierBase> GetDefaultQuestModifierClass(FQuestModifiersMultiRowHandle RowHandle, UObject* __WorldContext);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static TSoftClassPtr<UQuestModifierBase> GetQuestModifierClass(FQuestModifiersMultiRowHandle RowHandle, UObject* __WorldContext);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void GetRandomPlayerInRange(AActor* Origin, float Distance, UObject* __WorldContext, AIcarusPlayerCharacter*& PlayerInRange);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Is_Player_in_Range(AActor* Origin, float Distance, UObject* __WorldContext, bool& PlayerInRange);  // parameters 0x19, named "Is Player in Range"
    UFUNCTION(BlueprintCallable) void IsPlayerCharacter(UObject* Object, UObject* __WorldContext, AIcarusPlayerCharacter*& IcarusPlayerCharacter);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void TriggerNewDynamicFactionMission(const FFactionMissionsRowHandle& Mission, const FProspectListRowHandle& MissionProspect, UObject* __WorldContext);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void TriggerNewDynamicQuest(FDynamicQuestsRowHandle DynamicQuest, EDynamicQuestDifficulty Difficulty, UObject* __WorldContext);  // parameters 0x28
};
