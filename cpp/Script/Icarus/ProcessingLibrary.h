// /Script/Icarus.ProcessingLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Processing/ProcessingLibrary.h

UCLASS()
class UProcessingLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToProcessingTable(FName Name, FProcessingData Data, FProcessingRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakProcessingEnum(FProcessingEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FProcessingRowHandle CastToProcessingRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FProcessingEnum A, FProcessingEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FProcessingRowHandleFProcessingRowHandle(FProcessingRowHandle RowHandleA, FProcessingRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetProcessingStruct(FProcessingRowHandle RowHandle, FProcessingData& Processing, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingRowHandle MakeLiteralProcessing(FProcessingRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingRowHandle MakeProcessing(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingEnum MakeProcessingEnum(FProcessingEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingRowHandle MakeProcessingFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FProcessingEnum A, FProcessingEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FProcessingEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromProcessingTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingEnum RowHandleToStruct(FProcessingRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FProcessingEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FProcessingEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessingRowHandle StructToRowHandle(FProcessingEnum EnumValue);  // parameters 0x28
};
