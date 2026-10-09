// /Script/AugmentedReality.ARImageComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2E0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARImageComponent : public UARComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARImageUpdatePayload ReplicatedPayload;  // 0x0280, size 0x60
public:
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARImageUpdatePayload& Payload);  // parameters 0x60
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARImageUpdatePayload& Payload);  // parameters 0x60
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARImageUpdatePayload NewPayload);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
