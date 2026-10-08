// /Script/Icarus.AIAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AIAudioData/AIAudioDataLibrary.h

UCLASS()
class UAIAudioDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAIAudioDataTable(FName Name, FAIAudioData Data, FAIAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAIAudioDataEnum(FAIAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAIAudioDataRowHandle CastToAIAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAIAudioDataEnum A, FAIAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAIAudioDataRowHandleFAIAudioDataRowHandle(FAIAudioDataRowHandle RowHandleA, FAIAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAIAudioDataStruct(FAIAudioDataRowHandle RowHandle, FAIAudioData& AIAudioData, EValid& Paths);  // parameters 0x1E9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataRowHandle MakeAIAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataEnum MakeAIAudioDataEnum(FAIAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataRowHandle MakeAIAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataRowHandle MakeLiteralAIAudioData(FAIAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAIAudioDataEnum A, FAIAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAIAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAIAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataEnum RowHandleToStruct(FAIAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAIAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAIAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAIAudioDataRowHandle StructToRowHandle(FAIAudioDataEnum EnumValue);  // parameters 0x28
};
