// /Script/ApexDestruction.DestructibleDamageParameters
// size 0x1C, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleMesh.h

USTRUCT()
struct FDestructibleDamageParameters
{
public:
    UPROPERTY(EditAnywhere) float DamageThreshold;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float DamageSpread;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) bool bEnableImpactDamage;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) float ImpactDamage;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 DefaultImpactDamageDepth;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) bool bCustomImpactResistance;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere) float ImpactResistance;  // 0x0018, size 0x4
};
