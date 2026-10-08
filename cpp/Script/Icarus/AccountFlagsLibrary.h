// /Script/Icarus.AccountFlagsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AccountFlags/AccountFlagsLibrary.h

UCLASS()
class UAccountFlagsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAccountFlagsTable(FName Name, FAccountFlag Data, FAccountFlagsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAccountFlagsEnum(FAccountFlagsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAccountFlagsRowHandle CastToAccountFlagsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAccountFlagsEnum A, FAccountFlagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAccountFlagsRowHandleFAccountFlagsRowHandle(FAccountFlagsRowHandle RowHandleA, FAccountFlagsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAccountFlagsStruct(FAccountFlagsRowHandle RowHandle, FAccountFlag& AccountFlags, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsRowHandle MakeAccountFlags(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsEnum MakeAccountFlagsEnum(FAccountFlagsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsRowHandle MakeAccountFlagsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsRowHandle MakeLiteralAccountFlags(FAccountFlagsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAccountFlagsEnum A, FAccountFlagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAccountFlagsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAccountFlagsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsEnum RowHandleToStruct(FAccountFlagsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAccountFlagsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAccountFlagsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsRowHandle StructToRowHandle(FAccountFlagsEnum EnumValue);  // parameters 0x28
};
