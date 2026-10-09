// /Script/AugmentedReality.ARFaceComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2E0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARFaceComponent : public UARComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EARFaceTransformMixing TransformSetting;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUpdateVertexNormal;  // 0x0279, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFaceOutOfScreen;  // 0x027A, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARFaceUpdatePayload ReplicatedPayload;  // 0x0280, size 0x40
private:
    TArray<FAccumulatedNormal,TSizedDefaultAllocator<32> > AccumulatedNormals;  // 0x02C0, not reflected
    TArray<FPackedNormal,TSizedDefaultAllocator<32> > TangentData;  // 0x02D0, not reflected
public:
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARFaceUpdatePayload& Payload);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARFaceUpdatePayload& Payload);  // parameters 0x40
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
