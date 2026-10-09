// /Script/Icarus.MusicQuestConditionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/MusicQuestConditions/MusicQuestConditionsLibrary.h

UCLASS()
class UMusicQuestConditionsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToMusicQuestConditionsTable(FName Name, FMusicQuestCondition Data, FMusicQuestConditionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMusicQuestConditionsEnum(FMusicQuestConditionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMusicQuestConditionsRowHandle CastToMusicQuestConditionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMusicQuestConditionsEnum A, FMusicQuestConditionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMusicQuestConditionsRowHandleFMusicQuestConditionsRowHandle(FMusicQuestConditionsRowHandle RowHandleA, FMusicQuestConditionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMusicQuestConditionsStruct(FMusicQuestConditionsRowHandle RowHandle, FMusicQuestCondition& MusicQuestConditions, EValid& Paths);  // parameters 0x31
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsRowHandle MakeLiteralMusicQuestConditions(FMusicQuestConditionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsRowHandle MakeMusicQuestConditions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsEnum MakeMusicQuestConditionsEnum(FMusicQuestConditionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsRowHandle MakeMusicQuestConditionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMusicQuestConditionsEnum A, FMusicQuestConditionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMusicQuestConditionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMusicQuestConditionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsEnum RowHandleToStruct(FMusicQuestConditionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMusicQuestConditionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMusicQuestConditionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicQuestConditionsRowHandle StructToRowHandle(FMusicQuestConditionsEnum EnumValue);  // parameters 0x28
};
