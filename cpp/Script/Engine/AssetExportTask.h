// /Script/Engine.AssetExportTask
// Derives from: UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Public/AssetExportTask.h

UCLASS(Transient)
class UAssetExportTask : public UObject
{
public:
    UPROPERTY(BlueprintReadWrite) UObject* Object;  // 0x0028, size 0x8
    UPROPERTY(BlueprintReadWrite) UExporter* Exporter;  // 0x0030, size 0x8
    UPROPERTY(BlueprintReadWrite) FString Filename;  // 0x0038, size 0x10
    UPROPERTY(BlueprintReadWrite) bool bSelected;  // 0x0048, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bReplaceIdentical;  // 0x0049, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bPrompt;  // 0x004A, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bAutomated;  // 0x004B, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bUseFileArchive;  // 0x004C, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bWriteEmptyFiles;  // 0x004D, size 0x1
    UPROPERTY(BlueprintReadWrite) TArray<UObject*> IgnoreObjectList;  // 0x0050, size 0x10
    UPROPERTY(BlueprintReadWrite) UObject* Options;  // 0x0060, size 0x8
    UPROPERTY(BlueprintReadWrite) TArray<FString> Errors;  // 0x0068, size 0x10
};
