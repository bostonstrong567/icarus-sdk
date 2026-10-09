// /Script/Icarus.CharacterCreationDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CharacterCreationData/CharacterCreationDataLibrary.h

UCLASS()
class UCharacterCreationDataLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToCharacterCreationDataTable(FName Name, FCharacterCreationData Data, FCharacterCreationDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x161
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCharacterCreationDataEnum(FCharacterCreationDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCharacterCreationDataRowHandle CastToCharacterCreationDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCharacterCreationDataEnum A, FCharacterCreationDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle(FCharacterCreationDataRowHandle RowHandleA, FCharacterCreationDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCharacterCreationDataStruct(FCharacterCreationDataRowHandle RowHandle, FCharacterCreationData& CharacterCreationData, EValid& Paths);  // parameters 0x159
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataRowHandle MakeCharacterCreationData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataEnum MakeCharacterCreationDataEnum(FCharacterCreationDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataRowHandle MakeCharacterCreationDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataRowHandle MakeLiteralCharacterCreationData(FCharacterCreationDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCharacterCreationDataEnum A, FCharacterCreationDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCharacterCreationDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCharacterCreationDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataEnum RowHandleToStruct(FCharacterCreationDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCharacterCreationDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCharacterCreationDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterCreationDataRowHandle StructToRowHandle(FCharacterCreationDataEnum EnumValue);  // parameters 0x28
};
