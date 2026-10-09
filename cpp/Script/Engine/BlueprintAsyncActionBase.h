// /Script/Engine.BlueprintAsyncActionBase
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintAsyncActionBase.h

UCLASS()
class UBlueprintAsyncActionBase : public UObject
{
protected:
    TWeakObjectPtr<UGameInstance,FWeakObjectPtr> RegisteredWithGameInstance;  // 0x0028, not reflected
public:
    UFUNCTION(BlueprintCallable) void Activate();

    // Virtual functions that start here:
    //   Activate, RegisterWithGameInstance, SetReadyToDestroy
};
