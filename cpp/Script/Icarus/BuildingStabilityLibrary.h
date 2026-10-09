// /Script/Icarus.BuildingStabilityLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BuildingStability/BuildingStabilityLibrary.h

UCLASS()
class UBuildingStabilityLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToBuildingStabilityTable(FName Name, FBuildingStability Data, FBuildingStabilityRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBuildingStabilityEnum(FBuildingStabilityEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBuildingStabilityRowHandle CastToBuildingStabilityRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBuildingStabilityEnum A, FBuildingStabilityEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBuildingStabilityRowHandleFBuildingStabilityRowHandle(FBuildingStabilityRowHandle RowHandleA, FBuildingStabilityRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBuildingStabilityStruct(FBuildingStabilityRowHandle RowHandle, FBuildingStability& BuildingStability, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityRowHandle MakeBuildingStability(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityEnum MakeBuildingStabilityEnum(FBuildingStabilityEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityRowHandle MakeBuildingStabilityFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityRowHandle MakeLiteralBuildingStability(FBuildingStabilityRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBuildingStabilityEnum A, FBuildingStabilityEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBuildingStabilityEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBuildingStabilityTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityEnum RowHandleToStruct(FBuildingStabilityRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBuildingStabilityEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBuildingStabilityEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingStabilityRowHandle StructToRowHandle(FBuildingStabilityEnum EnumValue);  // parameters 0x28
};
