// /Script/Icarus.VoxelDistributionRegionLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/VoxelDistributionRegion/VoxelDistributionRegionLibrary.h

UCLASS()
class UVoxelDistributionRegionLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToVoxelDistributionRegionTable(FName Name, FVoxelDistributionRegion Data, FVoxelDistributionRegionRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakVoxelDistributionRegionEnum(FVoxelDistributionRegionEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FVoxelDistributionRegionRowHandle CastToVoxelDistributionRegionRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FVoxelDistributionRegionEnum A, FVoxelDistributionRegionEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FVoxelDistributionRegionRowHandleFVoxelDistributionRegionRowHandle(FVoxelDistributionRegionRowHandle RowHandleA, FVoxelDistributionRegionRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetVoxelDistributionRegionStruct(FVoxelDistributionRegionRowHandle RowHandle, FVoxelDistributionRegion& VoxelDistributionRegion, EValid& Paths);  // parameters 0x99
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionRowHandle MakeLiteralVoxelDistributionRegion(FVoxelDistributionRegionRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionRowHandle MakeVoxelDistributionRegion(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionEnum MakeVoxelDistributionRegionEnum(FVoxelDistributionRegionEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionRowHandle MakeVoxelDistributionRegionFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FVoxelDistributionRegionEnum A, FVoxelDistributionRegionEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FVoxelDistributionRegionEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromVoxelDistributionRegionTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionEnum RowHandleToStruct(FVoxelDistributionRegionRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FVoxelDistributionRegionEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FVoxelDistributionRegionEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVoxelDistributionRegionRowHandle StructToRowHandle(FVoxelDistributionRegionEnum EnumValue);  // parameters 0x28
};
