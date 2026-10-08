// /Script/Icarus.CraftingTagsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CraftingTags/CraftingTagsLibrary.h

UCLASS()
class UCraftingTagsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToCraftingTagsTable(FName Name, FCraftingTag Data, FCraftingTagsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCraftingTagsEnum(FCraftingTagsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCraftingTagsRowHandle CastToCraftingTagsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCraftingTagsEnum A, FCraftingTagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCraftingTagsRowHandleFCraftingTagsRowHandle(FCraftingTagsRowHandle RowHandleA, FCraftingTagsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCraftingTagsStruct(FCraftingTagsRowHandle RowHandle, FCraftingTag& CraftingTags, EValid& Paths);  // parameters 0x89
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsRowHandle MakeCraftingTags(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsEnum MakeCraftingTagsEnum(FCraftingTagsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsRowHandle MakeCraftingTagsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsRowHandle MakeLiteralCraftingTags(FCraftingTagsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCraftingTagsEnum A, FCraftingTagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCraftingTagsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCraftingTagsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsEnum RowHandleToStruct(FCraftingTagsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCraftingTagsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCraftingTagsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingTagsRowHandle StructToRowHandle(FCraftingTagsEnum EnumValue);  // parameters 0x28
};
