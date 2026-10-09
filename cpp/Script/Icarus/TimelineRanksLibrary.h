// /Script/Icarus.TimelineRanksLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TimelineRanks/TimelineRanksLibrary.h

UCLASS()
class UTimelineRanksLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToTimelineRanksTable(FName Name, FTimelineRanks Data, FTimelineRanksRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTimelineRanksEnum(FTimelineRanksEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTimelineRanksRowHandle CastToTimelineRanksRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTimelineRanksEnum A, FTimelineRanksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTimelineRanksRowHandleFTimelineRanksRowHandle(FTimelineRanksRowHandle RowHandleA, FTimelineRanksRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTimelineRanksStruct(FTimelineRanksRowHandle RowHandle, FTimelineRanks& TimelineRanks, EValid& Paths);  // parameters 0x89
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksRowHandle MakeLiteralTimelineRanks(FTimelineRanksRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksRowHandle MakeTimelineRanks(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksEnum MakeTimelineRanksEnum(FTimelineRanksEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksRowHandle MakeTimelineRanksFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTimelineRanksEnum A, FTimelineRanksEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTimelineRanksEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTimelineRanksTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksEnum RowHandleToStruct(FTimelineRanksRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTimelineRanksEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTimelineRanksEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimelineRanksRowHandle StructToRowHandle(FTimelineRanksEnum EnumValue);  // parameters 0x28
};
