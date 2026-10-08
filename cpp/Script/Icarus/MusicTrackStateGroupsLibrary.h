// /Script/Icarus.MusicTrackStateGroupsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/MusicTrackStateGroups/MusicTrackStateGroupsLibrary.h

UCLASS()
class UMusicTrackStateGroupsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToMusicTrackStateGroupsTable(FName Name, FMusicTrackStateGroup Data, FMusicTrackStateGroupsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMusicTrackStateGroupsEnum(FMusicTrackStateGroupsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMusicTrackStateGroupsRowHandle CastToMusicTrackStateGroupsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMusicTrackStateGroupsEnum A, FMusicTrackStateGroupsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMusicTrackStateGroupsRowHandleFMusicTrackStateGroupsRowHandle(FMusicTrackStateGroupsRowHandle RowHandleA, FMusicTrackStateGroupsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMusicTrackStateGroupsStruct(FMusicTrackStateGroupsRowHandle RowHandle, FMusicTrackStateGroup& MusicTrackStateGroups, EValid& Paths);  // parameters 0x31
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsRowHandle MakeLiteralMusicTrackStateGroups(FMusicTrackStateGroupsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsRowHandle MakeMusicTrackStateGroups(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsEnum MakeMusicTrackStateGroupsEnum(FMusicTrackStateGroupsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsRowHandle MakeMusicTrackStateGroupsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMusicTrackStateGroupsEnum A, FMusicTrackStateGroupsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMusicTrackStateGroupsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMusicTrackStateGroupsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsEnum RowHandleToStruct(FMusicTrackStateGroupsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMusicTrackStateGroupsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMusicTrackStateGroupsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMusicTrackStateGroupsRowHandle StructToRowHandle(FMusicTrackStateGroupsEnum EnumValue);  // parameters 0x28
};
