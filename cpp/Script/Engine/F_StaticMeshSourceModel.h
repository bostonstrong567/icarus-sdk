// /Script/Engine.StaticMeshSourceModel
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h

USTRUCT()
struct FStaticMeshSourceModel
{
public:
    UPROPERTY(EditAnywhere) FMeshBuildSettings BuildSettings;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere) FMeshReductionSettings ReductionSettings;  // 0x0030, size 0x24
    UPROPERTY(Deprecated) float LODDistance;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformFloat ScreenSize;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) FString SourceImportFilename;  // 0x0060, size 0x10
};
