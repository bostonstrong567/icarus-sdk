// /Script/Icarus.ScalingRulesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ScalingRules/ScalingRulesLibrary.h

UCLASS()
class UScalingRulesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToScalingRulesTable(FName Name, FScalingRuleData Data, FScalingRulesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakScalingRulesEnum(FScalingRulesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FScalingRulesRowHandle CastToScalingRulesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FScalingRulesEnum A, FScalingRulesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FScalingRulesRowHandleFScalingRulesRowHandle(FScalingRulesRowHandle RowHandleA, FScalingRulesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetScalingRulesStruct(FScalingRulesRowHandle RowHandle, FScalingRuleData& ScalingRules, EValid& Paths);  // parameters 0xB1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesRowHandle MakeLiteralScalingRules(FScalingRulesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesRowHandle MakeScalingRules(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesEnum MakeScalingRulesEnum(FScalingRulesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesRowHandle MakeScalingRulesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FScalingRulesEnum A, FScalingRulesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FScalingRulesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromScalingRulesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesEnum RowHandleToStruct(FScalingRulesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FScalingRulesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FScalingRulesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FScalingRulesRowHandle StructToRowHandle(FScalingRulesEnum EnumValue);  // parameters 0x28
};
