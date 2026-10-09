// /Script/Icarus.GroupedInstancedMapDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/GroupedInstancedMapData/GroupedInstancedMapDataLibrary.h

UCLASS()
class UGroupedInstancedMapDataLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToGroupedInstancedMapDataTable(FName Name, FGroupedInstancedMapData Data, FGroupedInstancedMapDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGroupedInstancedMapDataEnum(FGroupedInstancedMapDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FGroupedInstancedMapDataRowHandle CastToGroupedInstancedMapDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FGroupedInstancedMapDataEnum A, FGroupedInstancedMapDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FGroupedInstancedMapDataRowHandleFGroupedInstancedMapDataRowHandle(FGroupedInstancedMapDataRowHandle RowHandleA, FGroupedInstancedMapDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetGroupedInstancedMapDataStruct(FGroupedInstancedMapDataRowHandle RowHandle, FGroupedInstancedMapData& GroupedInstancedMapData, EValid& Paths);  // parameters 0x49
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataRowHandle MakeGroupedInstancedMapData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataEnum MakeGroupedInstancedMapDataEnum(FGroupedInstancedMapDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataRowHandle MakeGroupedInstancedMapDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataRowHandle MakeLiteralGroupedInstancedMapData(FGroupedInstancedMapDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FGroupedInstancedMapDataEnum A, FGroupedInstancedMapDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FGroupedInstancedMapDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromGroupedInstancedMapDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataEnum RowHandleToStruct(FGroupedInstancedMapDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FGroupedInstancedMapDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FGroupedInstancedMapDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGroupedInstancedMapDataRowHandle StructToRowHandle(FGroupedInstancedMapDataEnum EnumValue);  // parameters 0x28
};
