// /Script/DatasmithContent.DatasmithImportOptions
// Derives from: UDatasmithOptionsBase > UObject
// size 0x70, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithImportOptions.h

UCLASS(Config=EditorPerProjectUserSettings)
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
    UPROPERTY(Transient) EDatasmithImportSearchPackagePolicy SearchPackagePolicy;  // 0x0028, size 0x1
    UPROPERTY(Transient) EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;  // 0x0029, size 0x1
    UPROPERTY(Transient) EDatasmithImportAssetConflictPolicy TextureConflictPolicy;  // 0x002A, size 0x1
    UPROPERTY(Transient) EDatasmithImportActorPolicy StaticMeshActorImportPolicy;  // 0x002B, size 0x1
    UPROPERTY(Transient) EDatasmithImportActorPolicy LightImportPolicy;  // 0x002C, size 0x1
    UPROPERTY(Transient) EDatasmithImportActorPolicy CameraImportPolicy;  // 0x002D, size 0x1
    UPROPERTY(Transient) EDatasmithImportActorPolicy OtherActorImportPolicy;  // 0x002E, size 0x1
    UPROPERTY(Transient) EDatasmithImportMaterialQuality MaterialQuality;  // 0x002F, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FDatasmithImportBaseOptions BaseOptions;  // 0x0030, size 0x14
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FDatasmithReimportOptions ReimportOptions;  // 0x0044, size 0x2
    UPROPERTY(BlueprintReadWrite) FString FileName;  // 0x0048, size 0x10
    UPROPERTY(BlueprintReadWrite) FString FilePath;  // 0x0058, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bUseSameOptions;  // 0x0068
};
