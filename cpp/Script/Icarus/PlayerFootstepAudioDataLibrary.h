// /Script/Icarus.PlayerFootstepAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/PlayerFootstepAudioData/PlayerFootstepAudioDataLibrary.h

UCLASS()
class UPlayerFootstepAudioDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToPlayerFootstepAudioDataTable(FName Name, FPlayerFootstepAudioData Data, FPlayerFootstepAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPlayerFootstepAudioDataEnum(FPlayerFootstepAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPlayerFootstepAudioDataRowHandle CastToPlayerFootstepAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPlayerFootstepAudioDataEnum A, FPlayerFootstepAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPlayerFootstepAudioDataRowHandleFPlayerFootstepAudioDataRowHandle(FPlayerFootstepAudioDataRowHandle RowHandleA, FPlayerFootstepAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPlayerFootstepAudioDataStruct(FPlayerFootstepAudioDataRowHandle RowHandle, FPlayerFootstepAudioData& PlayerFootstepAudioData, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataRowHandle MakeLiteralPlayerFootstepAudioData(FPlayerFootstepAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataRowHandle MakePlayerFootstepAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataEnum MakePlayerFootstepAudioDataEnum(FPlayerFootstepAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataRowHandle MakePlayerFootstepAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPlayerFootstepAudioDataEnum A, FPlayerFootstepAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPlayerFootstepAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPlayerFootstepAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataEnum RowHandleToStruct(FPlayerFootstepAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPlayerFootstepAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPlayerFootstepAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerFootstepAudioDataRowHandle StructToRowHandle(FPlayerFootstepAudioDataEnum EnumValue);  // parameters 0x28
};
