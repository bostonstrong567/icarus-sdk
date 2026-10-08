// /Script/Icarus.ItemableLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Itemable/ItemableLibrary.h

UCLASS()
class UItemableLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToItemableTable(FName Name, FItemableData Data, FItemableRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x119
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemableEnum(FItemableEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemableRowHandle CastToItemableRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemableEnum A, FItemableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemableRowHandleFItemableRowHandle(FItemableRowHandle RowHandleA, FItemableRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemableStruct(FItemableRowHandle RowHandle, FItemableData& Itemable, EValid& Paths);  // parameters 0x111
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableRowHandle MakeItemable(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableEnum MakeItemableEnum(FItemableEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableRowHandle MakeItemableFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableRowHandle MakeLiteralItemable(FItemableRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemableEnum A, FItemableEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemableEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemableTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableEnum RowHandleToStruct(FItemableRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemableEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemableEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemableRowHandle StructToRowHandle(FItemableEnum EnumValue);  // parameters 0x28
};
