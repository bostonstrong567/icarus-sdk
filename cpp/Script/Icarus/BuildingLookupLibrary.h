// /Script/Icarus.BuildingLookupLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BuildingLookup/BuildingLookupLibrary.h

UCLASS()
class UBuildingLookupLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToBuildingLookupTable(FName Name, FBuildingLookup Data, FBuildingLookupRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBuildingLookupEnum(FBuildingLookupEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBuildingLookupRowHandle CastToBuildingLookupRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBuildingLookupEnum A, FBuildingLookupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBuildingLookupRowHandleFBuildingLookupRowHandle(FBuildingLookupRowHandle RowHandleA, FBuildingLookupRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBuildingLookupStruct(FBuildingLookupRowHandle RowHandle, FBuildingLookup& BuildingLookup, EValid& Paths);  // parameters 0x1E9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupRowHandle MakeBuildingLookup(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupEnum MakeBuildingLookupEnum(FBuildingLookupEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupRowHandle MakeBuildingLookupFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupRowHandle MakeLiteralBuildingLookup(FBuildingLookupRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBuildingLookupEnum A, FBuildingLookupEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBuildingLookupEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBuildingLookupTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupEnum RowHandleToStruct(FBuildingLookupRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBuildingLookupEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBuildingLookupEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingLookupRowHandle StructToRowHandle(FBuildingLookupEnum EnumValue);  // parameters 0x28
};
