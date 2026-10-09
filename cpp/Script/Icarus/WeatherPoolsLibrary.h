// /Script/Icarus.WeatherPoolsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/WeatherPools/WeatherPoolsLibrary.h

UCLASS()
class UWeatherPoolsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToWeatherPoolsTable(FName Name, FIcarusWeatherPoolData Data, FWeatherPoolsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWeatherPoolsEnum(FWeatherPoolsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FWeatherPoolsRowHandle CastToWeatherPoolsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FWeatherPoolsEnum A, FWeatherPoolsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FWeatherPoolsRowHandleFWeatherPoolsRowHandle(FWeatherPoolsRowHandle RowHandleA, FWeatherPoolsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetWeatherPoolsStruct(FWeatherPoolsRowHandle RowHandle, FIcarusWeatherPoolData& WeatherPools, EValid& Paths);  // parameters 0x51
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsRowHandle MakeLiteralWeatherPools(FWeatherPoolsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsRowHandle MakeWeatherPools(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsEnum MakeWeatherPoolsEnum(FWeatherPoolsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsRowHandle MakeWeatherPoolsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FWeatherPoolsEnum A, FWeatherPoolsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FWeatherPoolsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromWeatherPoolsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsEnum RowHandleToStruct(FWeatherPoolsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FWeatherPoolsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FWeatherPoolsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherPoolsRowHandle StructToRowHandle(FWeatherPoolsEnum EnumValue);  // parameters 0x28
};
