// /Script/Icarus.WorkshopItemsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/WorkshopItems/WorkshopItemsLibrary.h

UCLASS()
class UWorkshopItemsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToWorkshopItemsTable(FName Name, FWorkshopItem Data, FWorkshopItemsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWorkshopItemsEnum(FWorkshopItemsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FWorkshopItemsRowHandle CastToWorkshopItemsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FWorkshopItemsEnum A, FWorkshopItemsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FWorkshopItemsRowHandleFWorkshopItemsRowHandle(FWorkshopItemsRowHandle RowHandleA, FWorkshopItemsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetWorkshopItemsStruct(FWorkshopItemsRowHandle RowHandle, FWorkshopItem& WorkshopItems, EValid& Paths);  // parameters 0x81
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsRowHandle MakeLiteralWorkshopItems(FWorkshopItemsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsRowHandle MakeWorkshopItems(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsEnum MakeWorkshopItemsEnum(FWorkshopItemsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsRowHandle MakeWorkshopItemsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FWorkshopItemsEnum A, FWorkshopItemsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FWorkshopItemsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromWorkshopItemsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsEnum RowHandleToStruct(FWorkshopItemsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FWorkshopItemsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FWorkshopItemsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorkshopItemsRowHandle StructToRowHandle(FWorkshopItemsEnum EnumValue);  // parameters 0x28
};
