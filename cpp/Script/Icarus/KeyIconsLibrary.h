// /Script/Icarus.KeyIconsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/KeyIcons/KeyIconsLibrary.h

UCLASS()
class UKeyIconsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToKeyIconsTable(FName Name, FKeyIconData Data, FKeyIconsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakKeyIconsEnum(FKeyIconsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FKeyIconsRowHandle CastToKeyIconsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FKeyIconsEnum A, FKeyIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FKeyIconsRowHandleFKeyIconsRowHandle(FKeyIconsRowHandle RowHandleA, FKeyIconsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetKeyIconsStruct(FKeyIconsRowHandle RowHandle, FKeyIconData& KeyIcons, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsRowHandle MakeKeyIcons(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsEnum MakeKeyIconsEnum(FKeyIconsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsRowHandle MakeKeyIconsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FKeyIconsRowHandle> MakeKeyIconsRowFromIconSet(const EControllerIconSet& InIconSet);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsRowHandle MakeLiteralKeyIcons(FKeyIconsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FKeyIconsEnum A, FKeyIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FKeyIconsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromKeyIconsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsEnum RowHandleToStruct(FKeyIconsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FKeyIconsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FKeyIconsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyIconsRowHandle StructToRowHandle(FKeyIconsEnum EnumValue);  // parameters 0x28
};
