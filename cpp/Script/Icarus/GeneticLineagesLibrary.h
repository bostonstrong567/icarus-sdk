// /Script/Icarus.GeneticLineagesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GeneticLineages/GeneticLineagesLibrary.h

UCLASS()
class UGeneticLineagesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToGeneticLineagesTable(FName Name, FGeneticLineage Data, FGeneticLineagesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xF9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGeneticLineagesEnum(FGeneticLineagesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGeneticLineagesRowHandle CastToGeneticLineagesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGeneticLineagesEnum A, FGeneticLineagesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGeneticLineagesRowHandleFGeneticLineagesRowHandle(FGeneticLineagesRowHandle RowHandleA, FGeneticLineagesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGeneticLineagesStruct(FGeneticLineagesRowHandle RowHandle, FGeneticLineage& GeneticLineages, EValid& Paths);  // parameters 0xF1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesRowHandle MakeGeneticLineages(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesEnum MakeGeneticLineagesEnum(FGeneticLineagesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesRowHandle MakeGeneticLineagesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesRowHandle MakeLiteralGeneticLineages(FGeneticLineagesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGeneticLineagesEnum A, FGeneticLineagesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGeneticLineagesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGeneticLineagesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesEnum RowHandleToStruct(FGeneticLineagesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGeneticLineagesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGeneticLineagesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneticLineagesRowHandle StructToRowHandle(FGeneticLineagesEnum EnumValue);  // parameters 0x28
};
