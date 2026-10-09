// /Script/ApexDestruction.DestructibleChunkParameters
// size 0x4, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleFractureSettings.h

USTRUCT()
struct FDestructibleChunkParameters
{
public:
    UPROPERTY(EditAnywhere) bool bIsSupportChunk;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bDoNotFracture;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) bool bDoNotDamage;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) bool bDoNotCrumble;  // 0x0003, size 0x1
};
