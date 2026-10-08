// /Script/Icarus.AutonomousSpawnData
// size 0xB8, declared in Icarus/Source/Icarus/IcarusGenerated/AutonomousSpawns/AutonomousSpawnsRowHandle.h

USTRUCT()
struct FAutonomousSpawnData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupEnum AISetup;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusActor> IcarusActorClass;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UObject> AISpawnBehaviour;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNumAroundPlayers;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSpawnCount;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxDistanceToPlayers;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer GameplayTagsToApply;  // 0x0088, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorldStatsEnum RequiredStat;  // 0x00A8, size 0x10
};
