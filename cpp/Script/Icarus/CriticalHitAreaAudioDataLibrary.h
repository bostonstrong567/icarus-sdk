// /Script/Icarus.CriticalHitAreaAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CriticalHitAreaAudioData/CriticalHitAreaAudioDataLibrary.h

UCLASS()
class UCriticalHitAreaAudioDataLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToCriticalHitAreaAudioDataTable(FName Name, FCriticalHitAreaAudioData Data, FCriticalHitAreaAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCriticalHitAreaAudioDataEnum(FCriticalHitAreaAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCriticalHitAreaAudioDataRowHandle CastToCriticalHitAreaAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCriticalHitAreaAudioDataEnum A, FCriticalHitAreaAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCriticalHitAreaAudioDataRowHandleFCriticalHitAreaAudioDataRowHandle(FCriticalHitAreaAudioDataRowHandle RowHandleA, FCriticalHitAreaAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCriticalHitAreaAudioDataStruct(FCriticalHitAreaAudioDataRowHandle RowHandle, FCriticalHitAreaAudioData& CriticalHitAreaAudioData, EValid& Paths);  // parameters 0x61
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataRowHandle MakeCriticalHitAreaAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataEnum MakeCriticalHitAreaAudioDataEnum(FCriticalHitAreaAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataRowHandle MakeCriticalHitAreaAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataRowHandle MakeLiteralCriticalHitAreaAudioData(FCriticalHitAreaAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCriticalHitAreaAudioDataEnum A, FCriticalHitAreaAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCriticalHitAreaAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCriticalHitAreaAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataEnum RowHandleToStruct(FCriticalHitAreaAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCriticalHitAreaAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCriticalHitAreaAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreaAudioDataRowHandle StructToRowHandle(FCriticalHitAreaAudioDataEnum EnumValue);  // parameters 0x28
};
