// /Script/Icarus.FactionMission
// size 0xF8, declared in Icarus/Source/Icarus/Systems/FactionMissions/FactionMission.h

USTRUCT()
struct FFactionMission : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMissionObjectiveEntry> MissionObjectives;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionInfoRowHandle Faction;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMissionTypesRowHandle> Types;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorkshopCost> CurrencyCost;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestsRowHandle InitialQuest;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseOpenWorldRetryTimeout;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRulesetsRowHandle> AdditionalRulesets;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemTemplateRowHandle> ItemsRewarded;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAccountFlagsRowHandle> AccountFlagsRewarded;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCharacterFlagsRowHandle> CharacterFlagsRewarded;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTalentsRowHandle> TalentsRewarded;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorkshopCost> CurrencyRewarded;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTalentsRowHandle> GreatHuntReward;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AccountExperience;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FactionExperience;  // 0x00F4, size 0x4
};
