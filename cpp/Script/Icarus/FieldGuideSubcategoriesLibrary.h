// /Script/Icarus.FieldGuideSubcategoriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FieldGuideSubcategories/FieldGuideSubcategoriesLibrary.h

UCLASS()
class UFieldGuideSubcategoriesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToFieldGuideSubcategoriesTable(FName Name, FFieldGuideSubcategories Data, FFieldGuideSubcategoriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFieldGuideSubcategoriesEnum(FFieldGuideSubcategoriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFieldGuideSubcategoriesRowHandle CastToFieldGuideSubcategoriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFieldGuideSubcategoriesEnum A, FFieldGuideSubcategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFieldGuideSubcategoriesRowHandleFFieldGuideSubcategoriesRowHandle(FFieldGuideSubcategoriesRowHandle RowHandleA, FFieldGuideSubcategoriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFieldGuideSubcategoriesStruct(FFieldGuideSubcategoriesRowHandle RowHandle, FFieldGuideSubcategories& FieldGuideSubcategories, EValid& Paths);  // parameters 0xA1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesRowHandle MakeFieldGuideSubcategories(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesEnum MakeFieldGuideSubcategoriesEnum(FFieldGuideSubcategoriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesRowHandle MakeFieldGuideSubcategoriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesRowHandle MakeLiteralFieldGuideSubcategories(FFieldGuideSubcategoriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFieldGuideSubcategoriesEnum A, FFieldGuideSubcategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFieldGuideSubcategoriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFieldGuideSubcategoriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesEnum RowHandleToStruct(FFieldGuideSubcategoriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFieldGuideSubcategoriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFieldGuideSubcategoriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideSubcategoriesRowHandle StructToRowHandle(FFieldGuideSubcategoriesEnum EnumValue);  // parameters 0x28
};
