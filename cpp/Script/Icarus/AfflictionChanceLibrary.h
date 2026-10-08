// /Script/Icarus.AfflictionChanceLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AfflictionChance/AfflictionChanceLibrary.h

UCLASS()
class UAfflictionChanceLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAfflictionChanceTable(FName Name, FAfflictionChance Data, FAfflictionChanceRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAfflictionChanceEnum(FAfflictionChanceEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAfflictionChanceRowHandle CastToAfflictionChanceRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAfflictionChanceEnum A, FAfflictionChanceEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAfflictionChanceRowHandleFAfflictionChanceRowHandle(FAfflictionChanceRowHandle RowHandleA, FAfflictionChanceRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAfflictionChanceStruct(FAfflictionChanceRowHandle RowHandle, FAfflictionChance& AfflictionChance, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceRowHandle MakeAfflictionChance(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceEnum MakeAfflictionChanceEnum(FAfflictionChanceEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceRowHandle MakeAfflictionChanceFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceRowHandle MakeLiteralAfflictionChance(FAfflictionChanceRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAfflictionChanceEnum A, FAfflictionChanceEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAfflictionChanceEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAfflictionChanceTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceEnum RowHandleToStruct(FAfflictionChanceRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAfflictionChanceEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAfflictionChanceEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAfflictionChanceRowHandle StructToRowHandle(FAfflictionChanceEnum EnumValue);  // parameters 0x28
};
