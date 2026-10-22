// /Script/Icarus.SettlementTasksLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SettlementTasks/SettlementTasksLibrary.h

UCLASS()
class USettlementTasksLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToSettlementTasksTable(FName Name, FSettlementTaskData Data, FSettlementTasksRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSettlementTasksEnum(FSettlementTasksEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSettlementTasksRowHandle CastToSettlementTasksRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSettlementTasksEnum A, FSettlementTasksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSettlementTasksRowHandleFSettlementTasksRowHandle(FSettlementTasksRowHandle RowHandleA, FSettlementTasksRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSettlementTasksStruct(FSettlementTasksRowHandle RowHandle, FSettlementTaskData& SettlementTasks, EValid& Paths);  // parameters 0xC9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksRowHandle MakeLiteralSettlementTasks(FSettlementTasksRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksRowHandle MakeSettlementTasks(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksEnum MakeSettlementTasksEnum(FSettlementTasksEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksRowHandle MakeSettlementTasksFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSettlementTasksEnum A, FSettlementTasksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSettlementTasksEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSettlementTasksTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksEnum RowHandleToStruct(FSettlementTasksRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSettlementTasksEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSettlementTasksEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementTasksRowHandle StructToRowHandle(FSettlementTasksEnum EnumValue);  // parameters 0x28
};
