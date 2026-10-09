// /Script/Icarus.FLODLevelDescription
// size 0x50, declared in Icarus/Source/Icarus/Systems/FLOD/FLODStructs.h

USTRUCT()
struct FFLODLevelDescription
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LevelIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EFLODLevelInfluenceType InfluenceType;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bClientPredictive;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InfluenceDistance;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ActorPoolBufferSize;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AActor> ActorReplacementClass;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemTemplateRowHandle ItemTemplate;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemRewardsRowHandle ItemRewards;  // 0x0030, size 0x18
    FFLODDescription * CachedOwner;  // 0x0048, not reflected
};
