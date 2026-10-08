// /Script/Icarus.HighlightableLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Highlightable/HighlightableLibrary.h

UCLASS()
class UHighlightableLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToHighlightableTable(FName Name, FHighlightableData Data, FHighlightableRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakHighlightableEnum(FHighlightableEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FHighlightableRowHandle CastToHighlightableRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FHighlightableEnum A, FHighlightableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FHighlightableRowHandleFHighlightableRowHandle(FHighlightableRowHandle RowHandleA, FHighlightableRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetHighlightableStruct(FHighlightableRowHandle RowHandle, FHighlightableData& Highlightable, EValid& Paths);  // parameters 0x91
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableRowHandle MakeHighlightable(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableEnum MakeHighlightableEnum(FHighlightableEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableRowHandle MakeHighlightableFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableRowHandle MakeLiteralHighlightable(FHighlightableRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FHighlightableEnum A, FHighlightableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FHighlightableEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromHighlightableTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableEnum RowHandleToStruct(FHighlightableRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FHighlightableEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FHighlightableEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FHighlightableRowHandle StructToRowHandle(FHighlightableEnum EnumValue);  // parameters 0x28
};
