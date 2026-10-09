// /Script/Icarus.LevelSequencesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/LevelSequences/LevelSequencesLibrary.h

UCLASS()
class ULevelSequencesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToLevelSequencesTable(FName Name, FLevelSequencesData Data, FLevelSequencesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakLevelSequencesEnum(FLevelSequencesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FLevelSequencesRowHandle CastToLevelSequencesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FLevelSequencesEnum A, FLevelSequencesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FLevelSequencesRowHandleFLevelSequencesRowHandle(FLevelSequencesRowHandle RowHandleA, FLevelSequencesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetLevelSequencesStruct(FLevelSequencesRowHandle RowHandle, FLevelSequencesData& LevelSequences, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesRowHandle MakeLevelSequences(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesEnum MakeLevelSequencesEnum(FLevelSequencesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesRowHandle MakeLevelSequencesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesRowHandle MakeLiteralLevelSequences(FLevelSequencesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FLevelSequencesEnum A, FLevelSequencesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FLevelSequencesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromLevelSequencesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesEnum RowHandleToStruct(FLevelSequencesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FLevelSequencesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FLevelSequencesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLevelSequencesRowHandle StructToRowHandle(FLevelSequencesEnum EnumValue);  // parameters 0x28
};
