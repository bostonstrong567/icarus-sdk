// /Script/Icarus.PrebuiltStructuresLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/PrebuiltStructures/PrebuiltStructuresLibrary.h

UCLASS()
class UPrebuiltStructuresLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToPrebuiltStructuresTable(FName Name, FPrebuiltData Data, FPrebuiltStructuresRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPrebuiltStructuresEnum(FPrebuiltStructuresEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPrebuiltStructuresRowHandle CastToPrebuiltStructuresRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPrebuiltStructuresEnum A, FPrebuiltStructuresEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPrebuiltStructuresRowHandleFPrebuiltStructuresRowHandle(FPrebuiltStructuresRowHandle RowHandleA, FPrebuiltStructuresRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPrebuiltStructuresStruct(FPrebuiltStructuresRowHandle RowHandle, FPrebuiltData& PrebuiltStructures, EValid& Paths);  // parameters 0x41
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresRowHandle MakeLiteralPrebuiltStructures(FPrebuiltStructuresRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresRowHandle MakePrebuiltStructures(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresEnum MakePrebuiltStructuresEnum(FPrebuiltStructuresEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresRowHandle MakePrebuiltStructuresFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPrebuiltStructuresEnum A, FPrebuiltStructuresEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPrebuiltStructuresEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPrebuiltStructuresTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresEnum RowHandleToStruct(FPrebuiltStructuresRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPrebuiltStructuresEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPrebuiltStructuresEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrebuiltStructuresRowHandle StructToRowHandle(FPrebuiltStructuresEnum EnumValue);  // parameters 0x28
};
