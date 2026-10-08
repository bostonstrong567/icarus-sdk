// /Script/DatasmithContent.DatasmithStaticMeshImportOptions
// size 0x4, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithImportOptions.h

USTRUCT()
struct FDatasmithStaticMeshImportOptions
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDatasmithImportLightmapMin MinLightmapResolution;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDatasmithImportLightmapMax MaxLightmapResolution;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bGenerateLightmapUVs;  // 0x0002, size 0x1
    UPROPERTY(Transient, BlueprintReadWrite) bool bRemoveDegenerates;  // 0x0003, size 0x1
};
