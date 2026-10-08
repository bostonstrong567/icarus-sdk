// /Script/Icarus.IcarusQuestManagerRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x220, declared in Icarus/Source/Icarus/Systems/Quests/IcarusQuestManagerRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusQuestManagerRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FName FactionMissionName;  // 0x01C0, size 0x8
    UPROPERTY(SaveGame) FInitialQuestRecord InitialQuestRecord;  // 0x01C8, size 0x18
    UPROPERTY(SaveGame) bool bMissionComplete;  // 0x01E0, size 0x1
    UPROPERTY(SaveGame) bool bRunQuests;  // 0x01E1, size 0x1
    UPROPERTY(SaveGame) int32 DynamicQuestDifficulty;  // 0x01E4, size 0x4
    UPROPERTY(SaveGame) float DynamicQuestDelay;  // 0x01E8, size 0x4
    UPROPERTY(SaveGame) FName DynamicMissionProspectName;  // 0x01EC, size 0x8
    UPROPERTY(SaveGame) TArray<FRelevantQuestActorRecord> RelevantPersistentActorRecords;  // 0x01F8, size 0x10
    UPROPERTY(SaveGame) TArray<FRelevantQuestActorRecord> RelevantPersistentCharacterRecords;  // 0x0208, size 0x10
};
