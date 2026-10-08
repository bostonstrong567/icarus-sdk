// /Script/AugmentedReality.ARGeoAnchorComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2F0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARGeoAnchorComponent : public UARComponent
{
public:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARGeoAnchorUpdatePayload ReplicatedPayload;  // 0x0280, size 0x70

    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARGeoAnchorUpdatePayload& Payload);  // parameters 0x70
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARGeoAnchorUpdatePayload& Payload);  // parameters 0x70
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);  // parameters 0x70
    UFUNCTION(BlueprintCallable) static void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
