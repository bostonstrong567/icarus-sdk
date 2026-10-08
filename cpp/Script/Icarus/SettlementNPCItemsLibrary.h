// /Script/Icarus.SettlementNPCItemsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementNPCItems/SettlementNPCItemsLibrary.h

UCLASS()
class USettlementNPCItemsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToSettlementNPCItemsTable(FName Name, FSettlementNPCItemData Data, FSettlementNPCItemsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x189
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSettlementNPCItemsEnum(FSettlementNPCItemsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSettlementNPCItemsRowHandle CastToSettlementNPCItemsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSettlementNPCItemsEnum A, FSettlementNPCItemsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSettlementNPCItemsRowHandleFSettlementNPCItemsRowHandle(FSettlementNPCItemsRowHandle RowHandleA, FSettlementNPCItemsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSettlementNPCItemsStruct(FSettlementNPCItemsRowHandle RowHandle, FSettlementNPCItemData& SettlementNPCItems, EValid& Paths);  // parameters 0x181
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsRowHandle MakeLiteralSettlementNPCItems(FSettlementNPCItemsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsRowHandle MakeSettlementNPCItems(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsEnum MakeSettlementNPCItemsEnum(FSettlementNPCItemsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsRowHandle MakeSettlementNPCItemsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSettlementNPCItemsEnum A, FSettlementNPCItemsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSettlementNPCItemsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSettlementNPCItemsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsEnum RowHandleToStruct(FSettlementNPCItemsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSettlementNPCItemsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSettlementNPCItemsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCItemsRowHandle StructToRowHandle(FSettlementNPCItemsEnum EnumValue);  // parameters 0x28
};
