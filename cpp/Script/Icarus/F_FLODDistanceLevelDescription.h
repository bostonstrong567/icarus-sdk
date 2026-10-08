// /Script/Icarus.FLODDistanceLevelDescription
// size 0x60, declared in Icarus/Source/Icarus/Systems/FLOD/FLODStructs.h

USTRUCT()
struct FFLODDistanceLevelDescription
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<AActor> Actor;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InfluenceDistance;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemTemplateRowHandle ActorItemTemplate;  // 0x002C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemRewardsRowHandle ActorItemRewards;  // 0x0044, size 0x18
};
