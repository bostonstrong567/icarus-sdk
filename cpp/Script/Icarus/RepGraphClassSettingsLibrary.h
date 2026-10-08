// /Script/Icarus.RepGraphClassSettingsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/RepGraphClassSettings/RepGraphClassSettingsLibrary.h

UCLASS()
class URepGraphClassSettingsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToRepGraphClassSettingsTable(FName Name, FRepGraphClassSettings Data, FRepGraphClassSettingsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRepGraphClassSettingsEnum(FRepGraphClassSettingsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FRepGraphClassSettingsRowHandle CastToRepGraphClassSettingsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FRepGraphClassSettingsEnum A, FRepGraphClassSettingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRepGraphClassSettingsRowHandleFRepGraphClassSettingsRowHandle(FRepGraphClassSettingsRowHandle RowHandleA, FRepGraphClassSettingsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetRepGraphClassSettingsStruct(FRepGraphClassSettingsRowHandle RowHandle, FRepGraphClassSettings& RepGraphClassSettings, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsRowHandle MakeLiteralRepGraphClassSettings(FRepGraphClassSettingsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsRowHandle MakeRepGraphClassSettings(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsEnum MakeRepGraphClassSettingsEnum(FRepGraphClassSettingsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsRowHandle MakeRepGraphClassSettingsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FRepGraphClassSettingsEnum A, FRepGraphClassSettingsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FRepGraphClassSettingsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromRepGraphClassSettingsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsEnum RowHandleToStruct(FRepGraphClassSettingsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FRepGraphClassSettingsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FRepGraphClassSettingsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRepGraphClassSettingsRowHandle StructToRowHandle(FRepGraphClassSettingsEnum EnumValue);  // parameters 0x28
};
