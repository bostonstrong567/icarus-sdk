// /Script/Icarus.BreakableRockDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BreakableRockData/BreakableRockDataLibrary.h

UCLASS()
class UBreakableRockDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToBreakableRockDataTable(FName Name, FBreakableRockData Data, FBreakableRockDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBreakableRockDataEnum(FBreakableRockDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBreakableRockDataRowHandle CastToBreakableRockDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBreakableRockDataEnum A, FBreakableRockDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBreakableRockDataRowHandleFBreakableRockDataRowHandle(FBreakableRockDataRowHandle RowHandleA, FBreakableRockDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBreakableRockDataStruct(FBreakableRockDataRowHandle RowHandle, FBreakableRockData& BreakableRockData, EValid& Paths);  // parameters 0xD1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataRowHandle MakeBreakableRockData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataEnum MakeBreakableRockDataEnum(FBreakableRockDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataRowHandle MakeBreakableRockDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataRowHandle MakeLiteralBreakableRockData(FBreakableRockDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBreakableRockDataEnum A, FBreakableRockDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBreakableRockDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBreakableRockDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataEnum RowHandleToStruct(FBreakableRockDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBreakableRockDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBreakableRockDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBreakableRockDataRowHandle StructToRowHandle(FBreakableRockDataEnum EnumValue);  // parameters 0x28
};
