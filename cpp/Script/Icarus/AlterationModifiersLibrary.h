// /Script/Icarus.AlterationModifiersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AlterationModifiers/AlterationModifiersLibrary.h

UCLASS()
class UAlterationModifiersLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToAlterationModifiersTable(FName Name, FAlterationModifiers Data, FAlterationModifiersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAlterationModifiersEnum(FAlterationModifiersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAlterationModifiersRowHandle CastToAlterationModifiersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAlterationModifiersEnum A, FAlterationModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAlterationModifiersRowHandleFAlterationModifiersRowHandle(FAlterationModifiersRowHandle RowHandleA, FAlterationModifiersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAlterationModifiersStruct(FAlterationModifiersRowHandle RowHandle, FAlterationModifiers& AlterationModifiers, EValid& Paths);  // parameters 0x69
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersRowHandle MakeAlterationModifiers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersEnum MakeAlterationModifiersEnum(FAlterationModifiersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersRowHandle MakeAlterationModifiersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersRowHandle MakeLiteralAlterationModifiers(FAlterationModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAlterationModifiersEnum A, FAlterationModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAlterationModifiersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAlterationModifiersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersEnum RowHandleToStruct(FAlterationModifiersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAlterationModifiersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAlterationModifiersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAlterationModifiersRowHandle StructToRowHandle(FAlterationModifiersEnum EnumValue);  // parameters 0x28
};
