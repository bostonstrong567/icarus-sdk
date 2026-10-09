// /Script/Icarus.ProspectForecastLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ProspectForecast/ProspectForecastLibrary.h

UCLASS()
class UProspectForecastLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToProspectForecastTable(FName Name, FProspectForecast Data, FProspectForecastRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakProspectForecastEnum(FProspectForecastEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FProspectForecastRowHandle CastToProspectForecastRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FProspectForecastEnum A, FProspectForecastEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FProspectForecastRowHandleFProspectForecastRowHandle(FProspectForecastRowHandle RowHandleA, FProspectForecastRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetProspectForecastStruct(FProspectForecastRowHandle RowHandle, FProspectForecast& ProspectForecast, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastRowHandle MakeLiteralProspectForecast(FProspectForecastRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastRowHandle MakeProspectForecast(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastEnum MakeProspectForecastEnum(FProspectForecastEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastRowHandle MakeProspectForecastFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FProspectForecastEnum A, FProspectForecastEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FProspectForecastEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromProspectForecastTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastEnum RowHandleToStruct(FProspectForecastRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FProspectForecastEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FProspectForecastEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectForecastRowHandle StructToRowHandle(FProspectForecastEnum EnumValue);  // parameters 0x28
};
