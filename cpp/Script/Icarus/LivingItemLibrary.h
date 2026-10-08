// /Script/Icarus.LivingItemLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/LivingItem/LivingItemLibrary.h

UCLASS()
class ULivingItemLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToLivingItemTable(FName Name, FLivingItemData Data, FLivingItemRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakLivingItemEnum(FLivingItemEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FLivingItemRowHandle CastToLivingItemRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FLivingItemEnum A, FLivingItemEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FLivingItemRowHandleFLivingItemRowHandle(FLivingItemRowHandle RowHandleA, FLivingItemRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetLivingItemStruct(FLivingItemRowHandle RowHandle, FLivingItemData& LivingItem, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemRowHandle MakeLiteralLivingItem(FLivingItemRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemRowHandle MakeLivingItem(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemEnum MakeLivingItemEnum(FLivingItemEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemRowHandle MakeLivingItemFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FLivingItemEnum A, FLivingItemEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FLivingItemEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromLivingItemTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemEnum RowHandleToStruct(FLivingItemRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FLivingItemEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FLivingItemEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLivingItemRowHandle StructToRowHandle(FLivingItemEnum EnumValue);  // parameters 0x28
};
