// /Script/Icarus.ItemAnimationsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ItemAnimations/ItemAnimationsLibrary.h

UCLASS()
class UItemAnimationsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToItemAnimationsTable(FName Name, FItemAnimationData Data, FItemAnimationsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x381
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemAnimationsEnum(FItemAnimationsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemAnimationsRowHandle CastToItemAnimationsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemAnimationsEnum A, FItemAnimationsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemAnimationsRowHandleFItemAnimationsRowHandle(FItemAnimationsRowHandle RowHandleA, FItemAnimationsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemAnimationsStruct(FItemAnimationsRowHandle RowHandle, FItemAnimationData& ItemAnimations, EValid& Paths);  // parameters 0x379
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsRowHandle MakeItemAnimations(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsEnum MakeItemAnimationsEnum(FItemAnimationsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsRowHandle MakeItemAnimationsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsRowHandle MakeLiteralItemAnimations(FItemAnimationsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemAnimationsEnum A, FItemAnimationsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemAnimationsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemAnimationsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsEnum RowHandleToStruct(FItemAnimationsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemAnimationsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemAnimationsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAnimationsRowHandle StructToRowHandle(FItemAnimationsEnum EnumValue);  // parameters 0x28
};
