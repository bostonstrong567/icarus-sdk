// /Script/Icarus.BiomeAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BiomeAudioData/BiomeAudioDataLibrary.h

UCLASS()
class UBiomeAudioDataLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToBiomeAudioDataTable(FName Name, FBiomeAudioData Data, FBiomeAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBiomeAudioDataEnum(FBiomeAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBiomeAudioDataRowHandle CastToBiomeAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBiomeAudioDataEnum A, FBiomeAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBiomeAudioDataRowHandleFBiomeAudioDataRowHandle(FBiomeAudioDataRowHandle RowHandleA, FBiomeAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBiomeAudioDataStruct(FBiomeAudioDataRowHandle RowHandle, FBiomeAudioData& BiomeAudioData, EValid& Paths);  // parameters 0xA1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataRowHandle MakeBiomeAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataEnum MakeBiomeAudioDataEnum(FBiomeAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataRowHandle MakeBiomeAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataRowHandle MakeLiteralBiomeAudioData(FBiomeAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBiomeAudioDataEnum A, FBiomeAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBiomeAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBiomeAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataEnum RowHandleToStruct(FBiomeAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBiomeAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBiomeAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBiomeAudioDataRowHandle StructToRowHandle(FBiomeAudioDataEnum EnumValue);  // parameters 0x28
};
