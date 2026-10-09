// /Script/Icarus.QuestModifiersMultiRowHandleLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/QuestModifiers/QuestModifiersMultiRowHandleLibrary.h

UCLASS()
class UQuestModifiersMultiRowHandleLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Break(FQuestModifiersMultiRowHandle MultiRowHandle, EQuestModifiersTableType& OutEnum, FName& OutName);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_QuestModifiersMultiRowHandleFQuestEnemyModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle, FQuestEnemyModifiersRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_QuestModifiersMultiRowHandleFQuestVocalisationModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle, FQuestVocalisationModifiersRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_QuestModifiersMultiRowHandleFQuestWeatherModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle, FQuestWeatherModifiersRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_QuestModifiersMultiRowHandleQuestModifiersMultiRowHandle(FQuestModifiersMultiRowHandle A, FQuestModifiersMultiRowHandle B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestModifiersMultiRowHandle FromQuestEnemyModifiersRowHandle(FQuestEnemyModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestModifiersMultiRowHandle FromQuestVocalisationModifiersRowHandle(FQuestVocalisationModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestModifiersMultiRowHandle FromQuestWeatherModifiersRowHandle(FQuestWeatherModifiersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRowMetadata GetMetadata(FQuestModifiersMultiRowHandle MultiRowHandle);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) static void GetQuestEnemyModifiersStruct(FQuestModifiersMultiRowHandle MultiHandle, FQuestEnemyModifier& QuestEnemyModifiersStruct, EValid& Paths);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static void GetQuestVocalisationModifiersStruct(FQuestModifiersMultiRowHandle MultiHandle, FQuestVocalisationModifier& QuestVocalisationModifiersStruct, EValid& Paths);  // parameters 0x89
    UFUNCTION(BlueprintCallable) static void GetQuestWeatherModifiersStruct(FQuestModifiersMultiRowHandle MultiHandle, FQuestWeatherModifier& QuestWeatherModifiersStruct, EValid& Paths);  // parameters 0x59
    UFUNCTION() static uint8 GetTableIndexByName(FName TableName);  // parameters 0x9
    UFUNCTION() static FName GetTableNameByIndex(uint8 TableIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsNone(FQuestModifiersMultiRowHandle MultiRowHandle);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid(FQuestModifiersMultiRowHandle MultiRowHandle);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestModifiersMultiRowHandle Make(EQuestModifiersTableType Enum, FName RowName);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_QuestModifiersMultiRowHandleFQuestEnemyModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle, FQuestEnemyModifiersRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_QuestModifiersMultiRowHandleFQuestVocalisationModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle, FQuestVocalisationModifiersRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_QuestModifiersMultiRowHandleFQuestWeatherModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle, FQuestWeatherModifiersRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_QuestModifiersMultiRowHandleQuestModifiersMultiRowHandle(FQuestModifiersMultiRowHandle A, FQuestModifiersMultiRowHandle B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestEnemyModifiersRowHandle ToQuestEnemyModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestVocalisationModifiersRowHandle ToQuestVocalisationModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuestWeatherModifiersRowHandle ToQuestWeatherModifiersRowHandle(FQuestModifiersMultiRowHandle MultiHandle);  // parameters 0x30
};
