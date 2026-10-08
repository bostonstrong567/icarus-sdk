// /Script/Icarus.StatAfflictionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/StatAfflictions/StatAfflictionsLibrary.h

UCLASS()
class UStatAfflictionsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToStatAfflictionsTable(FName Name, FStatAfflictions Data, FStatAfflictionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakStatAfflictionsEnum(FStatAfflictionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FStatAfflictionsRowHandle CastToStatAfflictionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FStatAfflictionsEnum A, FStatAfflictionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FStatAfflictionsRowHandleFStatAfflictionsRowHandle(FStatAfflictionsRowHandle RowHandleA, FStatAfflictionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetStatAfflictionsStruct(FStatAfflictionsRowHandle RowHandle, FStatAfflictions& StatAfflictions, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsRowHandle MakeLiteralStatAfflictions(FStatAfflictionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsRowHandle MakeStatAfflictions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsEnum MakeStatAfflictionsEnum(FStatAfflictionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsRowHandle MakeStatAfflictionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FStatAfflictionsEnum A, FStatAfflictionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FStatAfflictionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromStatAfflictionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsEnum RowHandleToStruct(FStatAfflictionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FStatAfflictionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FStatAfflictionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStatAfflictionsRowHandle StructToRowHandle(FStatAfflictionsEnum EnumValue);  // parameters 0x28
};
