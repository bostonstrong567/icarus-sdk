// /Script/Icarus.TagQueriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TagQueries/TagQueriesLibrary.h

UCLASS()
class UTagQueriesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToTagQueriesTable(FName Name, FTagQueries Data, FTagQueriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTagQueriesEnum(FTagQueriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTagQueriesRowHandle CastToTagQueriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTagQueriesEnum A, FTagQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle(FTagQueriesRowHandle RowHandleA, FTagQueriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTagQueriesStruct(FTagQueriesRowHandle RowHandle, FTagQueries& TagQueries, EValid& Paths);  // parameters 0x91
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesRowHandle MakeLiteralTagQueries(FTagQueriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesRowHandle MakeTagQueries(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesEnum MakeTagQueriesEnum(FTagQueriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesRowHandle MakeTagQueriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTagQueriesEnum A, FTagQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTagQueriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTagQueriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesEnum RowHandleToStruct(FTagQueriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTagQueriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTagQueriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTagQueriesRowHandle StructToRowHandle(FTagQueriesEnum EnumValue);  // parameters 0x28
};
