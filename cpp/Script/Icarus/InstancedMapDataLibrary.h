// /Script/Icarus.InstancedMapDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/InstancedMapData/InstancedMapDataLibrary.h

UCLASS()
class UInstancedMapDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToInstancedMapDataTable(FName Name, FInstancedMapData Data, FInstancedMapDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakInstancedMapDataEnum(FInstancedMapDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FInstancedMapDataRowHandle CastToInstancedMapDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FInstancedMapDataEnum A, FInstancedMapDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FInstancedMapDataRowHandleFInstancedMapDataRowHandle(FInstancedMapDataRowHandle RowHandleA, FInstancedMapDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetInstancedMapDataStruct(FInstancedMapDataRowHandle RowHandle, FInstancedMapData& InstancedMapData, EValid& Paths);  // parameters 0x99
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataRowHandle MakeInstancedMapData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataEnum MakeInstancedMapDataEnum(FInstancedMapDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataRowHandle MakeInstancedMapDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataRowHandle MakeLiteralInstancedMapData(FInstancedMapDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FInstancedMapDataEnum A, FInstancedMapDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FInstancedMapDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromInstancedMapDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataEnum RowHandleToStruct(FInstancedMapDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FInstancedMapDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FInstancedMapDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInstancedMapDataRowHandle StructToRowHandle(FInstancedMapDataEnum EnumValue);  // parameters 0x28
};
