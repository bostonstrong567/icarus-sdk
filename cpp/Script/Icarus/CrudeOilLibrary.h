// /Script/Icarus.CrudeOilLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CrudeOil/CrudeOilLibrary.h

UCLASS()
class UCrudeOilLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToCrudeOilTable(FName Name, FCrudeOilData Data, FCrudeOilRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCrudeOilEnum(FCrudeOilEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCrudeOilRowHandle CastToCrudeOilRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCrudeOilEnum A, FCrudeOilEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCrudeOilRowHandleFCrudeOilRowHandle(FCrudeOilRowHandle RowHandleA, FCrudeOilRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCrudeOilStruct(FCrudeOilRowHandle RowHandle, FCrudeOilData& CrudeOil, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilRowHandle MakeCrudeOil(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilEnum MakeCrudeOilEnum(FCrudeOilEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilRowHandle MakeCrudeOilFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilRowHandle MakeLiteralCrudeOil(FCrudeOilRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCrudeOilEnum A, FCrudeOilEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCrudeOilEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCrudeOilTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilEnum RowHandleToStruct(FCrudeOilRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCrudeOilEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCrudeOilEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCrudeOilRowHandle StructToRowHandle(FCrudeOilEnum EnumValue);  // parameters 0x28
};
