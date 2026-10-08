// /Script/Icarus.RiverAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/RiverAudioData/RiverAudioDataLibrary.h

UCLASS()
class URiverAudioDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToRiverAudioDataTable(FName Name, FRiverAudioData Data, FRiverAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRiverAudioDataEnum(FRiverAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FRiverAudioDataRowHandle CastToRiverAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FRiverAudioDataEnum A, FRiverAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRiverAudioDataRowHandleFRiverAudioDataRowHandle(FRiverAudioDataRowHandle RowHandleA, FRiverAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetRiverAudioDataStruct(FRiverAudioDataRowHandle RowHandle, FRiverAudioData& RiverAudioData, EValid& Paths);  // parameters 0x61
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataRowHandle MakeLiteralRiverAudioData(FRiverAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataRowHandle MakeRiverAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataEnum MakeRiverAudioDataEnum(FRiverAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataRowHandle MakeRiverAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FRiverAudioDataEnum A, FRiverAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FRiverAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromRiverAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataEnum RowHandleToStruct(FRiverAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FRiverAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FRiverAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRiverAudioDataRowHandle StructToRowHandle(FRiverAudioDataEnum EnumValue);  // parameters 0x28
};
