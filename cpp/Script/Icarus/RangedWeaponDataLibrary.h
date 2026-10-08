// /Script/Icarus.RangedWeaponDataLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/RangedWeaponData/RangedWeaponDataLibrary.h

UCLASS()
class URangedWeaponDataLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToRangedWeaponDataTable(FName Name, FRangedWeaponData Data, FRangedWeaponDataRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xF1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRangedWeaponDataEnum(FRangedWeaponDataEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FRangedWeaponDataRowHandle CastToRangedWeaponDataRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FRangedWeaponDataEnum A, FRangedWeaponDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRangedWeaponDataRowHandleFRangedWeaponDataRowHandle(FRangedWeaponDataRowHandle RowHandleA, FRangedWeaponDataRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetRangedWeaponDataStruct(FRangedWeaponDataRowHandle RowHandle, FRangedWeaponData& RangedWeaponData, EValid& Paths);  // parameters 0xE9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataRowHandle MakeLiteralRangedWeaponData(FRangedWeaponDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataRowHandle MakeRangedWeaponData(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataEnum MakeRangedWeaponDataEnum(FRangedWeaponDataEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataRowHandle MakeRangedWeaponDataFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FRangedWeaponDataEnum A, FRangedWeaponDataEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FRangedWeaponDataEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromRangedWeaponDataTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataEnum RowHandleToStruct(FRangedWeaponDataRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FRangedWeaponDataEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FRangedWeaponDataEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRangedWeaponDataRowHandle StructToRowHandle(FRangedWeaponDataEnum EnumValue);  // parameters 0x28
};
