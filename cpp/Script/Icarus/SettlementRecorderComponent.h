// /Script/Icarus.SettlementRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

UCLASS(Config=Engine)
class USettlementRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) int32 SettlementRecorderVersion;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) FString SettlementName;  // 0x01C8, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FName FactionTable;  // 0x01D8, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) FName FactionRow;  // 0x01E0, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) FString OwnerCharacterId;  // 0x01E8, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FString> MemberCharacterIds;  // 0x01F8, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 XP;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 Level;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 DaysSinceCreation;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) bool bHasInitialised;  // 0x0214, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) bool bInitialVisitorGranted;  // 0x0215, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) TArray<FSettlementTalentRecord> TalentRecords;  // 0x0218, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FSettlementNPCRecord> NPCRecords;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FSettlementTaskRecord> TaskRecords;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FSettlementVisitorRecord> VisitorRecords;  // 0x0248, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FName ActiveEventRow;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) int32 ActiveEventStartDay;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 ActiveEventSeed;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 LastEventEndDay;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) bool bActivityOverrideActive;  // 0x026C, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) ESettlementNPCActivity ActivityOverride;  // 0x026D, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) TArray<FSettlementTimedModifierRecord> TimedModifierRecords;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FName ActiveQuestTable;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) FName ActiveQuestRow;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) int32 StoredWater;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 StoredOxygen;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 StoredPower;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 StoredBiofuel;  // 0x029C, size 0x4
};
