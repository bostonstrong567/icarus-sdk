// /Script/Engine.AsyncActionHandleSaveGame
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/AsyncActionHandleSaveGame.h

UCLASS()
class UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnAsyncHandleSaveGame Completed;  // 0x0030, size 0x10
protected:
    UAsyncActionHandleSaveGame::ESaveGameOperation Operation;  // 0x0040, not reflected
    FString SlotName;  // 0x0048, not reflected
    int32 UserIndex;  // 0x0058, not reflected
    UPROPERTY() USaveGame* SaveGameObject;  // 0x0060, size 0x8
public:
    UFUNCTION(BlueprintCallable) static UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(UObject* WorldContextObject, FString SlotName, int32 UserIndex);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* SaveGameObject, FString SlotName, int32 UserIndex);  // parameters 0x30

    // Virtual functions that start here:
    //   ExecuteCompleted, HandleAsyncLoad, HandleAsyncSave
};
