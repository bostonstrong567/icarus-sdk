// /Script/Icarus.RecipeSetsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/RecipeSets/RecipeSetsLibrary.h

UCLASS()
class URecipeSetsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToRecipeSetsTable(FName Name, FRecipeSet Data, FRecipeSetsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRecipeSetsEnum(FRecipeSetsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FRecipeSetsRowHandle CastToRecipeSetsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FRecipeSetsEnum A, FRecipeSetsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRecipeSetsRowHandleFRecipeSetsRowHandle(FRecipeSetsRowHandle RowHandleA, FRecipeSetsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetRecipeSetsStruct(FRecipeSetsRowHandle RowHandle, FRecipeSet& RecipeSets, EValid& Paths);  // parameters 0x91
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsRowHandle MakeLiteralRecipeSets(FRecipeSetsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsRowHandle MakeRecipeSets(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsEnum MakeRecipeSetsEnum(FRecipeSetsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsRowHandle MakeRecipeSetsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FRecipeSetsEnum A, FRecipeSetsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FRecipeSetsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromRecipeSetsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsEnum RowHandleToStruct(FRecipeSetsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FRecipeSetsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FRecipeSetsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecipeSetsRowHandle StructToRowHandle(FRecipeSetsEnum EnumValue);  // parameters 0x28
};
