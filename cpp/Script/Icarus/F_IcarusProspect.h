// /Script/Icarus.IcarusProspect
// size 0x2D0, declared in Icarus/Source/Icarus/Systems/Prospects/Prospect.h

USTRUCT()
struct FIcarusProspect : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DropName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DesignNotes;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText FlavourText;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* ProspectImage;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMissionDifficulty, FDifficultySetup> DifficultySetup;  // 0x0078, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusProspectDifficulty Difficulty;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle BriefingDialogue;  // 0x00CC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle LandingDialogue;  // 0x00E4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle MissionCompleteDialogue;  // 0x00FC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredLevel;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EProspectRequiredTech RequiredTech;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCharacterFlagsEnum> RequiredCharacterFlags;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCharacterFlagsEnum> ForbiddenCharacterFlags;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFlagsMultiRowHandle> RequiredFlags;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableWorldBosses;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWorldBossesRowHandle, FVector2D> WorldBosses;  // 0x0158, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectForecastRowHandle InitialForecast;  // 0x01A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectForecastRowHandle Forecast;  // 0x01C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisabled;  // 0x01D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTerrainsRowHandle Terrain;  // 0x01DC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle FactionMission;  // 0x01F4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsPersistent;  // 0x020C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsOpenWorld;  // 0x020D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusTimeSpan TimeDuration;  // 0x0210, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingTime;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* TimeScaleCurve;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRulesetsRowHandle> AdditionalRulesets;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayerSpawnGroupIndex;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaSpawn> MetaDepositSpawns;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D DefaultMetaResourceAmount;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumMetaSpawnsMin;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumMetaSpawnsMax;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FProspectStatsRowHandle> WorldStatList;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> BoundsOverride;  // 0x0288, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISpawnConfigRowHandle AISpawnConfigOverride;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAbandonOnProspectExpiry;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOnProspectAvailability OnProspectAvailability;  // 0x02C9, size 0x1
};
