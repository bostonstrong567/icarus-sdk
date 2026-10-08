// /Script/DatasmithContent.DatasmithVREDSceneImportData
// Derives from: UDatasmithFBXSceneImportData > UDatasmithSceneImportData > UAssetImportData > UObject
// size 0xA8, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithAssetImportData.h

UCLASS(EditInlineNew)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
    UPROPERTY(EditAnywhere) bool bMergeNodes;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere) bool bOptimizeDuplicatedNodes;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere) bool bImportMats;  // 0x004A, size 0x1
    UPROPERTY(EditAnywhere) FString MatsPath;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) bool bImportVar;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere) bool bCleanVar;  // 0x0061, size 0x1
    UPROPERTY(EditAnywhere) FString VarPath;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) bool bImportLightInfo;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere) FString LightInfoPath;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere) bool bImportClipInfo;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere) FString ClipInfoPath;  // 0x0098, size 0x10
};
