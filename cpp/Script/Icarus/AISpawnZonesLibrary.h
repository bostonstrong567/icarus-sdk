// /Script/Icarus.AISpawnZonesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AISpawnZones/AISpawnZonesLibrary.h

UCLASS()
class UAISpawnZonesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAISpawnZonesTable(FName Name, FAISpawnZones Data, FAISpawnZonesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xC1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAISpawnZonesEnum(FAISpawnZonesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAISpawnZonesRowHandle CastToAISpawnZonesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAISpawnZonesEnum A, FAISpawnZonesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAISpawnZonesRowHandleFAISpawnZonesRowHandle(FAISpawnZonesRowHandle RowHandleA, FAISpawnZonesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAISpawnZonesStruct(FAISpawnZonesRowHandle RowHandle, FAISpawnZones& AISpawnZones, EValid& Paths);  // parameters 0xB9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesRowHandle MakeAISpawnZones(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesEnum MakeAISpawnZonesEnum(FAISpawnZonesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesRowHandle MakeAISpawnZonesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesRowHandle MakeLiteralAISpawnZones(FAISpawnZonesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAISpawnZonesEnum A, FAISpawnZonesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAISpawnZonesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAISpawnZonesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesEnum RowHandleToStruct(FAISpawnZonesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAISpawnZonesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAISpawnZonesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnZonesRowHandle StructToRowHandle(FAISpawnZonesEnum EnumValue);  // parameters 0x28
};
