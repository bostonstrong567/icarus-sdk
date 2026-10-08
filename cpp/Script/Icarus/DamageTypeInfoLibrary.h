// /Script/Icarus.DamageTypeInfoLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/DamageTypeInfo/DamageTypeInfoLibrary.h

UCLASS()
class UDamageTypeInfoLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToDamageTypeInfoTable(FName Name, FDamageTypeInfo Data, FDamageTypeInfoRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakDamageTypeInfoEnum(FDamageTypeInfoEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FDamageTypeInfoRowHandle CastToDamageTypeInfoRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FDamageTypeInfoEnum A, FDamageTypeInfoEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FDamageTypeInfoRowHandleFDamageTypeInfoRowHandle(FDamageTypeInfoRowHandle RowHandleA, FDamageTypeInfoRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetDamageTypeInfoStruct(FDamageTypeInfoRowHandle RowHandle, FDamageTypeInfo& DamageTypeInfo, EValid& Paths);  // parameters 0xA9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoRowHandle MakeDamageTypeInfo(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoEnum MakeDamageTypeInfoEnum(FDamageTypeInfoEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoRowHandle MakeDamageTypeInfoFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoRowHandle MakeLiteralDamageTypeInfo(FDamageTypeInfoRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FDamageTypeInfoEnum A, FDamageTypeInfoEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FDamageTypeInfoEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromDamageTypeInfoTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoEnum RowHandleToStruct(FDamageTypeInfoRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FDamageTypeInfoEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FDamageTypeInfoEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDamageTypeInfoRowHandle StructToRowHandle(FDamageTypeInfoEnum EnumValue);  // parameters 0x28
};
