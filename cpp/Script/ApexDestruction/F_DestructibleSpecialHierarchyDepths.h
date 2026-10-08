// /Script/ApexDestruction.DestructibleSpecialHierarchyDepths
// size 0x14, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleMesh.h

USTRUCT()
struct FDestructibleSpecialHierarchyDepths
{
    UPROPERTY(EditAnywhere) int32 SupportDepth;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 MinimumFractureDepth;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) bool bEnableDebris;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) int32 DebrisDepth;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 EssentialDepth;  // 0x0010, size 0x4
};
