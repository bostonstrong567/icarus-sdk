// /Script/Icarus.CriticalHitAreasLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/CriticalHitAreas/CriticalHitAreasLibrary.h

UCLASS()
class UCriticalHitAreasLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToCriticalHitAreasTable(FName Name, FCriticalHitArea Data, FCriticalHitAreasRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xC1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakCriticalHitAreasEnum(FCriticalHitAreasEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FCriticalHitAreasRowHandle CastToCriticalHitAreasRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FCriticalHitAreasEnum A, FCriticalHitAreasEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FCriticalHitAreasRowHandleFCriticalHitAreasRowHandle(FCriticalHitAreasRowHandle RowHandleA, FCriticalHitAreasRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetCriticalHitAreasStruct(FCriticalHitAreasRowHandle RowHandle, FCriticalHitArea& CriticalHitAreas, EValid& Paths);  // parameters 0xB9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasRowHandle MakeCriticalHitAreas(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasEnum MakeCriticalHitAreasEnum(FCriticalHitAreasEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasRowHandle MakeCriticalHitAreasFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasRowHandle MakeLiteralCriticalHitAreas(FCriticalHitAreasRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FCriticalHitAreasEnum A, FCriticalHitAreasEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FCriticalHitAreasEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromCriticalHitAreasTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasEnum RowHandleToStruct(FCriticalHitAreasRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FCriticalHitAreasEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FCriticalHitAreasEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCriticalHitAreasRowHandle StructToRowHandle(FCriticalHitAreasEnum EnumValue);  // parameters 0x28
};
