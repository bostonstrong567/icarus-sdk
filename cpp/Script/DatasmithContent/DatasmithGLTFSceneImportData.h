// /Script/DatasmithContent.DatasmithGLTFSceneImportData
// Derives from: UDatasmithSceneImportData > UAssetImportData > UObject
// size 0x70, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithAssetImportData.h

UCLASS(EditInlineNew)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
    UPROPERTY(EditAnywhere) FString Generator;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) float Version;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) FString Author;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) FString License;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) FString Source;  // 0x0060, size 0x10
};
