// /Script/Icarus.QuickMoveLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/QuickMove/QuickMoveLibrary.h

UCLASS()
class UQuickMoveLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToQuickMoveTable(FName Name, FQuickMove Data, FQuickMoveRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakQuickMoveEnum(FQuickMoveEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FQuickMoveRowHandle CastToQuickMoveRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FQuickMoveEnum A, FQuickMoveEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FQuickMoveRowHandleFQuickMoveRowHandle(FQuickMoveRowHandle RowHandleA, FQuickMoveRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetQuickMoveStruct(FQuickMoveRowHandle RowHandle, FQuickMove& QuickMove, EValid& Paths);  // parameters 0x51
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveRowHandle MakeLiteralQuickMove(FQuickMoveRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveRowHandle MakeQuickMove(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveEnum MakeQuickMoveEnum(FQuickMoveEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveRowHandle MakeQuickMoveFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveRowHandle MakeQuickMoveRowFromSource(const FInventoryIDEnum& InSource);  // parameters 0x28
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FQuickMoveEnum A, FQuickMoveEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FQuickMoveEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromQuickMoveTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveEnum RowHandleToStruct(FQuickMoveRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FQuickMoveEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FQuickMoveEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuickMoveRowHandle StructToRowHandle(FQuickMoveEnum EnumValue);  // parameters 0x28
};
