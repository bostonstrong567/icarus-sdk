// /Script/Icarus.FactionMissionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FactionMissions/FactionMissionsLibrary.h

UCLASS()
class UFactionMissionsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFactionMissionsTable(FName Name, FFactionMission Data, FFactionMissionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x119
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFactionMissionsEnum(FFactionMissionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFactionMissionsRowHandle CastToFactionMissionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFactionMissionsEnum A, FFactionMissionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle(FFactionMissionsRowHandle RowHandleA, FFactionMissionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFactionMissionsStruct(FFactionMissionsRowHandle RowHandle, FFactionMission& FactionMissions, EValid& Paths);  // parameters 0x111
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsRowHandle MakeFactionMissions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsEnum MakeFactionMissionsEnum(FFactionMissionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsRowHandle MakeFactionMissionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsRowHandle MakeLiteralFactionMissions(FFactionMissionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFactionMissionsEnum A, FFactionMissionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFactionMissionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFactionMissionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsEnum RowHandleToStruct(FFactionMissionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFactionMissionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFactionMissionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFactionMissionsRowHandle StructToRowHandle(FFactionMissionsEnum EnumValue);  // parameters 0x28
};
