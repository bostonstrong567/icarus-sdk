// /Script/Icarus.WorldBossesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/WorldBosses/WorldBossesLibrary.h

UCLASS()
class UWorldBossesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToWorldBossesTable(FName Name, FWorldBossData Data, FWorldBossesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x129
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWorldBossesEnum(FWorldBossesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FWorldBossesRowHandle CastToWorldBossesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FWorldBossesEnum A, FWorldBossesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FWorldBossesRowHandleFWorldBossesRowHandle(FWorldBossesRowHandle RowHandleA, FWorldBossesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetWorldBossesStruct(FWorldBossesRowHandle RowHandle, FWorldBossData& WorldBosses, EValid& Paths);  // parameters 0x121
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesRowHandle MakeLiteralWorldBosses(FWorldBossesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesRowHandle MakeWorldBosses(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesEnum MakeWorldBossesEnum(FWorldBossesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesRowHandle MakeWorldBossesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FWorldBossesEnum A, FWorldBossesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FWorldBossesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromWorldBossesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesEnum RowHandleToStruct(FWorldBossesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FWorldBossesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FWorldBossesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldBossesRowHandle StructToRowHandle(FWorldBossesEnum EnumValue);  // parameters 0x28
};
