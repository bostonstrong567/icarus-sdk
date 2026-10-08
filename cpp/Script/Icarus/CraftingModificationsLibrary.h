// /Script/Icarus.CraftingModificationsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CraftingModifications/CraftingModificationsLibrary.h

UCLASS()
class UCraftingModificationsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToCraftingModificationsTable(FName Name, FCraftingModifications Data, FCraftingModificationsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCraftingModificationsEnum(FCraftingModificationsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCraftingModificationsRowHandle CastToCraftingModificationsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCraftingModificationsEnum A, FCraftingModificationsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCraftingModificationsRowHandleFCraftingModificationsRowHandle(FCraftingModificationsRowHandle RowHandleA, FCraftingModificationsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCraftingModificationsStruct(FCraftingModificationsRowHandle RowHandle, FCraftingModifications& CraftingModifications, EValid& Paths);  // parameters 0x91
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsRowHandle MakeCraftingModifications(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsEnum MakeCraftingModificationsEnum(FCraftingModificationsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsRowHandle MakeCraftingModificationsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsRowHandle MakeLiteralCraftingModifications(FCraftingModificationsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCraftingModificationsEnum A, FCraftingModificationsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCraftingModificationsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCraftingModificationsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsEnum RowHandleToStruct(FCraftingModificationsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCraftingModificationsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCraftingModificationsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingModificationsRowHandle StructToRowHandle(FCraftingModificationsEnum EnumValue);  // parameters 0x28
};
