// /Script/Icarus.ItemsStaticLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ItemsStatic/ItemsStaticLibrary.h

UCLASS()
class UItemsStaticLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToItemsStaticTable(FName Name, FItemStaticData Data, FItemsStaticRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x4A9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemsStaticEnum(FItemsStaticEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemsStaticRowHandle CastToItemsStaticRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemsStaticEnum A, FItemsStaticEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle(FItemsStaticRowHandle RowHandleA, FItemsStaticRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemsStaticStruct(FItemsStaticRowHandle RowHandle, FItemStaticData& ItemsStatic, EValid& Paths);  // parameters 0x4A1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticRowHandle MakeItemsStatic(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticEnum MakeItemsStaticEnum(FItemsStaticEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticRowHandle MakeItemsStaticFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticRowHandle MakeLiteralItemsStatic(FItemsStaticRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemsStaticEnum A, FItemsStaticEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemsStaticEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemsStaticTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticEnum RowHandleToStruct(FItemsStaticRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemsStaticEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemsStaticEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemsStaticRowHandle StructToRowHandle(FItemsStaticEnum EnumValue);  // parameters 0x28
};
