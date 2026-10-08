// /Script/DatasmithContent.DatasmithFBXSceneImportData
// Derives from: UDatasmithSceneImportData > UAssetImportData > UObject
// size 0x48, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithAssetImportData.h

UCLASS(EditInlineNew)
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
    UPROPERTY(EditAnywhere) bool bGenerateLightmapUVs;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) FString TexturesDir;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) uint8 IntermediateSerialization;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) bool bColorizeMaterials;  // 0x0041, size 0x1
};
