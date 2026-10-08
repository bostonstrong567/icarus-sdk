// /Script/Icarus.ItemAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ItemAudioData/ItemAudioDataLibrary.h

UCLASS()
class UItemAudioDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToItemAudioDataTable(FName Name, FItemAudioData Data, FItemAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x2E1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemAudioDataEnum(FItemAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemAudioDataRowHandle CastToItemAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemAudioDataEnum A, FItemAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemAudioDataRowHandleFItemAudioDataRowHandle(FItemAudioDataRowHandle RowHandleA, FItemAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemAudioDataStruct(FItemAudioDataRowHandle RowHandle, FItemAudioData& ItemAudioData, EValid& Paths);  // parameters 0x2D9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataRowHandle MakeItemAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataEnum MakeItemAudioDataEnum(FItemAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataRowHandle MakeItemAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataRowHandle MakeLiteralItemAudioData(FItemAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemAudioDataEnum A, FItemAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataEnum RowHandleToStruct(FItemAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAudioDataRowHandle StructToRowHandle(FItemAudioDataEnum EnumValue);  // parameters 0x28
};
