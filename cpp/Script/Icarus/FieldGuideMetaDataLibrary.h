// /Script/Icarus.FieldGuideMetaDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FieldGuideMetaData/FieldGuideMetaDataLibrary.h

UCLASS()
class UFieldGuideMetaDataLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToFieldGuideMetaDataTable(FName Name, FFieldGuideMetaData Data, FFieldGuideMetaDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x111
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFieldGuideMetaDataEnum(FFieldGuideMetaDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFieldGuideMetaDataRowHandle CastToFieldGuideMetaDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFieldGuideMetaDataEnum A, FFieldGuideMetaDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFieldGuideMetaDataRowHandleFFieldGuideMetaDataRowHandle(FFieldGuideMetaDataRowHandle RowHandleA, FFieldGuideMetaDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFieldGuideMetaDataStruct(FFieldGuideMetaDataRowHandle RowHandle, FFieldGuideMetaData& FieldGuideMetaData, EValid& Paths);  // parameters 0x109
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataRowHandle MakeFieldGuideMetaData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataEnum MakeFieldGuideMetaDataEnum(FFieldGuideMetaDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataRowHandle MakeFieldGuideMetaDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataRowHandle MakeLiteralFieldGuideMetaData(FFieldGuideMetaDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFieldGuideMetaDataEnum A, FFieldGuideMetaDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFieldGuideMetaDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFieldGuideMetaDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataEnum RowHandleToStruct(FFieldGuideMetaDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFieldGuideMetaDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFieldGuideMetaDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideMetaDataRowHandle StructToRowHandle(FFieldGuideMetaDataEnum EnumValue);  // parameters 0x28
};
