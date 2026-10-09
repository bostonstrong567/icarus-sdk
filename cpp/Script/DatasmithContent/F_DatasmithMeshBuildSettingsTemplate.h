// /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate
// size 0x10, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithStaticMeshTemplate.h

USTRUCT()
struct FDatasmithMeshBuildSettingsTemplate
{
public:
    UPROPERTY() uint8 bUseMikkTSpace : 1;  // 0x0000, mask 0x01
    UPROPERTY() uint8 bRecomputeNormals : 1;  // 0x0000, mask 0x02
    UPROPERTY() uint8 bRecomputeTangents : 1;  // 0x0000, mask 0x04
    UPROPERTY() uint8 bRemoveDegenerates : 1;  // 0x0000, mask 0x08
    UPROPERTY() uint8 bBuildAdjacencyBuffer : 1;  // 0x0000, mask 0x10
    UPROPERTY() uint8 bUseHighPrecisionTangentBasis : 1;  // 0x0000, mask 0x20
    UPROPERTY() uint8 bUseFullPrecisionUVs : 1;  // 0x0000, mask 0x40
    UPROPERTY() uint8 bGenerateLightmapUVs : 1;  // 0x0000, mask 0x80
    UPROPERTY() int32 MinLightmapResolution;  // 0x0004, size 0x4
    UPROPERTY() int32 SrcLightmapIndex;  // 0x0008, size 0x4
    UPROPERTY() int32 DstLightmapIndex;  // 0x000C, size 0x4
};
