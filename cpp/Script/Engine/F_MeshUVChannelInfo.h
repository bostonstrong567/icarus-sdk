// /Script/Engine.MeshUVChannelInfo
// size 0x14, declared in Engine/Source/Runtime/Engine/Public/Components.h

USTRUCT()
struct FMeshUVChannelInfo
{
public:
    UPROPERTY() bool bInitialized;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bOverrideDensities;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) float LocalUVDensities;  // 0x0004, size 0x4
};
