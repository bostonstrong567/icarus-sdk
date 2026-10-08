// /Script/Icarus.PlayerTrackerCategoriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/PlayerTrackerCategories/PlayerTrackerCategoriesLibrary.h

UCLASS()
class UPlayerTrackerCategoriesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToPlayerTrackerCategoriesTable(FName Name, FPlayerTrackerCategory Data, FPlayerTrackerCategoriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPlayerTrackerCategoriesEnum(FPlayerTrackerCategoriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPlayerTrackerCategoriesRowHandle CastToPlayerTrackerCategoriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPlayerTrackerCategoriesEnum A, FPlayerTrackerCategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPlayerTrackerCategoriesRowHandleFPlayerTrackerCategoriesRowHandle(FPlayerTrackerCategoriesRowHandle RowHandleA, FPlayerTrackerCategoriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPlayerTrackerCategoriesStruct(FPlayerTrackerCategoriesRowHandle RowHandle, FPlayerTrackerCategory& PlayerTrackerCategories, EValid& Paths);  // parameters 0x41
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesRowHandle MakeLiteralPlayerTrackerCategories(FPlayerTrackerCategoriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesRowHandle MakePlayerTrackerCategories(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesEnum MakePlayerTrackerCategoriesEnum(FPlayerTrackerCategoriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesRowHandle MakePlayerTrackerCategoriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPlayerTrackerCategoriesEnum A, FPlayerTrackerCategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPlayerTrackerCategoriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPlayerTrackerCategoriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesEnum RowHandleToStruct(FPlayerTrackerCategoriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPlayerTrackerCategoriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPlayerTrackerCategoriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackerCategoriesRowHandle StructToRowHandle(FPlayerTrackerCategoriesEnum EnumValue);  // parameters 0x28
};
