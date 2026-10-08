// /Script/Icarus.MetaCurrencyLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/MetaCurrency/MetaCurrencyLibrary.h

UCLASS()
class UMetaCurrencyLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToMetaCurrencyTable(FName Name, FMetaCurrency Data, FMetaCurrencyRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMetaCurrencyEnum(FMetaCurrencyEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMetaCurrencyRowHandle CastToMetaCurrencyRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMetaCurrencyEnum A, FMetaCurrencyEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMetaCurrencyRowHandleFMetaCurrencyRowHandle(FMetaCurrencyRowHandle RowHandleA, FMetaCurrencyRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMetaCurrencyStruct(FMetaCurrencyRowHandle RowHandle, FMetaCurrency& MetaCurrency, EValid& Paths);  // parameters 0xD1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyRowHandle MakeLiteralMetaCurrency(FMetaCurrencyRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyRowHandle MakeMetaCurrency(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyEnum MakeMetaCurrencyEnum(FMetaCurrencyEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyRowHandle MakeMetaCurrencyFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMetaCurrencyEnum A, FMetaCurrencyEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMetaCurrencyEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMetaCurrencyTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyEnum RowHandleToStruct(FMetaCurrencyRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMetaCurrencyEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMetaCurrencyEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMetaCurrencyRowHandle StructToRowHandle(FMetaCurrencyEnum EnumValue);  // parameters 0x28
};
