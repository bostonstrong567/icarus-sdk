// /Script/Icarus.ProcessorRecipesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ProcessorRecipes/ProcessorRecipesLibrary.h

UCLASS()
class UProcessorRecipesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToProcessorRecipesTable(FName Name, FProcessorRecipe Data, FProcessorRecipesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x329
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakProcessorRecipesEnum(FProcessorRecipesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FProcessorRecipesRowHandle CastToProcessorRecipesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FProcessorRecipesEnum A, FProcessorRecipesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle(FProcessorRecipesRowHandle RowHandleA, FProcessorRecipesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetProcessorRecipesStruct(FProcessorRecipesRowHandle RowHandle, FProcessorRecipe& ProcessorRecipes, EValid& Paths);  // parameters 0x321
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesRowHandle MakeLiteralProcessorRecipes(FProcessorRecipesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesRowHandle MakeProcessorRecipes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesEnum MakeProcessorRecipesEnum(FProcessorRecipesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesRowHandle MakeProcessorRecipesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FProcessorRecipesEnum A, FProcessorRecipesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FProcessorRecipesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromProcessorRecipesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesEnum RowHandleToStruct(FProcessorRecipesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FProcessorRecipesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FProcessorRecipesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProcessorRecipesRowHandle StructToRowHandle(FProcessorRecipesEnum EnumValue);  // parameters 0x28
};
