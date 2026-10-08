// /Script/Icarus.CraftingAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CraftingAudioData/CraftingAudioDataLibrary.h

UCLASS()
class UCraftingAudioDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToCraftingAudioDataTable(FName Name, FCraftingAudioData Data, FCraftingAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCraftingAudioDataEnum(FCraftingAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCraftingAudioDataRowHandle CastToCraftingAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCraftingAudioDataEnum A, FCraftingAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCraftingAudioDataRowHandleFCraftingAudioDataRowHandle(FCraftingAudioDataRowHandle RowHandleA, FCraftingAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCraftingAudioDataStruct(FCraftingAudioDataRowHandle RowHandle, FCraftingAudioData& CraftingAudioData, EValid& Paths);  // parameters 0xB1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataRowHandle MakeCraftingAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataEnum MakeCraftingAudioDataEnum(FCraftingAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataRowHandle MakeCraftingAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataRowHandle MakeLiteralCraftingAudioData(FCraftingAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCraftingAudioDataEnum A, FCraftingAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCraftingAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCraftingAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataEnum RowHandleToStruct(FCraftingAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCraftingAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCraftingAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCraftingAudioDataRowHandle StructToRowHandle(FCraftingAudioDataEnum EnumValue);  // parameters 0x28
};
