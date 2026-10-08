// /Script/DatasmithContent.DatasmithDeltaGenSceneImportData
// Derives from: UDatasmithFBXSceneImportData > UDatasmithSceneImportData > UAssetImportData > UObject
// size 0x90, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithAssetImportData.h

UCLASS(EditInlineNew)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
    UPROPERTY(EditAnywhere) bool bMergeNodes;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere) bool bOptimizeDuplicatedNodes;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere) bool bRemoveInvisibleNodes;  // 0x004A, size 0x1
    UPROPERTY(EditAnywhere) bool bSimplifyNodeHierarchy;  // 0x004B, size 0x1
    UPROPERTY(EditAnywhere) bool bImportVar;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) FString VarPath;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) bool bImportPos;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere) FString PosPath;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) bool bImportTml;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere) FString TmlPath;  // 0x0080, size 0x10
};
