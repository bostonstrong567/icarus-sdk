// /Script/Icarus.WeatherTierIconLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/WeatherTierIcon/WeatherTierIconLibrary.h

UCLASS()
class UWeatherTierIconLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToWeatherTierIconTable(FName Name, FWeatherTierIcon Data, FWeatherTierIconRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWeatherTierIconEnum(FWeatherTierIconEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FWeatherTierIconRowHandle CastToWeatherTierIconRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FWeatherTierIconEnum A, FWeatherTierIconEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FWeatherTierIconRowHandleFWeatherTierIconRowHandle(FWeatherTierIconRowHandle RowHandleA, FWeatherTierIconRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetWeatherTierIconStruct(FWeatherTierIconRowHandle RowHandle, FWeatherTierIcon& WeatherTierIcon, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconRowHandle MakeLiteralWeatherTierIcon(FWeatherTierIconRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconRowHandle MakeWeatherTierIcon(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconEnum MakeWeatherTierIconEnum(FWeatherTierIconEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconRowHandle MakeWeatherTierIconFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FWeatherTierIconEnum A, FWeatherTierIconEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FWeatherTierIconEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromWeatherTierIconTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconEnum RowHandleToStruct(FWeatherTierIconRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FWeatherTierIconEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FWeatherTierIconEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherTierIconRowHandle StructToRowHandle(FWeatherTierIconEnum EnumValue);  // parameters 0x28
};
