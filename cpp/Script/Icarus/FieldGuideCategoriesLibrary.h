// /Script/Icarus.FieldGuideCategoriesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/FieldGuideCategories/FieldGuideCategoriesLibrary.h

UCLASS()
class UFieldGuideCategoriesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToFieldGuideCategoriesTable(FName Name, FFieldGuideCategories Data, FFieldGuideCategoriesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFieldGuideCategoriesEnum(FFieldGuideCategoriesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FFieldGuideCategoriesRowHandle CastToFieldGuideCategoriesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FFieldGuideCategoriesEnum A, FFieldGuideCategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFieldGuideCategoriesRowHandleFFieldGuideCategoriesRowHandle(FFieldGuideCategoriesRowHandle RowHandleA, FFieldGuideCategoriesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetFieldGuideCategoriesStruct(FFieldGuideCategoriesRowHandle RowHandle, FFieldGuideCategories& FieldGuideCategories, EValid& Paths);  // parameters 0xB1
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesRowHandle MakeFieldGuideCategories(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesEnum MakeFieldGuideCategoriesEnum(FFieldGuideCategoriesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesRowHandle MakeFieldGuideCategoriesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesRowHandle MakeLiteralFieldGuideCategories(FFieldGuideCategoriesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FFieldGuideCategoriesEnum A, FFieldGuideCategoriesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FFieldGuideCategoriesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromFieldGuideCategoriesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesEnum RowHandleToStruct(FFieldGuideCategoriesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FFieldGuideCategoriesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FFieldGuideCategoriesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFieldGuideCategoriesRowHandle StructToRowHandle(FFieldGuideCategoriesEnum EnumValue);  // parameters 0x28
};
