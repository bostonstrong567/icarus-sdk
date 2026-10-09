// /Script/AugmentedReality.ARObjectComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2B0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARObjectComponent : public UARComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARObjectUpdatePayload ReplicatedPayload;  // 0x0280, size 0x30
public:
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARObjectUpdatePayload& Payload);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARObjectUpdatePayload& Payload);  // parameters 0x30
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);  // parameters 0x30

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
