// /Script/Icarus.StaminaActionCostsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/StaminaActionCosts/StaminaActionCostsLibrary.h

UCLASS()
class UStaminaActionCostsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToStaminaActionCostsTable(FName Name, FStaminaCost Data, FStaminaActionCostsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakStaminaActionCostsEnum(FStaminaActionCostsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FStaminaActionCostsRowHandle CastToStaminaActionCostsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FStaminaActionCostsEnum A, FStaminaActionCostsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FStaminaActionCostsRowHandleFStaminaActionCostsRowHandle(FStaminaActionCostsRowHandle RowHandleA, FStaminaActionCostsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetStaminaActionCostsStruct(FStaminaActionCostsRowHandle RowHandle, FStaminaCost& StaminaActionCosts, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsRowHandle MakeLiteralStaminaActionCosts(FStaminaActionCostsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsRowHandle MakeStaminaActionCosts(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsEnum MakeStaminaActionCostsEnum(FStaminaActionCostsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsRowHandle MakeStaminaActionCostsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FStaminaActionCostsEnum A, FStaminaActionCostsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FStaminaActionCostsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromStaminaActionCostsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsEnum RowHandleToStruct(FStaminaActionCostsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FStaminaActionCostsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FStaminaActionCostsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FStaminaActionCostsRowHandle StructToRowHandle(FStaminaActionCostsEnum EnumValue);  // parameters 0x28
};
