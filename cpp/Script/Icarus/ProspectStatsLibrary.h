// /Script/Icarus.ProspectStatsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ProspectStats/ProspectStatsLibrary.h

UCLASS()
class UProspectStatsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToProspectStatsTable(FName Name, FProspectStat Data, FProspectStatsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakProspectStatsEnum(FProspectStatsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FProspectStatsRowHandle CastToProspectStatsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FProspectStatsEnum A, FProspectStatsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FProspectStatsRowHandleFProspectStatsRowHandle(FProspectStatsRowHandle RowHandleA, FProspectStatsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetProspectStatsStruct(FProspectStatsRowHandle RowHandle, FProspectStat& ProspectStats, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsRowHandle MakeLiteralProspectStats(FProspectStatsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsRowHandle MakeProspectStats(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsEnum MakeProspectStatsEnum(FProspectStatsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsRowHandle MakeProspectStatsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FProspectStatsEnum A, FProspectStatsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FProspectStatsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromProspectStatsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsEnum RowHandleToStruct(FProspectStatsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FProspectStatsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FProspectStatsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectStatsRowHandle StructToRowHandle(FProspectStatsEnum EnumValue);  // parameters 0x28
};
