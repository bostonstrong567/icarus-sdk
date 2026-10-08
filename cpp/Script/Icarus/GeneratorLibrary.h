// /Script/Icarus.GeneratorLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Generator/GeneratorLibrary.h

UCLASS()
class UGeneratorLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToGeneratorTable(FName Name, FGeneratorData Data, FGeneratorRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGeneratorEnum(FGeneratorEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGeneratorRowHandle CastToGeneratorRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGeneratorEnum A, FGeneratorEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGeneratorRowHandleFGeneratorRowHandle(FGeneratorRowHandle RowHandleA, FGeneratorRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGeneratorStruct(FGeneratorRowHandle RowHandle, FGeneratorData& Generator, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorRowHandle MakeGenerator(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorEnum MakeGeneratorEnum(FGeneratorEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorRowHandle MakeGeneratorFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorRowHandle MakeLiteralGenerator(FGeneratorRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGeneratorEnum A, FGeneratorEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGeneratorEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGeneratorTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorEnum RowHandleToStruct(FGeneratorRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGeneratorEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGeneratorEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGeneratorRowHandle StructToRowHandle(FGeneratorEnum EnumValue);  // parameters 0x28
};
