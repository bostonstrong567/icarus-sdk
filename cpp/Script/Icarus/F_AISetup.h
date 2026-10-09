// /Script/Icarus.AISetup
// size 0x2A8, declared in Icarus/Source/Icarus/AI/AISetup.h

USTRUCT()
struct FAISetup : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> ActorClass;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AController> ControllerClass;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAICreatureTypeRowHandle CreatureType;  // 0x0068, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAIDescriptorsRowHandle> Descriptors;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle DeadItem;  // 0x0090, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPSetupRowHandle GOAPSetup;  // 0x00A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavigationQueryFilter> DefaultNavigationFilter;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIRelationshipsRowHandle Relationships;  // 0x00C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTagQueriesRowHandle> NotifiedNPCTypes;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNotifySelfType;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIGrowthRowHandle AIGrowth;  // 0x00F4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMovementState, FMovementStateData> MovementMapping;  // 0x0110, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHuntingSetupRowHandle HuntingSetup;  // 0x0160, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCriticalHitLocation> CriticalHitBones;  // 0x0178, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIAudioDataRowHandle Audio;  // 0x0188, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> CollisionHitEventBones;  // 0x01A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LatentDeathDuration;  // 0x01B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery ValidBaitTagQuery;  // 0x01B8, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle Trophy;  // 0x0200, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle Loot;  // 0x0218, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle Hitable;  // 0x0230, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceRowHandle Experience;  // 0x0248, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseSurvivalCharacterState;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStartWithSurvivalTickDisabled;  // 0x0261, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle BestiaryGroup;  // 0x0264, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCriticalHitLocation> BlacklistBones;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PercentChanceToSpawn;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> AdditionalAIToSpawn;  // 0x0298, size 0x10
};
