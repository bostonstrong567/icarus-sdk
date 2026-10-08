// /Script/Icarus.FirearmScopeDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FirearmScopeData/FirearmScopeDataLibrary.h

UCLASS()
class UFirearmScopeDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFirearmScopeDataTable(FName Name, FFirearmScopeData Data, FFirearmScopeDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFirearmScopeDataEnum(FFirearmScopeDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFirearmScopeDataRowHandle CastToFirearmScopeDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFirearmScopeDataEnum A, FFirearmScopeDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFirearmScopeDataRowHandleFFirearmScopeDataRowHandle(FFirearmScopeDataRowHandle RowHandleA, FFirearmScopeDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFirearmScopeDataStruct(FFirearmScopeDataRowHandle RowHandle, FFirearmScopeData& FirearmScopeData, EValid& Paths);  // parameters 0x71
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataRowHandle MakeFirearmScopeData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataEnum MakeFirearmScopeDataEnum(FFirearmScopeDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataRowHandle MakeFirearmScopeDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataRowHandle MakeLiteralFirearmScopeData(FFirearmScopeDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFirearmScopeDataEnum A, FFirearmScopeDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFirearmScopeDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFirearmScopeDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataEnum RowHandleToStruct(FFirearmScopeDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFirearmScopeDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFirearmScopeDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFirearmScopeDataRowHandle StructToRowHandle(FFirearmScopeDataEnum EnumValue);  // parameters 0x28
};
