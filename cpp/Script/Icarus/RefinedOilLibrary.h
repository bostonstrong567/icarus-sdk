// /Script/Icarus.RefinedOilLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/RefinedOil/RefinedOilLibrary.h

UCLASS()
class URefinedOilLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToRefinedOilTable(FName Name, FRefinedOilData Data, FRefinedOilRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRefinedOilEnum(FRefinedOilEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FRefinedOilRowHandle CastToRefinedOilRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FRefinedOilEnum A, FRefinedOilEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRefinedOilRowHandleFRefinedOilRowHandle(FRefinedOilRowHandle RowHandleA, FRefinedOilRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetRefinedOilStruct(FRefinedOilRowHandle RowHandle, FRefinedOilData& RefinedOil, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilRowHandle MakeLiteralRefinedOil(FRefinedOilRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilRowHandle MakeRefinedOil(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilEnum MakeRefinedOilEnum(FRefinedOilEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilRowHandle MakeRefinedOilFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FRefinedOilEnum A, FRefinedOilEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FRefinedOilEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromRefinedOilTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilEnum RowHandleToStruct(FRefinedOilRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FRefinedOilEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FRefinedOilEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRefinedOilRowHandle StructToRowHandle(FRefinedOilEnum EnumValue);  // parameters 0x28
};
