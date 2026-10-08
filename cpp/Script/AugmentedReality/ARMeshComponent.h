// /Script/AugmentedReality.ARMeshComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2E0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARMeshComponent : public UARComponent
{
public:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARMeshUpdatePayload ReplicatedPayload;  // 0x0280, size 0x60

    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARMeshUpdatePayload& Payload);  // parameters 0x60
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARMeshUpdatePayload& Payload);  // parameters 0x60
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);  // parameters 0x60

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
