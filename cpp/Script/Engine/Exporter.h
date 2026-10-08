// /Script/Engine.Exporter
// Derives from: UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Exporters/Exporter.h

UCLASS(Abstract, Transient, MinimalAPI)
class UExporter : public UObject
{
public:
    UPROPERTY(BlueprintReadWrite) TSubclassOf<UObject> SupportedClass;  // 0x0028, size 0x8
    UPROPERTY(Transient) UObject* ExportRootScope;  // 0x0030, size 0x8
    UPROPERTY(BlueprintReadWrite) TArray<FString> FormatExtension;  // 0x0038, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<FString> FormatDescription;  // 0x0048, size 0x10
    UPROPERTY() int32 PreferredFormatIndex;  // 0x0058, size 0x4
    UPROPERTY() int32 TextIndent;  // 0x005C, size 0x4
    UPROPERTY(BlueprintReadWrite) uint8 bText : 1;  // 0x0060, mask 0x01
    UPROPERTY() uint8 bSelectedOnly : 1;  // 0x0060, mask 0x02
    UPROPERTY() uint8 bForceFileOperations : 1;  // 0x0060, mask 0x04
    UPROPERTY(BlueprintReadWrite) UAssetExportTask* ExportTask;  // 0x0068, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool BatchExportMode;  // 0x0070, protected
    bool ShowExportOption;  // 0x0071, protected
    bool CancelBatch;  // 0x0072, protected

    UFUNCTION(BlueprintCallable) static bool RunAssetExportTask(UAssetExportTask* Task);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool RunAssetExportTasks(const TArray<UAssetExportTask*>& ExportTasks);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) bool ScriptRunAssetExportTask(UAssetExportTask* Task);  // parameters 0x9

    // Virtual functions that start here:
    //   ExportBinary, ExportComponentExtra, ExportPackageInners, ExportPackageObject, ExportText
    //   GetBatchMode, GetCancelBatch, GetFileCount, GetShowExportOption, GetUniqueFilename, SetBatchMode
    //   SetCancelBatch, SetShowExportOption, SupportsObject
};
