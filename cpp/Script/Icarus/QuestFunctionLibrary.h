// /Script/Icarus.QuestFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Quests/QuestFunctionLibrary.h

UCLASS()
class UQuestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static float CalculateMissionRewardModifier(const FProspectInfo& ProspectInfo, AIcarusPlayerController* Player, bool bCheckInsurance);  // parameters 0xB0
    UFUNCTION(BlueprintCallable) static bool FindProspectListRowHandleFromFactionMission(const FFactionMissionsRowHandle& MissionRowHandle, FProspectListRowHandle& FoundProspectListRowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool GetQuestModifierClassFromRow(const FQuestModifiersMultiRowHandle& RowHandle, TSoftClassPtr<UQuestModifierBase>& OutQuestModifierClass);  // parameters 0x41
    UFUNCTION(BlueprintCallable) static bool GetQuestModifierData(const FQuestModifiersMultiRowHandle& RowHandle, FQuestModifierData& OutData);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool GetQuestModifierDataFromRowHandle(const FRowHandle& RowHandle, FQuestModifierData& OutData);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static FName GetQuestsModifierTableName(EQuestModifiersTableType TableType);  // parameters 0xC
};
