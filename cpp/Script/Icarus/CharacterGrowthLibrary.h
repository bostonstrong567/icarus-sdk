// /Script/Icarus.CharacterGrowthLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CharacterGrowth/CharacterGrowthLibrary.h

UCLASS()
class UCharacterGrowthLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToCharacterGrowthTable(FName Name, FCharacterGrowth Data, FCharacterGrowthRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCharacterGrowthEnum(FCharacterGrowthEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCharacterGrowthRowHandle CastToCharacterGrowthRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCharacterGrowthEnum A, FCharacterGrowthEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCharacterGrowthRowHandleFCharacterGrowthRowHandle(FCharacterGrowthRowHandle RowHandleA, FCharacterGrowthRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCharacterGrowthStruct(FCharacterGrowthRowHandle RowHandle, FCharacterGrowth& CharacterGrowth, EValid& Paths);  // parameters 0x61
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthRowHandle MakeCharacterGrowth(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthEnum MakeCharacterGrowthEnum(FCharacterGrowthEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthRowHandle MakeCharacterGrowthFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthRowHandle MakeLiteralCharacterGrowth(FCharacterGrowthRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCharacterGrowthEnum A, FCharacterGrowthEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCharacterGrowthEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCharacterGrowthTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthEnum RowHandleToStruct(FCharacterGrowthRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCharacterGrowthEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCharacterGrowthEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterGrowthRowHandle StructToRowHandle(FCharacterGrowthEnum EnumValue);  // parameters 0x28
};
