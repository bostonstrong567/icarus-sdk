// /Script/Icarus.CharacterPerksLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CharacterPerks/CharacterPerksLibrary.h

UCLASS()
class UCharacterPerksLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToCharacterPerksTable(FName Name, FCharacterPerk Data, FCharacterPerksRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xE9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCharacterPerksEnum(FCharacterPerksEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCharacterPerksRowHandle CastToCharacterPerksRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCharacterPerksEnum A, FCharacterPerksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCharacterPerksRowHandleFCharacterPerksRowHandle(FCharacterPerksRowHandle RowHandleA, FCharacterPerksRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCharacterPerksStruct(FCharacterPerksRowHandle RowHandle, FCharacterPerk& CharacterPerks, EValid& Paths);  // parameters 0xE1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksRowHandle MakeCharacterPerks(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksEnum MakeCharacterPerksEnum(FCharacterPerksEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksRowHandle MakeCharacterPerksFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksRowHandle MakeLiteralCharacterPerks(FCharacterPerksRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCharacterPerksEnum A, FCharacterPerksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCharacterPerksEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCharacterPerksTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksEnum RowHandleToStruct(FCharacterPerksRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCharacterPerksEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCharacterPerksEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterPerksRowHandle StructToRowHandle(FCharacterPerksEnum EnumValue);  // parameters 0x28
};
