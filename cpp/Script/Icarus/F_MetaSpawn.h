// /Script/Icarus.MetaSpawn
// size 0x18, declared in Icarus/Source/Icarus/Systems/Prospects/MetaSpawn.h

USTRUCT()
struct FMetaSpawn
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExoticSpawnEnum SpawnLocation;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinMetaAmount;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxMetaAmount;  // 0x0014, size 0x4
};
