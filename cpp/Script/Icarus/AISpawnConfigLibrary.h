// /Script/Icarus.AISpawnConfigLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AISpawnConfig/AISpawnConfigLibrary.h

UCLASS()
class UAISpawnConfigLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAISpawnConfigTable(FName Name, FAISpawnConfigData Data, FAISpawnConfigRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAISpawnConfigEnum(FAISpawnConfigEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAISpawnConfigRowHandle CastToAISpawnConfigRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAISpawnConfigEnum A, FAISpawnConfigEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAISpawnConfigRowHandleFAISpawnConfigRowHandle(FAISpawnConfigRowHandle RowHandleA, FAISpawnConfigRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAISpawnConfigStruct(FAISpawnConfigRowHandle RowHandle, FAISpawnConfigData& AISpawnConfig, EValid& Paths);  // parameters 0xC9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigRowHandle MakeAISpawnConfig(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigEnum MakeAISpawnConfigEnum(FAISpawnConfigEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigRowHandle MakeAISpawnConfigFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigRowHandle MakeLiteralAISpawnConfig(FAISpawnConfigRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAISpawnConfigEnum A, FAISpawnConfigEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAISpawnConfigEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAISpawnConfigTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigEnum RowHandleToStruct(FAISpawnConfigRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAISpawnConfigEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAISpawnConfigEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnConfigRowHandle StructToRowHandle(FAISpawnConfigEnum EnumValue);  // parameters 0x28
};
