// /Script/Icarus.KeybindContextsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/KeybindContexts/KeybindContextsLibrary.h

UCLASS()
class UKeybindContextsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToKeybindContextsTable(FName Name, FKeybindContext Data, FKeybindContextsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakKeybindContextsEnum(FKeybindContextsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FKeybindContextsRowHandle CastToKeybindContextsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FKeybindContextsEnum A, FKeybindContextsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FKeybindContextsRowHandleFKeybindContextsRowHandle(FKeybindContextsRowHandle RowHandleA, FKeybindContextsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetKeybindContextsStruct(FKeybindContextsRowHandle RowHandle, FKeybindContext& KeybindContexts, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsRowHandle MakeKeybindContexts(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsEnum MakeKeybindContextsEnum(FKeybindContextsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsRowHandle MakeKeybindContextsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsRowHandle MakeLiteralKeybindContexts(FKeybindContextsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FKeybindContextsEnum A, FKeybindContextsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FKeybindContextsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromKeybindContextsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsEnum RowHandleToStruct(FKeybindContextsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FKeybindContextsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FKeybindContextsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindContextsRowHandle StructToRowHandle(FKeybindContextsEnum EnumValue);  // parameters 0x28
};
