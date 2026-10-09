// /Script/Icarus.VoxelMaterialMapLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/VoxelMaterialMap/VoxelMaterialMapLibrary.h

UCLASS()
class UVoxelMaterialMapLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToVoxelMaterialMapTable(FName Name, FVoxelMaterialMap Data, FVoxelMaterialMapRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakVoxelMaterialMapEnum(FVoxelMaterialMapEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FVoxelMaterialMapRowHandle CastToVoxelMaterialMapRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FVoxelMaterialMapEnum A, FVoxelMaterialMapEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FVoxelMaterialMapRowHandleFVoxelMaterialMapRowHandle(FVoxelMaterialMapRowHandle RowHandleA, FVoxelMaterialMapRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetVoxelMaterialMapStruct(FVoxelMaterialMapRowHandle RowHandle, FVoxelMaterialMap& VoxelMaterialMap, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapRowHandle MakeLiteralVoxelMaterialMap(FVoxelMaterialMapRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapRowHandle MakeVoxelMaterialMap(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapEnum MakeVoxelMaterialMapEnum(FVoxelMaterialMapEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapRowHandle MakeVoxelMaterialMapFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FVoxelMaterialMapEnum A, FVoxelMaterialMapEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FVoxelMaterialMapEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromVoxelMaterialMapTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapEnum RowHandleToStruct(FVoxelMaterialMapRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FVoxelMaterialMapEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FVoxelMaterialMapEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelMaterialMapRowHandle StructToRowHandle(FVoxelMaterialMapEnum EnumValue);  // parameters 0x28
};
