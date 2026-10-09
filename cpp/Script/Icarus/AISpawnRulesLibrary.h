// /Script/Icarus.AISpawnRulesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AISpawnRules/AISpawnRulesLibrary.h

UCLASS()
class UAISpawnRulesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAISpawnRulesTable(FName Name, FAISpawnRuleData Data, FAISpawnRulesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAISpawnRulesEnum(FAISpawnRulesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAISpawnRulesRowHandle CastToAISpawnRulesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAISpawnRulesEnum A, FAISpawnRulesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAISpawnRulesRowHandleFAISpawnRulesRowHandle(FAISpawnRulesRowHandle RowHandleA, FAISpawnRulesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAISpawnRulesStruct(FAISpawnRulesRowHandle RowHandle, FAISpawnRuleData& AISpawnRules, EValid& Paths);  // parameters 0xB1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesRowHandle MakeAISpawnRules(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesEnum MakeAISpawnRulesEnum(FAISpawnRulesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesRowHandle MakeAISpawnRulesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesRowHandle MakeLiteralAISpawnRules(FAISpawnRulesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAISpawnRulesEnum A, FAISpawnRulesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAISpawnRulesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAISpawnRulesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesEnum RowHandleToStruct(FAISpawnRulesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAISpawnRulesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAISpawnRulesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAISpawnRulesRowHandle StructToRowHandle(FAISpawnRulesEnum EnumValue);  // parameters 0x28
};
