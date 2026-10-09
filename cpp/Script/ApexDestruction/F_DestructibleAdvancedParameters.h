// /Script/ApexDestruction.DestructibleAdvancedParameters
// size 0x10, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleMesh.h

USTRUCT()
struct FDestructibleAdvancedParameters
{
public:
    UPROPERTY(EditAnywhere) float DamageCap;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float ImpactVelocityThreshold;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float MaxChunkSpeed;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float FractureImpulseScale;  // 0x000C, size 0x4
};
