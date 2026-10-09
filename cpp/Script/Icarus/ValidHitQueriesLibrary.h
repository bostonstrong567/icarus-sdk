// /Script/Icarus.ValidHitQueriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ValidHitQueries/ValidHitQueriesLibrary.h

UCLASS()
class UValidHitQueriesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToValidHitQueriesTable(FName Name, FValidHitQuery Data, FValidHitQueriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakValidHitQueriesEnum(FValidHitQueriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FValidHitQueriesRowHandle CastToValidHitQueriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FValidHitQueriesEnum A, FValidHitQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FValidHitQueriesRowHandleFValidHitQueriesRowHandle(FValidHitQueriesRowHandle RowHandleA, FValidHitQueriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetValidHitQueriesStruct(FValidHitQueriesRowHandle RowHandle, FValidHitQuery& ValidHitQueries, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesRowHandle MakeLiteralValidHitQueries(FValidHitQueriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesRowHandle MakeValidHitQueries(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesEnum MakeValidHitQueriesEnum(FValidHitQueriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesRowHandle MakeValidHitQueriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FValidHitQueriesEnum A, FValidHitQueriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FValidHitQueriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromValidHitQueriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesEnum RowHandleToStruct(FValidHitQueriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FValidHitQueriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FValidHitQueriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitQueriesRowHandle StructToRowHandle(FValidHitQueriesEnum EnumValue);  // parameters 0x28
};
