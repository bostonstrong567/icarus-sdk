// /Script/Icarus.ItemWeightStatQueriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ItemWeightStatQueries/ItemWeightStatQueriesLibrary.h

UCLASS()
class UItemWeightStatQueriesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToItemWeightStatQueriesTable(FName Name, FItemWeightStatQueries Data, FItemWeightStatQueriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemWeightStatQueriesEnum(FItemWeightStatQueriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemWeightStatQueriesRowHandle CastToItemWeightStatQueriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemWeightStatQueriesEnum A, FItemWeightStatQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemWeightStatQueriesRowHandleFItemWeightStatQueriesRowHandle(FItemWeightStatQueriesRowHandle RowHandleA, FItemWeightStatQueriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemWeightStatQueriesStruct(FItemWeightStatQueriesRowHandle RowHandle, FItemWeightStatQueries& ItemWeightStatQueries, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesRowHandle MakeItemWeightStatQueries(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesEnum MakeItemWeightStatQueriesEnum(FItemWeightStatQueriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesRowHandle MakeItemWeightStatQueriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesRowHandle MakeLiteralItemWeightStatQueries(FItemWeightStatQueriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemWeightStatQueriesEnum A, FItemWeightStatQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemWeightStatQueriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemWeightStatQueriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesEnum RowHandleToStruct(FItemWeightStatQueriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemWeightStatQueriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemWeightStatQueriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemWeightStatQueriesRowHandle StructToRowHandle(FItemWeightStatQueriesEnum EnumValue);  // parameters 0x28
};
