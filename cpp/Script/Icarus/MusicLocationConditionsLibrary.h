// /Script/Icarus.MusicLocationConditionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/MusicLocationConditions/MusicLocationConditionsLibrary.h

UCLASS()
class UMusicLocationConditionsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToMusicLocationConditionsTable(FName Name, FMusicLocationCondition Data, FMusicLocationConditionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMusicLocationConditionsEnum(FMusicLocationConditionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMusicLocationConditionsRowHandle CastToMusicLocationConditionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMusicLocationConditionsEnum A, FMusicLocationConditionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMusicLocationConditionsRowHandleFMusicLocationConditionsRowHandle(FMusicLocationConditionsRowHandle RowHandleA, FMusicLocationConditionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMusicLocationConditionsStruct(FMusicLocationConditionsRowHandle RowHandle, FMusicLocationCondition& MusicLocationConditions, EValid& Paths);  // parameters 0x31
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsRowHandle MakeLiteralMusicLocationConditions(FMusicLocationConditionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsRowHandle MakeMusicLocationConditions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsEnum MakeMusicLocationConditionsEnum(FMusicLocationConditionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsRowHandle MakeMusicLocationConditionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMusicLocationConditionsEnum A, FMusicLocationConditionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMusicLocationConditionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMusicLocationConditionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsEnum RowHandleToStruct(FMusicLocationConditionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMusicLocationConditionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMusicLocationConditionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicLocationConditionsRowHandle StructToRowHandle(FMusicLocationConditionsEnum EnumValue);  // parameters 0x28
};
