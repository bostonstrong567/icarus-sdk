// /Script/Icarus.OptionalResourceFlowsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/OptionalResourceFlows/OptionalResourceFlowsLibrary.h

UCLASS()
class UOptionalResourceFlowsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToOptionalResourceFlowsTable(FName Name, FOptionalResourceFlowData Data, FOptionalResourceFlowsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakOptionalResourceFlowsEnum(FOptionalResourceFlowsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FOptionalResourceFlowsRowHandle CastToOptionalResourceFlowsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FOptionalResourceFlowsEnum A, FOptionalResourceFlowsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FOptionalResourceFlowsRowHandleFOptionalResourceFlowsRowHandle(FOptionalResourceFlowsRowHandle RowHandleA, FOptionalResourceFlowsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetOptionalResourceFlowsStruct(FOptionalResourceFlowsRowHandle RowHandle, FOptionalResourceFlowData& OptionalResourceFlows, EValid& Paths);  // parameters 0x61
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsRowHandle MakeLiteralOptionalResourceFlows(FOptionalResourceFlowsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsRowHandle MakeOptionalResourceFlows(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsEnum MakeOptionalResourceFlowsEnum(FOptionalResourceFlowsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsRowHandle MakeOptionalResourceFlowsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FOptionalResourceFlowsEnum A, FOptionalResourceFlowsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FOptionalResourceFlowsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromOptionalResourceFlowsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsEnum RowHandleToStruct(FOptionalResourceFlowsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FOptionalResourceFlowsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FOptionalResourceFlowsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FOptionalResourceFlowsRowHandle StructToRowHandle(FOptionalResourceFlowsEnum EnumValue);  // parameters 0x28
};
