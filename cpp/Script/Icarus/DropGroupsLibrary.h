// /Script/Icarus.DropGroupsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/DropGroups/DropGroupsLibrary.h

UCLASS()
class UDropGroupsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToDropGroupsTable(FName Name, FDropGroupCosmeticData Data, FDropGroupsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xE9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakDropGroupsEnum(FDropGroupsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FDropGroupsRowHandle CastToDropGroupsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FDropGroupsEnum A, FDropGroupsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FDropGroupsRowHandleFDropGroupsRowHandle(FDropGroupsRowHandle RowHandleA, FDropGroupsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetDropGroupsStruct(FDropGroupsRowHandle RowHandle, FDropGroupCosmeticData& DropGroups, EValid& Paths);  // parameters 0xE1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsRowHandle MakeDropGroups(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsEnum MakeDropGroupsEnum(FDropGroupsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsRowHandle MakeDropGroupsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsRowHandle MakeLiteralDropGroups(FDropGroupsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FDropGroupsEnum A, FDropGroupsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FDropGroupsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromDropGroupsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsEnum RowHandleToStruct(FDropGroupsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FDropGroupsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FDropGroupsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDropGroupsRowHandle StructToRowHandle(FDropGroupsEnum EnumValue);  // parameters 0x28
};
