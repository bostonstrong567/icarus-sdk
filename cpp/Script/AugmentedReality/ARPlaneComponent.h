// /Script/AugmentedReality.ARPlaneComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x300, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARPlaneComponent : public UARComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARPlaneUpdatePayload ReplicatedPayload;  // 0x0280, size 0x80
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();  // parameters 0x50
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARPlaneUpdatePayload& Payload);  // parameters 0x80
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARPlaneUpdatePayload& Payload);  // parameters 0x80
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);  // parameters 0x80
    UFUNCTION(BlueprintCallable) static void SetObjectClassificationDebugColors(const TMap<EARObjectClassification, FLinearColor>& InColors);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
