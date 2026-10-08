// /Script/Engine.HierarchicalSimplification
// size 0x160, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h

USTRUCT()
struct FHierarchicalSimplification
{
    UPROPERTY(EditAnywhere) float TransitionScreenSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float OverrideDrawDistance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseOverrideDrawDistance : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAllowSpecificExclusion : 1;  // 0x0008, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSimplifyMesh : 1;  // 0x0008, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bOnlyGenerateClustersForVolumes : 1;  // 0x0008, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bReusePreviousLevelClusters : 1;  // 0x0008, mask 0x10
    UPROPERTY(EditAnywhere) FMeshProxySettings ProxySetting;  // 0x000C, size 0xA8
    UPROPERTY(EditAnywhere) FMeshMergingSettings MergeSetting;  // 0x00B4, size 0xA0
    UPROPERTY(EditAnywhere) float DesiredBoundRadius;  // 0x0154, size 0x4
    UPROPERTY(EditAnywhere) float DesiredFillingPercentage;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere) int32 MinNumberOfActorsToBuild;  // 0x015C, size 0x4
};
