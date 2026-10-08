// /Script/Icarus.CharacterFlagsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CharacterFlags/CharacterFlagsLibrary.h

UCLASS()
class UCharacterFlagsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToCharacterFlagsTable(FName Name, FCharacterFlag Data, FCharacterFlagsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCharacterFlagsEnum(FCharacterFlagsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCharacterFlagsRowHandle CastToCharacterFlagsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCharacterFlagsEnum A, FCharacterFlagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCharacterFlagsRowHandleFCharacterFlagsRowHandle(FCharacterFlagsRowHandle RowHandleA, FCharacterFlagsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCharacterFlagsStruct(FCharacterFlagsRowHandle RowHandle, FCharacterFlag& CharacterFlags, EValid& Paths);  // parameters 0x49
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsRowHandle MakeCharacterFlags(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsEnum MakeCharacterFlagsEnum(FCharacterFlagsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsRowHandle MakeCharacterFlagsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsRowHandle MakeLiteralCharacterFlags(FCharacterFlagsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCharacterFlagsEnum A, FCharacterFlagsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCharacterFlagsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCharacterFlagsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsEnum RowHandleToStruct(FCharacterFlagsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCharacterFlagsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCharacterFlagsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsRowHandle StructToRowHandle(FCharacterFlagsEnum EnumValue);  // parameters 0x28
};
