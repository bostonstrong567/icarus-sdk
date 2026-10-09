// /Game/BP/Systems/Disaster/VoxelCrackInfo.VoxelCrackInfo
// size 0xA0

USTRUCT()
struct VoxelCrackInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Attacker;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Weapon;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult HitInfo;  // 0x0010, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumHits;  // 0x0098, size 0x4
};
