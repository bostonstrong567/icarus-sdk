// /Script/Icarus.SessionFlagsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SessionFlags/SessionFlagsLibrary.h

UCLASS()
class USessionFlagsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToSessionFlagsTable(FName Name, FSessionFlag Data, FSessionFlagsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSessionFlagsEnum(FSessionFlagsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSessionFlagsRowHandle CastToSessionFlagsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSessionFlagsEnum A, FSessionFlagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSessionFlagsRowHandleFSessionFlagsRowHandle(FSessionFlagsRowHandle RowHandleA, FSessionFlagsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSessionFlagsStruct(FSessionFlagsRowHandle RowHandle, FSessionFlag& SessionFlags, EValid& Paths);  // parameters 0x31
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsRowHandle MakeLiteralSessionFlags(FSessionFlagsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsRowHandle MakeSessionFlags(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsEnum MakeSessionFlagsEnum(FSessionFlagsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsRowHandle MakeSessionFlagsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSessionFlagsEnum A, FSessionFlagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSessionFlagsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSessionFlagsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsEnum RowHandleToStruct(FSessionFlagsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSessionFlagsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSessionFlagsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsRowHandle StructToRowHandle(FSessionFlagsEnum EnumValue);  // parameters 0x28
};
