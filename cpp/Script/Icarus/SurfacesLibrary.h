// /Script/Icarus.SurfacesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Surfaces/SurfacesLibrary.h

UCLASS()
class USurfacesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToSurfacesTable(FName Name, FSurfacesData Data, FSurfacesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xC9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSurfacesEnum(FSurfacesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSurfacesRowHandle CastToSurfacesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSurfacesEnum A, FSurfacesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSurfacesRowHandleFSurfacesRowHandle(FSurfacesRowHandle RowHandleA, FSurfacesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSurfacesStruct(FSurfacesRowHandle RowHandle, FSurfacesData& Surfaces, EValid& Paths);  // parameters 0xC1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesRowHandle MakeLiteralSurfaces(FSurfacesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesRowHandle MakeSurfaces(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesEnum MakeSurfacesEnum(FSurfacesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesRowHandle MakeSurfacesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesRowHandle MakeSurfacesRowFromSurfaceType(const TEnumAsByte<EPhysicalSurface>& InSurfaceType);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSurfacesEnum A, FSurfacesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSurfacesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSurfacesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesEnum RowHandleToStruct(FSurfacesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSurfacesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSurfacesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurfacesRowHandle StructToRowHandle(FSurfacesEnum EnumValue);  // parameters 0x28
};
