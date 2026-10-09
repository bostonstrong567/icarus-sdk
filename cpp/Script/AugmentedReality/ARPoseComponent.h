// /Script/AugmentedReality.ARPoseComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2C0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARPoseComponent : public UARComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARPoseUpdatePayload ReplicatedPayload;  // 0x0280, size 0x40
public:
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARPoseUpdatePayload& Payload);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARPoseUpdatePayload& Payload);  // parameters 0x40
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
