// /Script/AugmentedReality.ARPointComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x280, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARPointComponent : public UARComponent
{
public:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARPointUpdatePayload ReplicatedPayload;  // 0x0278, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARPointUpdatePayload& Payload);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARPointUpdatePayload& Payload);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARPointUpdatePayload NewPayload);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
