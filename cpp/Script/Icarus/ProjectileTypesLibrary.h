// /Script/Icarus.ProjectileTypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ProjectileTypes/ProjectileTypesLibrary.h

UCLASS()
class UProjectileTypesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToProjectileTypesTable(FName Name, FIcarusProjectileType Data, FProjectileTypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakProjectileTypesEnum(FProjectileTypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FProjectileTypesRowHandle CastToProjectileTypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FProjectileTypesEnum A, FProjectileTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FProjectileTypesRowHandleFProjectileTypesRowHandle(FProjectileTypesRowHandle RowHandleA, FProjectileTypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetProjectileTypesStruct(FProjectileTypesRowHandle RowHandle, FIcarusProjectileType& ProjectileTypes, EValid& Paths);  // parameters 0x49
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesRowHandle MakeLiteralProjectileTypes(FProjectileTypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesRowHandle MakeProjectileTypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesEnum MakeProjectileTypesEnum(FProjectileTypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesRowHandle MakeProjectileTypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FProjectileTypesEnum A, FProjectileTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FProjectileTypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromProjectileTypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesEnum RowHandleToStruct(FProjectileTypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FProjectileTypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FProjectileTypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProjectileTypesRowHandle StructToRowHandle(FProjectileTypesEnum EnumValue);  // parameters 0x28
};
