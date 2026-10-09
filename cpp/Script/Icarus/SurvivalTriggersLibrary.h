// /Script/Icarus.SurvivalTriggersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/SurvivalTriggers/SurvivalTriggersLibrary.h

UCLASS()
class USurvivalTriggersLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToSurvivalTriggersTable(FName Name, FSurvivalTriggers Data, FSurvivalTriggersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xF1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSurvivalTriggersEnum(FSurvivalTriggersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FSurvivalTriggersRowHandle CastToSurvivalTriggersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FSurvivalTriggersEnum A, FSurvivalTriggersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FSurvivalTriggersRowHandleFSurvivalTriggersRowHandle(FSurvivalTriggersRowHandle RowHandleA, FSurvivalTriggersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSurvivalTriggersStruct(FSurvivalTriggersRowHandle RowHandle, FSurvivalTriggers& SurvivalTriggers, EValid& Paths);  // parameters 0xE9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersRowHandle MakeLiteralSurvivalTriggers(FSurvivalTriggersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersRowHandle MakeSurvivalTriggers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersEnum MakeSurvivalTriggersEnum(FSurvivalTriggersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersRowHandle MakeSurvivalTriggersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FSurvivalTriggersEnum A, FSurvivalTriggersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FSurvivalTriggersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromSurvivalTriggersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersEnum RowHandleToStruct(FSurvivalTriggersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FSurvivalTriggersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FSurvivalTriggersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSurvivalTriggersRowHandle StructToRowHandle(FSurvivalTriggersEnum EnumValue);  // parameters 0x28
};
