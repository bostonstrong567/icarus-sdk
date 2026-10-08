// /Script/Engine.BlueprintAsyncActionBase
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintAsyncActionBase.h

UCLASS()
class UBlueprintAsyncActionBase : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UGameInstance,FWeakObjectPtr> RegisteredWithGameInstance;  // 0x0028, protected

    UFUNCTION(BlueprintCallable) void Activate();

    // Virtual functions that start here:
    //   Activate, RegisterWithGameInstance, SetReadyToDestroy
};
