// /Script/Icarus.ArmourLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Armour/ArmourLibrary.h

UCLASS()
class UArmourLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToArmourTable(FName Name, FArmourData Data, FArmourRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x321
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakArmourEnum(FArmourEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FArmourRowHandle CastToArmourRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FArmourEnum A, FArmourEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FArmourRowHandleFArmourRowHandle(FArmourRowHandle RowHandleA, FArmourRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetArmourStruct(FArmourRowHandle RowHandle, FArmourData& Armour, EValid& Paths);  // parameters 0x319
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourRowHandle MakeArmour(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourEnum MakeArmourEnum(FArmourEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourRowHandle MakeArmourFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourRowHandle MakeLiteralArmour(FArmourRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FArmourEnum A, FArmourEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FArmourEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromArmourTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourEnum RowHandleToStruct(FArmourRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FArmourEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FArmourEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FArmourRowHandle StructToRowHandle(FArmourEnum EnumValue);  // parameters 0x28
};
