// /Script/Icarus.ValidInteractQueriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ValidInteractQueries/ValidInteractQueriesLibrary.h

UCLASS()
class UValidInteractQueriesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToValidInteractQueriesTable(FName Name, FValidInteractQuery Data, FValidInteractQueriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakValidInteractQueriesEnum(FValidInteractQueriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FValidInteractQueriesRowHandle CastToValidInteractQueriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FValidInteractQueriesEnum A, FValidInteractQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FValidInteractQueriesRowHandleFValidInteractQueriesRowHandle(FValidInteractQueriesRowHandle RowHandleA, FValidInteractQueriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetValidInteractQueriesStruct(FValidInteractQueriesRowHandle RowHandle, FValidInteractQuery& ValidInteractQueries, EValid& Paths);  // parameters 0x89
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesRowHandle MakeLiteralValidInteractQueries(FValidInteractQueriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesRowHandle MakeValidInteractQueries(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesEnum MakeValidInteractQueriesEnum(FValidInteractQueriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesRowHandle MakeValidInteractQueriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FValidInteractQueriesEnum A, FValidInteractQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FValidInteractQueriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromValidInteractQueriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesEnum RowHandleToStruct(FValidInteractQueriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FValidInteractQueriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FValidInteractQueriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidInteractQueriesRowHandle StructToRowHandle(FValidInteractQueriesEnum EnumValue);  // parameters 0x28
};
