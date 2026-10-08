// /Script/Icarus.ChargedModifiersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ChargedModifiers/ChargedModifiersLibrary.h

UCLASS()
class UChargedModifiersLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToChargedModifiersTable(FName Name, FChargedModifiers Data, FChargedModifiersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakChargedModifiersEnum(FChargedModifiersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FChargedModifiersRowHandle CastToChargedModifiersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FChargedModifiersEnum A, FChargedModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FChargedModifiersRowHandleFChargedModifiersRowHandle(FChargedModifiersRowHandle RowHandleA, FChargedModifiersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetChargedModifiersStruct(FChargedModifiersRowHandle RowHandle, FChargedModifiers& ChargedModifiers, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersRowHandle MakeChargedModifiers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersEnum MakeChargedModifiersEnum(FChargedModifiersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersRowHandle MakeChargedModifiersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersRowHandle MakeLiteralChargedModifiers(FChargedModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FChargedModifiersEnum A, FChargedModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FChargedModifiersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromChargedModifiersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersEnum RowHandleToStruct(FChargedModifiersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FChargedModifiersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FChargedModifiersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FChargedModifiersRowHandle StructToRowHandle(FChargedModifiersEnum EnumValue);  // parameters 0x28
};
