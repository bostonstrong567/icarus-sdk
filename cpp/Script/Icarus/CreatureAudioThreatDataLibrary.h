// /Script/Icarus.CreatureAudioThreatDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CreatureAudioThreatData/CreatureAudioThreatDataLibrary.h

UCLASS()
class UCreatureAudioThreatDataLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToCreatureAudioThreatDataTable(FName Name, FCreatureAudioThreatData Data, FCreatureAudioThreatDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCreatureAudioThreatDataEnum(FCreatureAudioThreatDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCreatureAudioThreatDataRowHandle CastToCreatureAudioThreatDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCreatureAudioThreatDataEnum A, FCreatureAudioThreatDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCreatureAudioThreatDataRowHandleFCreatureAudioThreatDataRowHandle(FCreatureAudioThreatDataRowHandle RowHandleA, FCreatureAudioThreatDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCreatureAudioThreatDataStruct(FCreatureAudioThreatDataRowHandle RowHandle, FCreatureAudioThreatData& CreatureAudioThreatData, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataRowHandle MakeCreatureAudioThreatData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataEnum MakeCreatureAudioThreatDataEnum(FCreatureAudioThreatDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataRowHandle MakeCreatureAudioThreatDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataRowHandle MakeLiteralCreatureAudioThreatData(FCreatureAudioThreatDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCreatureAudioThreatDataEnum A, FCreatureAudioThreatDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCreatureAudioThreatDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCreatureAudioThreatDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataEnum RowHandleToStruct(FCreatureAudioThreatDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCreatureAudioThreatDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCreatureAudioThreatDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCreatureAudioThreatDataRowHandle StructToRowHandle(FCreatureAudioThreatDataEnum EnumValue);  // parameters 0x28
};
