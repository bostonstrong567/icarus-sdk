// /Script/Icarus.TreeAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TreeAudioData/TreeAudioDataLibrary.h

UCLASS()
class UTreeAudioDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToTreeAudioDataTable(FName Name, FTreeAudioData Data, FTreeAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1D1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTreeAudioDataEnum(FTreeAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTreeAudioDataRowHandle CastToTreeAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTreeAudioDataEnum A, FTreeAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTreeAudioDataRowHandleFTreeAudioDataRowHandle(FTreeAudioDataRowHandle RowHandleA, FTreeAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTreeAudioDataStruct(FTreeAudioDataRowHandle RowHandle, FTreeAudioData& TreeAudioData, EValid& Paths);  // parameters 0x1C9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataRowHandle MakeLiteralTreeAudioData(FTreeAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataRowHandle MakeTreeAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataEnum MakeTreeAudioDataEnum(FTreeAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataRowHandle MakeTreeAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTreeAudioDataEnum A, FTreeAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTreeAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTreeAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataEnum RowHandleToStruct(FTreeAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTreeAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTreeAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTreeAudioDataRowHandle StructToRowHandle(FTreeAudioDataEnum EnumValue);  // parameters 0x28
};
