// /Script/Icarus.ResourceNodeAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ResourceNodeAudioData/ResourceNodeAudioDataLibrary.h

UCLASS()
class UResourceNodeAudioDataLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToResourceNodeAudioDataTable(FName Name, FResourceNodeAudioData Data, FResourceNodeAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakResourceNodeAudioDataEnum(FResourceNodeAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FResourceNodeAudioDataRowHandle CastToResourceNodeAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FResourceNodeAudioDataEnum A, FResourceNodeAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FResourceNodeAudioDataRowHandleFResourceNodeAudioDataRowHandle(FResourceNodeAudioDataRowHandle RowHandleA, FResourceNodeAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetResourceNodeAudioDataStruct(FResourceNodeAudioDataRowHandle RowHandle, FResourceNodeAudioData& ResourceNodeAudioData, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataRowHandle MakeLiteralResourceNodeAudioData(FResourceNodeAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataRowHandle MakeResourceNodeAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataEnum MakeResourceNodeAudioDataEnum(FResourceNodeAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataRowHandle MakeResourceNodeAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FResourceNodeAudioDataEnum A, FResourceNodeAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FResourceNodeAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromResourceNodeAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataEnum RowHandleToStruct(FResourceNodeAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FResourceNodeAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FResourceNodeAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FResourceNodeAudioDataRowHandle StructToRowHandle(FResourceNodeAudioDataEnum EnumValue);  // parameters 0x28
};
