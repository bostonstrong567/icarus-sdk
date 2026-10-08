// /Script/Icarus.FarmingGrowthStatesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FarmingGrowthStates/FarmingGrowthStatesLibrary.h

UCLASS()
class UFarmingGrowthStatesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFarmingGrowthStatesTable(FName Name, FFarmingGrowthState Data, FFarmingGrowthStatesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFarmingGrowthStatesEnum(FFarmingGrowthStatesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFarmingGrowthStatesRowHandle CastToFarmingGrowthStatesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFarmingGrowthStatesEnum A, FFarmingGrowthStatesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFarmingGrowthStatesRowHandleFFarmingGrowthStatesRowHandle(FFarmingGrowthStatesRowHandle RowHandleA, FFarmingGrowthStatesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFarmingGrowthStatesStruct(FFarmingGrowthStatesRowHandle RowHandle, FFarmingGrowthState& FarmingGrowthStates, EValid& Paths);  // parameters 0x71
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesRowHandle MakeFarmingGrowthStates(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesEnum MakeFarmingGrowthStatesEnum(FFarmingGrowthStatesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesRowHandle MakeFarmingGrowthStatesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesRowHandle MakeLiteralFarmingGrowthStates(FFarmingGrowthStatesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFarmingGrowthStatesEnum A, FFarmingGrowthStatesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFarmingGrowthStatesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFarmingGrowthStatesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesEnum RowHandleToStruct(FFarmingGrowthStatesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFarmingGrowthStatesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFarmingGrowthStatesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFarmingGrowthStatesRowHandle StructToRowHandle(FFarmingGrowthStatesEnum EnumValue);  // parameters 0x28
};
