// /Script/Icarus.SettlementBuildingsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementBuildings/SettlementBuildingsLibrary.h

UCLASS()
class USettlementBuildingsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToSettlementBuildingsTable(FName Name, FSettlementBuildingData Data, FSettlementBuildingsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x191
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSettlementBuildingsEnum(FSettlementBuildingsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSettlementBuildingsRowHandle CastToSettlementBuildingsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSettlementBuildingsEnum A, FSettlementBuildingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSettlementBuildingsRowHandleFSettlementBuildingsRowHandle(FSettlementBuildingsRowHandle RowHandleA, FSettlementBuildingsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSettlementBuildingsStruct(FSettlementBuildingsRowHandle RowHandle, FSettlementBuildingData& SettlementBuildings, EValid& Paths);  // parameters 0x189
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsRowHandle MakeLiteralSettlementBuildings(FSettlementBuildingsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsRowHandle MakeSettlementBuildings(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsEnum MakeSettlementBuildingsEnum(FSettlementBuildingsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsRowHandle MakeSettlementBuildingsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSettlementBuildingsEnum A, FSettlementBuildingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSettlementBuildingsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSettlementBuildingsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsEnum RowHandleToStruct(FSettlementBuildingsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSettlementBuildingsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSettlementBuildingsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementBuildingsRowHandle StructToRowHandle(FSettlementBuildingsEnum EnumValue);  // parameters 0x28
};
