// /Script/AugmentedReality.ARFaceComponent
// Derives from: UARComponent > USceneComponent > UActorComponent > UObject
// size 0x2E0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Config=Engine)
class UARFaceComponent : public UARComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EARFaceTransformMixing TransformSetting;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUpdateVertexNormal;  // 0x0279, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFaceOutOfScreen;  // 0x027A, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FARFaceUpdatePayload ReplicatedPayload;  // 0x0280, size 0x40

    // Not reflected: the engine's scripting cannot see these.
    TArray<FAccumulatedNormal,TSizedDefaultAllocator<32> > AccumulatedNormals;  // 0x02C0, private
    TArray<FPackedNormal,TSizedDefaultAllocator<32> > TangentData;  // 0x02D0, private

    UFUNCTION(BlueprintImplementableEvent) void ReceiveAdd(const FARFaceUpdatePayload& Payload);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(const FARFaceUpdatePayload& Payload);  // parameters 0x40
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);  // parameters 0x1

    // Virtual functions that start here:
    //   ServerUpdatePayload_Implementation, ServerUpdatePayload_Validate
};
