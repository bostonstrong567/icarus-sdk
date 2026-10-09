// /Script/Icarus.FLODDescription
// size 0x138, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/FLOD.generated.h

USTRUCT()
struct FFLODDescription : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UFoliageType> FoliageType;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FGameplayTagContainer FoliageTags;  // 0x0040, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDisabled;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseViewTraceInfluence;  // 0x0061, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<AActor> ViewTraceActor;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemTemplateRowHandle ViewTraceActorItemTemplate;  // 0x0090, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemableRowHandle ViewTraceActorItemable;  // 0x00A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemRewardsRowHandle ViewTraceActorItemRewards;  // 0x00C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bViewTraceClientPredictive;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseDistanceInfluence;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFLODDistanceLevelDescription> DistanceLevels;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsFlammable;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFlammableRowHandle Flammable;  // 0x00F4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFLODDescriptionsRowHandle BurntFLODEntry;  // 0x010C, size 0x18
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) int32 RecordIndex;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) TArray<FFLODLevelDescription> Levels;  // 0x0128, size 0x10
};
