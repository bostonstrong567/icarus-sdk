// /Script/AugmentedReality.ARQRCodeComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2F0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARQRCodeComponent : public UARComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARQRCodeUpdatePayload ReplicatedPayload;  // 0x0280, size 0x70
public:
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARQRCodeUpdatePayload& Payload);  // parameters 0x70
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARQRCodeUpdatePayload& Payload);  // parameters 0x70
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);  // parameters 0x70
    UFUNCTION(BlueprintCallable) static void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
