// /Script/Engine.ChildActorComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Components/ChildActorComponent.h

UCLASS(Config=Engine)
class UChildActorComponent : public USceneComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AActor> ChildActorClass;  // 0x01F8, size 0x8
    UPROPERTY(Replicated, BlueprintReadOnly) AActor* ChildActor;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere) AActor* ChildActorTemplate;  // 0x0208, size 0x8
    FName ChildActorName;  // 0x0210, not reflected
    UObject * ActorOuter;  // 0x0218, not reflected
    FChildActorComponentInstanceData * CachedInstanceData;  // 0x0220, not reflected
    uint8 : 1 bNeedsRecreate;  // 0x0228, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetChildActorClass(TSubclassOf<AActor> InClass);  // parameters 0x8

    // Virtual functions that start here:
    //   CreateChildActor
};
