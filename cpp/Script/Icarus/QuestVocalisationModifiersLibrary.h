// /Script/Icarus.QuestVocalisationModifiersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/QuestVocalisationModifiers/QuestVocalisationModifiersLibrary.h

UCLASS()
class UQuestVocalisationModifiersLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToQuestVocalisationModifiersTable(FName Name, FQuestVocalisationModifier Data, FQuestVocalisationModifiersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakQuestVocalisationModifiersEnum(FQuestVocalisationModifiersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FQuestVocalisationModifiersRowHandle CastToQuestVocalisationModifiersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FQuestVocalisationModifiersEnum A, FQuestVocalisationModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FQuestVocalisationModifiersRowHandleFQuestVocalisationModifiersRowHandle(FQuestVocalisationModifiersRowHandle RowHandleA, FQuestVocalisationModifiersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetQuestVocalisationModifiersStruct(FQuestVocalisationModifiersRowHandle RowHandle, FQuestVocalisationModifier& QuestVocalisationModifiers, EValid& Paths);  // parameters 0x89
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersRowHandle MakeLiteralQuestVocalisationModifiers(FQuestVocalisationModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersRowHandle MakeQuestVocalisationModifiers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersEnum MakeQuestVocalisationModifiersEnum(FQuestVocalisationModifiersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersRowHandle MakeQuestVocalisationModifiersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FQuestVocalisationModifiersEnum A, FQuestVocalisationModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FQuestVocalisationModifiersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromQuestVocalisationModifiersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersEnum RowHandleToStruct(FQuestVocalisationModifiersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FQuestVocalisationModifiersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FQuestVocalisationModifiersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersRowHandle StructToRowHandle(FQuestVocalisationModifiersEnum EnumValue);  // parameters 0x28
};
