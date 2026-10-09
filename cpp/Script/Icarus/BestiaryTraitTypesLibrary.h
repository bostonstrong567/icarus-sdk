// /Script/Icarus.BestiaryTraitTypesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BestiaryTraitTypes/BestiaryTraitTypesLibrary.h

UCLASS()
class UBestiaryTraitTypesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToBestiaryTraitTypesTable(FName Name, FBestiaryTraitType Data, FBestiaryTraitTypesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBestiaryTraitTypesEnum(FBestiaryTraitTypesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBestiaryTraitTypesRowHandle CastToBestiaryTraitTypesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBestiaryTraitTypesEnum A, FBestiaryTraitTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBestiaryTraitTypesRowHandleFBestiaryTraitTypesRowHandle(FBestiaryTraitTypesRowHandle RowHandleA, FBestiaryTraitTypesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBestiaryTraitTypesStruct(FBestiaryTraitTypesRowHandle RowHandle, FBestiaryTraitType& BestiaryTraitTypes, EValid& Paths);  // parameters 0x69
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesRowHandle MakeBestiaryTraitTypes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesEnum MakeBestiaryTraitTypesEnum(FBestiaryTraitTypesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesRowHandle MakeBestiaryTraitTypesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesRowHandle MakeLiteralBestiaryTraitTypes(FBestiaryTraitTypesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBestiaryTraitTypesEnum A, FBestiaryTraitTypesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBestiaryTraitTypesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBestiaryTraitTypesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesEnum RowHandleToStruct(FBestiaryTraitTypesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBestiaryTraitTypesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBestiaryTraitTypesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBestiaryTraitTypesRowHandle StructToRowHandle(FBestiaryTraitTypesEnum EnumValue);  // parameters 0x28
};
