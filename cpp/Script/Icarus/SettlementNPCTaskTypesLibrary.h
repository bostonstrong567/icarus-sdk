// /Script/Icarus.SettlementNPCTaskTypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementNPCTaskTypes/SettlementNPCTaskTypesLibrary.h

UCLASS()
class USettlementNPCTaskTypesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToSettlementNPCTaskTypesTable(FName Name, FSettlementNPCTaskTypeData Data, FSettlementNPCTaskTypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x119
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSettlementNPCTaskTypesEnum(FSettlementNPCTaskTypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSettlementNPCTaskTypesRowHandle CastToSettlementNPCTaskTypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSettlementNPCTaskTypesEnum A, FSettlementNPCTaskTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSettlementNPCTaskTypesRowHandleFSettlementNPCTaskTypesRowHandle(FSettlementNPCTaskTypesRowHandle RowHandleA, FSettlementNPCTaskTypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSettlementNPCTaskTypesStruct(FSettlementNPCTaskTypesRowHandle RowHandle, FSettlementNPCTaskTypeData& SettlementNPCTaskTypes, EValid& Paths);  // parameters 0x111
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesRowHandle MakeLiteralSettlementNPCTaskTypes(FSettlementNPCTaskTypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesRowHandle MakeSettlementNPCTaskTypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesEnum MakeSettlementNPCTaskTypesEnum(FSettlementNPCTaskTypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesRowHandle MakeSettlementNPCTaskTypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSettlementNPCTaskTypesEnum A, FSettlementNPCTaskTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSettlementNPCTaskTypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSettlementNPCTaskTypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesEnum RowHandleToStruct(FSettlementNPCTaskTypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSettlementNPCTaskTypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSettlementNPCTaskTypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTaskTypesRowHandle StructToRowHandle(FSettlementNPCTaskTypesEnum EnumValue);  // parameters 0x28
};
