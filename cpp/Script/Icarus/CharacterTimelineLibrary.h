// /Script/Icarus.CharacterTimelineLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CharacterTimeline/CharacterTimelineLibrary.h

UCLASS()
class UCharacterTimelineLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToCharacterTimelineTable(FName Name, FCharacterTimeline Data, FCharacterTimelineRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCharacterTimelineEnum(FCharacterTimelineEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCharacterTimelineRowHandle CastToCharacterTimelineRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCharacterTimelineEnum A, FCharacterTimelineEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCharacterTimelineRowHandleFCharacterTimelineRowHandle(FCharacterTimelineRowHandle RowHandleA, FCharacterTimelineRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCharacterTimelineStruct(FCharacterTimelineRowHandle RowHandle, FCharacterTimeline& CharacterTimeline, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineRowHandle MakeCharacterTimeline(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineEnum MakeCharacterTimelineEnum(FCharacterTimelineEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineRowHandle MakeCharacterTimelineFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineRowHandle MakeLiteralCharacterTimeline(FCharacterTimelineRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCharacterTimelineEnum A, FCharacterTimelineEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCharacterTimelineEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCharacterTimelineTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineEnum RowHandleToStruct(FCharacterTimelineRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCharacterTimelineEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCharacterTimelineEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterTimelineRowHandle StructToRowHandle(FCharacterTimelineEnum EnumValue);  // parameters 0x28
};
