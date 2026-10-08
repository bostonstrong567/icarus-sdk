// /Script/Icarus.SortTypePriorityLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SortTypePriority/SortTypePriorityLibrary.h

UCLASS()
class USortTypePriorityLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToSortTypePriorityTable(FName Name, FIcarusSortTypePriority Data, FSortTypePriorityRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSortTypePriorityEnum(FSortTypePriorityEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSortTypePriorityRowHandle CastToSortTypePriorityRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSortTypePriorityEnum A, FSortTypePriorityEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSortTypePriorityRowHandleFSortTypePriorityRowHandle(FSortTypePriorityRowHandle RowHandleA, FSortTypePriorityRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSortTypePriorityStruct(FSortTypePriorityRowHandle RowHandle, FIcarusSortTypePriority& SortTypePriority, EValid& Paths);  // parameters 0x41
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityRowHandle MakeLiteralSortTypePriority(FSortTypePriorityRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityRowHandle MakeSortTypePriority(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityEnum MakeSortTypePriorityEnum(FSortTypePriorityEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityRowHandle MakeSortTypePriorityFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSortTypePriorityEnum A, FSortTypePriorityEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSortTypePriorityEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSortTypePriorityTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityEnum RowHandleToStruct(FSortTypePriorityRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSortTypePriorityEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSortTypePriorityEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSortTypePriorityRowHandle StructToRowHandle(FSortTypePriorityEnum EnumValue);  // parameters 0x28
};
