// /Script/Icarus.LogCategoriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/LogCategories/LogCategoriesLibrary.h

UCLASS()
class ULogCategoriesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToLogCategoriesTable(FName Name, FIcarusLogCategory Data, FLogCategoriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakLogCategoriesEnum(FLogCategoriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FLogCategoriesRowHandle CastToLogCategoriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FLogCategoriesEnum A, FLogCategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FLogCategoriesRowHandleFLogCategoriesRowHandle(FLogCategoriesRowHandle RowHandleA, FLogCategoriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetLogCategoriesStruct(FLogCategoriesRowHandle RowHandle, FIcarusLogCategory& LogCategories, EValid& Paths);  // parameters 0x61
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesRowHandle MakeLiteralLogCategories(FLogCategoriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesRowHandle MakeLogCategories(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesEnum MakeLogCategoriesEnum(FLogCategoriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesRowHandle MakeLogCategoriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FLogCategoriesEnum A, FLogCategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FLogCategoriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromLogCategoriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesEnum RowHandleToStruct(FLogCategoriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FLogCategoriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FLogCategoriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLogCategoriesRowHandle StructToRowHandle(FLogCategoriesEnum EnumValue);  // parameters 0x28
};
