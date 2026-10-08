// /Script/Icarus.TerrainZoneAudioDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/TerrainZoneAudioData/TerrainZoneAudioDataLibrary.h

UCLASS()
class UTerrainZoneAudioDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToTerrainZoneAudioDataTable(FName Name, FTerrainZoneAudioData Data, FTerrainZoneAudioDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTerrainZoneAudioDataEnum(FTerrainZoneAudioDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTerrainZoneAudioDataRowHandle CastToTerrainZoneAudioDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTerrainZoneAudioDataEnum A, FTerrainZoneAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTerrainZoneAudioDataRowHandleFTerrainZoneAudioDataRowHandle(FTerrainZoneAudioDataRowHandle RowHandleA, FTerrainZoneAudioDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTerrainZoneAudioDataStruct(FTerrainZoneAudioDataRowHandle RowHandle, FTerrainZoneAudioData& TerrainZoneAudioData, EValid& Paths);  // parameters 0x39
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataRowHandle MakeLiteralTerrainZoneAudioData(FTerrainZoneAudioDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataRowHandle MakeTerrainZoneAudioData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataEnum MakeTerrainZoneAudioDataEnum(FTerrainZoneAudioDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataRowHandle MakeTerrainZoneAudioDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataRowHandle MakeTerrainZoneAudioDataRowFromColor(const FColor& InColor);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTerrainZoneAudioDataEnum A, FTerrainZoneAudioDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTerrainZoneAudioDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTerrainZoneAudioDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataEnum RowHandleToStruct(FTerrainZoneAudioDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTerrainZoneAudioDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTerrainZoneAudioDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainZoneAudioDataRowHandle StructToRowHandle(FTerrainZoneAudioDataEnum EnumValue);  // parameters 0x28
};
