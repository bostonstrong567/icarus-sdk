// /Script/Icarus.BuildingSkinsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BuildingSkins/BuildingSkinsLibrary.h

UCLASS()
class UBuildingSkinsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToBuildingSkinsTable(FName Name, FBuildingSkin Data, FBuildingSkinsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBuildingSkinsEnum(FBuildingSkinsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBuildingSkinsRowHandle CastToBuildingSkinsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBuildingSkinsEnum A, FBuildingSkinsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBuildingSkinsRowHandleFBuildingSkinsRowHandle(FBuildingSkinsRowHandle RowHandleA, FBuildingSkinsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBuildingSkinsStruct(FBuildingSkinsRowHandle RowHandle, FBuildingSkin& BuildingSkins, EValid& Paths);  // parameters 0xD1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsRowHandle MakeBuildingSkins(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsEnum MakeBuildingSkinsEnum(FBuildingSkinsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsRowHandle MakeBuildingSkinsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsRowHandle MakeLiteralBuildingSkins(FBuildingSkinsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBuildingSkinsEnum A, FBuildingSkinsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBuildingSkinsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBuildingSkinsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsEnum RowHandleToStruct(FBuildingSkinsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBuildingSkinsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBuildingSkinsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingSkinsRowHandle StructToRowHandle(FBuildingSkinsEnum EnumValue);  // parameters 0x28
};
