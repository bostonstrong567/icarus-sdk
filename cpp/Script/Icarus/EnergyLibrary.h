// /Script/Icarus.EnergyLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Energy/EnergyLibrary.h

UCLASS()
class UEnergyLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToEnergyTable(FName Name, FEnergyData Data, FEnergyRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakEnergyEnum(FEnergyEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FEnergyRowHandle CastToEnergyRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FEnergyEnum A, FEnergyEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FEnergyRowHandleFEnergyRowHandle(FEnergyRowHandle RowHandleA, FEnergyRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetEnergyStruct(FEnergyRowHandle RowHandle, FEnergyData& Energy, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyRowHandle MakeEnergy(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyEnum MakeEnergyEnum(FEnergyEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyRowHandle MakeEnergyFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyRowHandle MakeLiteralEnergy(FEnergyRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FEnergyEnum A, FEnergyEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FEnergyEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromEnergyTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyEnum RowHandleToStruct(FEnergyRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FEnergyEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FEnergyEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEnergyRowHandle StructToRowHandle(FEnergyEnum EnumValue);  // parameters 0x28
};
