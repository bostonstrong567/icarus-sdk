// /Script/Icarus.GOAPActionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GOAPActions/GOAPActionsLibrary.h

UCLASS()
class UGOAPActionsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToGOAPActionsTable(FName Name, FGOAPAction Data, FGOAPActionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x129
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGOAPActionsEnum(FGOAPActionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGOAPActionsRowHandle CastToGOAPActionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGOAPActionsEnum A, FGOAPActionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGOAPActionsRowHandleFGOAPActionsRowHandle(FGOAPActionsRowHandle RowHandleA, FGOAPActionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGOAPActionsStruct(FGOAPActionsRowHandle RowHandle, FGOAPAction& GOAPActions, EValid& Paths);  // parameters 0x121
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsRowHandle MakeGOAPActions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsEnum MakeGOAPActionsEnum(FGOAPActionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsRowHandle MakeGOAPActionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsRowHandle MakeLiteralGOAPActions(FGOAPActionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGOAPActionsEnum A, FGOAPActionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGOAPActionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGOAPActionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsEnum RowHandleToStruct(FGOAPActionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGOAPActionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGOAPActionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGOAPActionsRowHandle StructToRowHandle(FGOAPActionsEnum EnumValue);  // parameters 0x28
};
