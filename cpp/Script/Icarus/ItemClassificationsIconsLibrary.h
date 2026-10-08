// /Script/Icarus.ItemClassificationsIconsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ItemClassificationsIcons/ItemClassificationsIconsLibrary.h

UCLASS()
class UItemClassificationsIconsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToItemClassificationsIconsTable(FName Name, FItemClassificationsIconsData Data, FItemClassificationsIconsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemClassificationsIconsEnum(FItemClassificationsIconsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemClassificationsIconsRowHandle CastToItemClassificationsIconsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemClassificationsIconsEnum A, FItemClassificationsIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemClassificationsIconsRowHandleFItemClassificationsIconsRowHandle(FItemClassificationsIconsRowHandle RowHandleA, FItemClassificationsIconsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemClassificationsIconsStruct(FItemClassificationsIconsRowHandle RowHandle, FItemClassificationsIconsData& ItemClassificationsIcons, EValid& Paths);  // parameters 0x69
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsRowHandle MakeItemClassificationsIcons(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsEnum MakeItemClassificationsIconsEnum(FItemClassificationsIconsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsRowHandle MakeItemClassificationsIconsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsRowHandle MakeLiteralItemClassificationsIcons(FItemClassificationsIconsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemClassificationsIconsEnum A, FItemClassificationsIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemClassificationsIconsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemClassificationsIconsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsEnum RowHandleToStruct(FItemClassificationsIconsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemClassificationsIconsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemClassificationsIconsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemClassificationsIconsRowHandle StructToRowHandle(FItemClassificationsIconsEnum EnumValue);  // parameters 0x28
};
