// /Script/Icarus.WeatherActionsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/WeatherActions/WeatherActionsLibrary.h

UCLASS()
class UWeatherActionsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToWeatherActionsTable(FName Name, FIcarusWeatherActionData Data, FWeatherActionsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x6D1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWeatherActionsEnum(FWeatherActionsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FWeatherActionsRowHandle CastToWeatherActionsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FWeatherActionsEnum A, FWeatherActionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FWeatherActionsRowHandleFWeatherActionsRowHandle(FWeatherActionsRowHandle RowHandleA, FWeatherActionsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetWeatherActionsStruct(FWeatherActionsRowHandle RowHandle, FIcarusWeatherActionData& WeatherActions, EValid& Paths);  // parameters 0x6C9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsRowHandle MakeLiteralWeatherActions(FWeatherActionsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsRowHandle MakeWeatherActions(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsEnum MakeWeatherActionsEnum(FWeatherActionsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsRowHandle MakeWeatherActionsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FWeatherActionsEnum A, FWeatherActionsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FWeatherActionsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromWeatherActionsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsEnum RowHandleToStruct(FWeatherActionsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FWeatherActionsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FWeatherActionsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWeatherActionsRowHandle StructToRowHandle(FWeatherActionsEnum EnumValue);  // parameters 0x28
};
