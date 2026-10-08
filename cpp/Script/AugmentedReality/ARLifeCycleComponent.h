// /Script/AugmentedReality.ARLifeCycleComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x230, declared in Engine/Source/Runtime/AugmentedReality/Public/ARLifeCycleComponent.h

UCLASS(Config=Engine)
class UARLifeCycleComponent : public USceneComponent
{
public:
    UPROPERTY(BlueprintAssignable) FInstanceARActorSpawnedDelegate OnARActorSpawnedDelegate;  // 0x01F8, size 0x10
    UPROPERTY(BlueprintAssignable) FInstanceARActorToBeDestroyedDelegate OnARActorToBeDestroyedDelegate;  // 0x0208, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FDelegateHandle SpawnDelegateHandle;  // 0x0218, private
    FDelegateHandle DestroyDelegateHandle;  // 0x0220, private

    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerDestroyARActor(AARActor* Actor);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSpawnARActor(TSubclassOf<UObject> ComponentClass, FGuid NativeID);  // parameters 0x18

    // Virtual functions that start here:
    //   ServerDestroyARActor_Implementation, ServerDestroyARActor_Validate
    //   ServerSpawnARActor_Implementation, ServerSpawnARActor_Validate
};
