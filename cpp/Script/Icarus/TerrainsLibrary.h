// /Script/Icarus.TerrainsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Terrains/TerrainsLibrary.h

UCLASS()
class UTerrainsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToTerrainsTable(FName Name, FIcarusTerrain Data, FTerrainsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1A1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTerrainsEnum(FTerrainsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FTerrainsRowHandle CastToTerrainsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FTerrainsEnum A, FTerrainsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FTerrainsRowHandleFTerrainsRowHandle(FTerrainsRowHandle RowHandleA, FTerrainsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetTerrainsStruct(FTerrainsRowHandle RowHandle, FIcarusTerrain& Terrains, EValid& Paths);  // parameters 0x199
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsRowHandle MakeLiteralTerrains(FTerrainsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsRowHandle MakeTerrains(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsEnum MakeTerrainsEnum(FTerrainsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsRowHandle MakeTerrainsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FTerrainsEnum A, FTerrainsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FTerrainsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromTerrainsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsEnum RowHandleToStruct(FTerrainsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FTerrainsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FTerrainsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTerrainsRowHandle StructToRowHandle(FTerrainsEnum EnumValue);  // parameters 0x28
};
