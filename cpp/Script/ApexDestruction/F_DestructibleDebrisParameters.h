// /Script/ApexDestruction.DestructibleDebrisParameters
// size 0x2C, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleMesh.h

USTRUCT()
struct FDestructibleDebrisParameters
{
public:
    UPROPERTY(EditAnywhere) float DebrisLifetimeMin;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float DebrisLifetimeMax;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float DebrisMaxSeparationMin;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float DebrisMaxSeparationMax;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) FBox ValidBounds;  // 0x0010, size 0x1C
};
