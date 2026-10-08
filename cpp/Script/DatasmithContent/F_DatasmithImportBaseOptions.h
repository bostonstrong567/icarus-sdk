// /Script/DatasmithContent.DatasmithImportBaseOptions
// size 0x14, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithImportOptions.h

USTRUCT()
struct FDatasmithImportBaseOptions
{
    UPROPERTY(Transient, BlueprintReadWrite) EDatasmithImportScene SceneHandling;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bIncludeGeometry;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bIncludeMaterial;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bIncludeLight;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bIncludeCamera;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bIncludeAnimation;  // 0x0005, size 0x1
    UPROPERTY(BlueprintReadWrite) FDatasmithAssetImportOptions AssetOptions;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FDatasmithStaticMeshImportOptions StaticMeshOptions;  // 0x0010, size 0x4
};
