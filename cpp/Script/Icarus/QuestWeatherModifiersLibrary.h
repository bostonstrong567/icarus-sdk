// /Script/Icarus.QuestWeatherModifiersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/QuestWeatherModifiers/QuestWeatherModifiersLibrary.h

UCLASS()
class UQuestWeatherModifiersLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToQuestWeatherModifiersTable(FName Name, FQuestWeatherModifier Data, FQuestWeatherModifiersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakQuestWeatherModifiersEnum(FQuestWeatherModifiersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FQuestWeatherModifiersRowHandle CastToQuestWeatherModifiersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FQuestWeatherModifiersEnum A, FQuestWeatherModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FQuestWeatherModifiersRowHandleFQuestWeatherModifiersRowHandle(FQuestWeatherModifiersRowHandle RowHandleA, FQuestWeatherModifiersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetQuestWeatherModifiersStruct(FQuestWeatherModifiersRowHandle RowHandle, FQuestWeatherModifier& QuestWeatherModifiers, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersRowHandle MakeLiteralQuestWeatherModifiers(FQuestWeatherModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersRowHandle MakeQuestWeatherModifiers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersEnum MakeQuestWeatherModifiersEnum(FQuestWeatherModifiersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersRowHandle MakeQuestWeatherModifiersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FQuestWeatherModifiersEnum A, FQuestWeatherModifiersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FQuestWeatherModifiersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromQuestWeatherModifiersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersEnum RowHandleToStruct(FQuestWeatherModifiersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FQuestWeatherModifiersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FQuestWeatherModifiersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersRowHandle StructToRowHandle(FQuestWeatherModifiersEnum EnumValue);  // parameters 0x28
};
