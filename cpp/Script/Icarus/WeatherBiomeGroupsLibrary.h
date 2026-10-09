// /Script/Icarus.WeatherBiomeGroupsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/WeatherBiomeGroups/WeatherBiomeGroupsLibrary.h

UCLASS()
class UWeatherBiomeGroupsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToWeatherBiomeGroupsTable(FName Name, FIcarusWeatherBiomeGroup Data, FWeatherBiomeGroupsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWeatherBiomeGroupsEnum(FWeatherBiomeGroupsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FWeatherBiomeGroupsRowHandle CastToWeatherBiomeGroupsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FWeatherBiomeGroupsEnum A, FWeatherBiomeGroupsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FWeatherBiomeGroupsRowHandleFWeatherBiomeGroupsRowHandle(FWeatherBiomeGroupsRowHandle RowHandleA, FWeatherBiomeGroupsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetWeatherBiomeGroupsStruct(FWeatherBiomeGroupsRowHandle RowHandle, FIcarusWeatherBiomeGroup& WeatherBiomeGroups, EValid& Paths);  // parameters 0x41
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsRowHandle MakeLiteralWeatherBiomeGroups(FWeatherBiomeGroupsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsRowHandle MakeWeatherBiomeGroups(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsEnum MakeWeatherBiomeGroupsEnum(FWeatherBiomeGroupsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsRowHandle MakeWeatherBiomeGroupsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FWeatherBiomeGroupsEnum A, FWeatherBiomeGroupsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FWeatherBiomeGroupsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromWeatherBiomeGroupsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsEnum RowHandleToStruct(FWeatherBiomeGroupsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FWeatherBiomeGroupsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FWeatherBiomeGroupsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherBiomeGroupsRowHandle StructToRowHandle(FWeatherBiomeGroupsEnum EnumValue);  // parameters 0x28
};
