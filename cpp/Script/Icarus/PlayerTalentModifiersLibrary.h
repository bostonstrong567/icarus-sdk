// /Script/Icarus.PlayerTalentModifiersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/PlayerTalentModifiers/PlayerTalentModifiersLibrary.h

UCLASS()
class UPlayerTalentModifiersLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToPlayerTalentModifiersTable(FName Name, FPlayerTalentModifier Data, FPlayerTalentModifiersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPlayerTalentModifiersEnum(FPlayerTalentModifiersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPlayerTalentModifiersRowHandle CastToPlayerTalentModifiersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPlayerTalentModifiersEnum A, FPlayerTalentModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPlayerTalentModifiersRowHandleFPlayerTalentModifiersRowHandle(FPlayerTalentModifiersRowHandle RowHandleA, FPlayerTalentModifiersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPlayerTalentModifiersStruct(FPlayerTalentModifiersRowHandle RowHandle, FPlayerTalentModifier& PlayerTalentModifiers, EValid& Paths);  // parameters 0x49
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersRowHandle MakeLiteralPlayerTalentModifiers(FPlayerTalentModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersRowHandle MakePlayerTalentModifiers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersEnum MakePlayerTalentModifiersEnum(FPlayerTalentModifiersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersRowHandle MakePlayerTalentModifiersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPlayerTalentModifiersEnum A, FPlayerTalentModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPlayerTalentModifiersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPlayerTalentModifiersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersEnum RowHandleToStruct(FPlayerTalentModifiersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPlayerTalentModifiersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPlayerTalentModifiersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTalentModifiersRowHandle StructToRowHandle(FPlayerTalentModifiersEnum EnumValue);  // parameters 0x28
};
