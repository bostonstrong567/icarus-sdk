// /Script/Icarus.SettlementNPCClothingLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementNPCClothing/SettlementNPCClothingLibrary.h

UCLASS()
class USettlementNPCClothingLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToSettlementNPCClothingTable(FName Name, FSettlementNPCClothingData Data, FSettlementNPCClothingRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSettlementNPCClothingEnum(FSettlementNPCClothingEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSettlementNPCClothingRowHandle CastToSettlementNPCClothingRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSettlementNPCClothingEnum A, FSettlementNPCClothingEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSettlementNPCClothingRowHandleFSettlementNPCClothingRowHandle(FSettlementNPCClothingRowHandle RowHandleA, FSettlementNPCClothingRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSettlementNPCClothingStruct(FSettlementNPCClothingRowHandle RowHandle, FSettlementNPCClothingData& SettlementNPCClothing, EValid& Paths);  // parameters 0x91
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingRowHandle MakeLiteralSettlementNPCClothing(FSettlementNPCClothingRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingRowHandle MakeSettlementNPCClothing(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingEnum MakeSettlementNPCClothingEnum(FSettlementNPCClothingEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingRowHandle MakeSettlementNPCClothingFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSettlementNPCClothingEnum A, FSettlementNPCClothingEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSettlementNPCClothingEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSettlementNPCClothingTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingEnum RowHandleToStruct(FSettlementNPCClothingRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSettlementNPCClothingEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSettlementNPCClothingEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCClothingRowHandle StructToRowHandle(FSettlementNPCClothingEnum EnumValue);  // parameters 0x28
};
