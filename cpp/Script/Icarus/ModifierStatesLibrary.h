// /Script/Icarus.ModifierStatesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ModifierStates/ModifierStatesLibrary.h

UCLASS()
class UModifierStatesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToModifierStatesTable(FName Name, FModifierStateData Data, FModifierStatesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x289
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakModifierStatesEnum(FModifierStatesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FModifierStatesRowHandle CastToModifierStatesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FModifierStatesEnum A, FModifierStatesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FModifierStatesRowHandleFModifierStatesRowHandle(FModifierStatesRowHandle RowHandleA, FModifierStatesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetModifierStatesStruct(FModifierStatesRowHandle RowHandle, FModifierStateData& ModifierStates, EValid& Paths);  // parameters 0x281
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesRowHandle MakeLiteralModifierStates(FModifierStatesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesRowHandle MakeModifierStates(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesEnum MakeModifierStatesEnum(FModifierStatesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesRowHandle MakeModifierStatesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FModifierStatesEnum A, FModifierStatesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FModifierStatesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromModifierStatesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesEnum RowHandleToStruct(FModifierStatesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FModifierStatesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FModifierStatesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FModifierStatesRowHandle StructToRowHandle(FModifierStatesEnum EnumValue);  // parameters 0x28
};
