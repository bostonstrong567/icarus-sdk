// /Script/AugmentedReality.AREnvironmentProbeComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2B0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UAREnvironmentProbeComponent : public UARComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FAREnvironmentProbeUpdatePayload ReplicatedPayload;  // 0x0280, size 0x30
public:
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FAREnvironmentProbeUpdatePayload& Payload);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FAREnvironmentProbeUpdatePayload& Payload);  // parameters 0x30
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);  // parameters 0x30

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
