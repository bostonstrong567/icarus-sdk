// /Script/Icarus.KeybindingsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Keybindings/KeybindingsLibrary.h

UCLASS()
class UKeybindingsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToKeybindingsTable(FName Name, FKeybindData Data, FKeybindingsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x129
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakKeybindingsEnum(FKeybindingsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FKeybindingsRowHandle CastToKeybindingsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FKeybindingsEnum A, FKeybindingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FKeybindingsRowHandleFKeybindingsRowHandle(FKeybindingsRowHandle RowHandleA, FKeybindingsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetKeybindingsStruct(FKeybindingsRowHandle RowHandle, FKeybindData& Keybindings, EValid& Paths);  // parameters 0x121
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsRowHandle MakeKeybindings(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsEnum MakeKeybindingsEnum(FKeybindingsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsRowHandle MakeKeybindingsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FKeybindingsRowHandle> MakeKeybindingsRowFromActionName(const FName& InActionName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsRowHandle MakeLiteralKeybindings(FKeybindingsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FKeybindingsEnum A, FKeybindingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FKeybindingsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromKeybindingsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsEnum RowHandleToStruct(FKeybindingsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FKeybindingsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FKeybindingsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeybindingsRowHandle StructToRowHandle(FKeybindingsEnum EnumValue);  // parameters 0x28
};
