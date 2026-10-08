// /Script/Engine.AsyncActionHandleSaveGame
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/AsyncActionHandleSaveGame.h

UCLASS()
class UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnAsyncHandleSaveGame Completed;  // 0x0030, size 0x10
    UPROPERTY() USaveGame* SaveGameObject;  // 0x0060, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    UAsyncActionHandleSaveGame::ESaveGameOperation Operation;  // 0x0040, protected
    FString SlotName;  // 0x0048, protected
    int32 UserIndex;  // 0x0058, protected

    UFUNCTION(BlueprintCallable) static UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(UObject* WorldContextObject, FString SlotName, int32 UserIndex);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* SaveGameObject, FString SlotName, int32 UserIndex);  // parameters 0x30

    // Virtual functions that start here:
    //   ExecuteCompleted, HandleAsyncLoad, HandleAsyncSave
};
