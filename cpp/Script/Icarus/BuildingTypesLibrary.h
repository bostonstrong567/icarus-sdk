// /Script/Icarus.BuildingTypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BuildingTypes/BuildingTypesLibrary.h

UCLASS()
class UBuildingTypesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToBuildingTypesTable(FName Name, FIcarusBuildingType Data, FBuildingTypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBuildingTypesEnum(FBuildingTypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBuildingTypesRowHandle CastToBuildingTypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBuildingTypesEnum A, FBuildingTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBuildingTypesRowHandleFBuildingTypesRowHandle(FBuildingTypesRowHandle RowHandleA, FBuildingTypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBuildingTypesStruct(FBuildingTypesRowHandle RowHandle, FIcarusBuildingType& BuildingTypes, EValid& Paths);  // parameters 0x99
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesRowHandle MakeBuildingTypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesEnum MakeBuildingTypesEnum(FBuildingTypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesRowHandle MakeBuildingTypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesRowHandle MakeLiteralBuildingTypes(FBuildingTypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBuildingTypesEnum A, FBuildingTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBuildingTypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBuildingTypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesEnum RowHandleToStruct(FBuildingTypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBuildingTypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBuildingTypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingTypesRowHandle StructToRowHandle(FBuildingTypesEnum EnumValue);  // parameters 0x28
};
