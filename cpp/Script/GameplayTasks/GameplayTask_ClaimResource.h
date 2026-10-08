// /Script/GameplayTasks.GameplayTask_ClaimResource
// Derives from: UGameplayTask > UObject
// size 0x68, declared in Engine/Source/Runtime/GameplayTasks/Classes/Tasks/GameplayTask_ClaimResource.h

UCLASS(Config=Game)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

    UFUNCTION(BlueprintCallable) static UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, TSubclassOf<UGameplayTaskResource> ResourceClass, uint8 Priority, FName TaskInstanceName);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, TArray<TSubclassOf<UGameplayTaskResource>> ResourceClasses, uint8 Priority, FName TaskInstanceName);  // parameters 0x38
};
