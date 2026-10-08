// /Script/Icarus.MeshableLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Meshable/MeshableLibrary.h

UCLASS()
class UMeshableLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToMeshableTable(FName Name, FMeshableData Data, FMeshableRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakMeshableEnum(FMeshableEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FMeshableRowHandle CastToMeshableRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FMeshableEnum A, FMeshableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FMeshableRowHandleFMeshableRowHandle(FMeshableRowHandle RowHandleA, FMeshableRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetMeshableStruct(FMeshableRowHandle RowHandle, FMeshableData& Meshable, EValid& Paths);  // parameters 0x1E9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableRowHandle MakeLiteralMeshable(FMeshableRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableRowHandle MakeMeshable(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableEnum MakeMeshableEnum(FMeshableEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableRowHandle MakeMeshableFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FMeshableEnum A, FMeshableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FMeshableEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromMeshableTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableEnum RowHandleToStruct(FMeshableRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FMeshableEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FMeshableEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMeshableRowHandle StructToRowHandle(FMeshableEnum EnumValue);  // parameters 0x28
};
