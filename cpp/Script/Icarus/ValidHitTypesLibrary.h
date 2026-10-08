// /Script/Icarus.ValidHitTypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ValidHitTypes/ValidHitTypesLibrary.h

UCLASS()
class UValidHitTypesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToValidHitTypesTable(FName Name, FValidHitType Data, FValidHitTypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakValidHitTypesEnum(FValidHitTypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FValidHitTypesRowHandle CastToValidHitTypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FValidHitTypesEnum A, FValidHitTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FValidHitTypesRowHandleFValidHitTypesRowHandle(FValidHitTypesRowHandle RowHandleA, FValidHitTypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetValidHitTypesStruct(FValidHitTypesRowHandle RowHandle, FValidHitType& ValidHitTypes, EValid& Paths);  // parameters 0x31
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesRowHandle MakeLiteralValidHitTypes(FValidHitTypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesRowHandle MakeValidHitTypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesEnum MakeValidHitTypesEnum(FValidHitTypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesRowHandle MakeValidHitTypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FValidHitTypesEnum A, FValidHitTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FValidHitTypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromValidHitTypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesEnum RowHandleToStruct(FValidHitTypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FValidHitTypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FValidHitTypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FValidHitTypesRowHandle StructToRowHandle(FValidHitTypesEnum EnumValue);  // parameters 0x28
};
