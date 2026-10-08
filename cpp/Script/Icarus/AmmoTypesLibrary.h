// /Script/Icarus.AmmoTypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AmmoTypes/AmmoTypesLibrary.h

UCLASS()
class UAmmoTypesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAmmoTypesTable(FName Name, FAmmoTypeData Data, FAmmoTypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAmmoTypesEnum(FAmmoTypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAmmoTypesRowHandle CastToAmmoTypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAmmoTypesEnum A, FAmmoTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAmmoTypesRowHandleFAmmoTypesRowHandle(FAmmoTypesRowHandle RowHandleA, FAmmoTypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAmmoTypesStruct(FAmmoTypesRowHandle RowHandle, FAmmoTypeData& AmmoTypes, EValid& Paths);  // parameters 0x91
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesRowHandle MakeAmmoTypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesEnum MakeAmmoTypesEnum(FAmmoTypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesRowHandle MakeAmmoTypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesRowHandle MakeLiteralAmmoTypes(FAmmoTypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAmmoTypesEnum A, FAmmoTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAmmoTypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAmmoTypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesEnum RowHandleToStruct(FAmmoTypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAmmoTypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAmmoTypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAmmoTypesRowHandle StructToRowHandle(FAmmoTypesEnum EnumValue);  // parameters 0x28
};
