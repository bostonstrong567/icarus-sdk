// /Script/Engine.ChildActorComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Components/ChildActorComponent.h

UCLASS(Config=Engine)
class UChildActorComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AActor> ChildActorClass;  // 0x01F8, size 0x8
    UPROPERTY(Replicated, BlueprintReadOnly) AActor* ChildActor;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere) AActor* ChildActorTemplate;  // 0x0208, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FName ChildActorName;  // 0x0210, private
    UObject * ActorOuter;  // 0x0218, private
    FChildActorComponentInstanceData * CachedInstanceData;  // 0x0220, private
    uint8 : 1 bNeedsRecreate;  // 0x0228, private

    UFUNCTION(BlueprintCallable) void SetChildActorClass(TSubclassOf<AActor> InClass);  // parameters 0x8

    // Virtual functions that start here:
    //   CreateChildActor
};
