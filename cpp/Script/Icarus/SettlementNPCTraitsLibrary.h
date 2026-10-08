// /Script/Icarus.SettlementNPCTraitsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementNPCTraits/SettlementNPCTraitsLibrary.h

UCLASS()
class USettlementNPCTraitsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToSettlementNPCTraitsTable(FName Name, FSettlementNPCTraitData Data, FSettlementNPCTraitsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x101
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSettlementNPCTraitsEnum(FSettlementNPCTraitsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSettlementNPCTraitsRowHandle CastToSettlementNPCTraitsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSettlementNPCTraitsEnum A, FSettlementNPCTraitsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSettlementNPCTraitsRowHandleFSettlementNPCTraitsRowHandle(FSettlementNPCTraitsRowHandle RowHandleA, FSettlementNPCTraitsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSettlementNPCTraitsStruct(FSettlementNPCTraitsRowHandle RowHandle, FSettlementNPCTraitData& SettlementNPCTraits, EValid& Paths);  // parameters 0xF9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsRowHandle MakeLiteralSettlementNPCTraits(FSettlementNPCTraitsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsRowHandle MakeSettlementNPCTraits(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsEnum MakeSettlementNPCTraitsEnum(FSettlementNPCTraitsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsRowHandle MakeSettlementNPCTraitsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSettlementNPCTraitsEnum A, FSettlementNPCTraitsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSettlementNPCTraitsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSettlementNPCTraitsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsEnum RowHandleToStruct(FSettlementNPCTraitsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSettlementNPCTraitsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSettlementNPCTraitsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTraitsRowHandle StructToRowHandle(FSettlementNPCTraitsEnum EnumValue);  // parameters 0x28
};
