// /Game/BP/Objects/World/Items/Deployables/MissionCommunication/FBossRespawnData.FBossRespawnData
// size 0x38

USTRUCT()
struct FBossRespawnData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorldBossesRowHandle Boss;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Alive;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NextRespawn;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGreatHuntCreatureInfoRowHandle CreatureInfo;  // 0x0020, size 0x18
};
