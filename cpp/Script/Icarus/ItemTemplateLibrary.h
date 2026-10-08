// /Script/Icarus.ItemTemplateLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ItemTemplate/ItemTemplateLibrary.h

UCLASS()
class UItemTemplateLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToItemTemplateTable(FName Name, FItemData Data, FItemTemplateRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x211
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemTemplateEnum(FItemTemplateEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemTemplateRowHandle CastToItemTemplateRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemTemplateEnum A, FItemTemplateEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemTemplateRowHandleFItemTemplateRowHandle(FItemTemplateRowHandle RowHandleA, FItemTemplateRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemTemplateStruct(FItemTemplateRowHandle RowHandle, FItemData& ItemTemplate, EValid& Paths);  // parameters 0x209
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateRowHandle MakeItemTemplate(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateEnum MakeItemTemplateEnum(FItemTemplateEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateRowHandle MakeItemTemplateFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateRowHandle MakeLiteralItemTemplate(FItemTemplateRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemTemplateEnum A, FItemTemplateEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemTemplateEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemTemplateTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateEnum RowHandleToStruct(FItemTemplateRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemTemplateEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemTemplateEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemTemplateRowHandle StructToRowHandle(FItemTemplateEnum EnumValue);  // parameters 0x28
};
