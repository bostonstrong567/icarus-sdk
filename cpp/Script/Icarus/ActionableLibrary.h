// /Script/Icarus.ActionableLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Actionable/ActionableLibrary.h

UCLASS()
class UActionableLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToActionableTable(FName Name, FActionableData Data, FActionableRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakActionableEnum(FActionableEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FActionableRowHandle CastToActionableRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FActionableEnum A, FActionableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FActionableRowHandleFActionableRowHandle(FActionableRowHandle RowHandleA, FActionableRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetActionableStruct(FActionableRowHandle RowHandle, FActionableData& Actionable, EValid& Paths);  // parameters 0xA1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableRowHandle MakeActionable(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableEnum MakeActionableEnum(FActionableEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableRowHandle MakeActionableFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableRowHandle MakeLiteralActionable(FActionableRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FActionableEnum A, FActionableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FActionableEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromActionableTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableEnum RowHandleToStruct(FActionableRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FActionableEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FActionableEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FActionableRowHandle StructToRowHandle(FActionableEnum EnumValue);  // parameters 0x28
};
