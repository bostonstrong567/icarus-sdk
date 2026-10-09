// /Script/Icarus.CriticalHitSetupLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CriticalHitSetup/CriticalHitSetupLibrary.h

UCLASS()
class UCriticalHitSetupLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToCriticalHitSetupTable(FName Name, FCriticalHitSetup Data, FCriticalHitSetupRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCriticalHitSetupEnum(FCriticalHitSetupEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCriticalHitSetupRowHandle CastToCriticalHitSetupRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCriticalHitSetupEnum A, FCriticalHitSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCriticalHitSetupRowHandleFCriticalHitSetupRowHandle(FCriticalHitSetupRowHandle RowHandleA, FCriticalHitSetupRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCriticalHitSetupStruct(FCriticalHitSetupRowHandle RowHandle, FCriticalHitSetup& CriticalHitSetup, EValid& Paths);  // parameters 0xC9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupRowHandle MakeCriticalHitSetup(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupEnum MakeCriticalHitSetupEnum(FCriticalHitSetupEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupRowHandle MakeCriticalHitSetupFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupRowHandle MakeLiteralCriticalHitSetup(FCriticalHitSetupRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCriticalHitSetupEnum A, FCriticalHitSetupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCriticalHitSetupEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCriticalHitSetupTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupEnum RowHandleToStruct(FCriticalHitSetupRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCriticalHitSetupEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCriticalHitSetupEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitSetupRowHandle StructToRowHandle(FCriticalHitSetupEnum EnumValue);  // parameters 0x28
};
