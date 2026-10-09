// /Script/Icarus.QuestEnemyModifiersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/QuestEnemyModifiers/QuestEnemyModifiersLibrary.h

UCLASS()
class UQuestEnemyModifiersLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToQuestEnemyModifiersTable(FName Name, FQuestEnemyModifier Data, FQuestEnemyModifiersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakQuestEnemyModifiersEnum(FQuestEnemyModifiersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FQuestEnemyModifiersRowHandle CastToQuestEnemyModifiersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FQuestEnemyModifiersEnum A, FQuestEnemyModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FQuestEnemyModifiersRowHandleFQuestEnemyModifiersRowHandle(FQuestEnemyModifiersRowHandle RowHandleA, FQuestEnemyModifiersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetQuestEnemyModifiersStruct(FQuestEnemyModifiersRowHandle RowHandle, FQuestEnemyModifier& QuestEnemyModifiers, EValid& Paths);  // parameters 0x79
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersRowHandle MakeLiteralQuestEnemyModifiers(FQuestEnemyModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersRowHandle MakeQuestEnemyModifiers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersEnum MakeQuestEnemyModifiersEnum(FQuestEnemyModifiersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersRowHandle MakeQuestEnemyModifiersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FQuestEnemyModifiersEnum A, FQuestEnemyModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FQuestEnemyModifiersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromQuestEnemyModifiersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersEnum RowHandleToStruct(FQuestEnemyModifiersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FQuestEnemyModifiersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FQuestEnemyModifiersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersRowHandle StructToRowHandle(FQuestEnemyModifiersEnum EnumValue);  // parameters 0x28
};
