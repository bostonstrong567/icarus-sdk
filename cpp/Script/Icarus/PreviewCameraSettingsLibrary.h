// /Script/Icarus.PreviewCameraSettingsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/PreviewCameraSettings/PreviewCameraSettingsLibrary.h

UCLASS()
class UPreviewCameraSettingsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToPreviewCameraSettingsTable(FName Name, FPreviewCameraSettings Data, FPreviewCameraSettingsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPreviewCameraSettingsEnum(FPreviewCameraSettingsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPreviewCameraSettingsRowHandle CastToPreviewCameraSettingsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPreviewCameraSettingsEnum A, FPreviewCameraSettingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPreviewCameraSettingsRowHandleFPreviewCameraSettingsRowHandle(FPreviewCameraSettingsRowHandle RowHandleA, FPreviewCameraSettingsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPreviewCameraSettingsStruct(FPreviewCameraSettingsRowHandle RowHandle, FPreviewCameraSettings& PreviewCameraSettings, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsRowHandle MakeLiteralPreviewCameraSettings(FPreviewCameraSettingsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsRowHandle MakePreviewCameraSettings(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsEnum MakePreviewCameraSettingsEnum(FPreviewCameraSettingsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsRowHandle MakePreviewCameraSettingsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPreviewCameraSettingsEnum A, FPreviewCameraSettingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPreviewCameraSettingsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPreviewCameraSettingsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsEnum RowHandleToStruct(FPreviewCameraSettingsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPreviewCameraSettingsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPreviewCameraSettingsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPreviewCameraSettingsRowHandle StructToRowHandle(FPreviewCameraSettingsEnum EnumValue);  // parameters 0x28
};
