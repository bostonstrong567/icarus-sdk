// /Game/BP/Audio/Occlusion/BP_AudioOcclusionComponent.BP_AudioOcclusionComponent_C
// Derives from: UAudioOcclusionComponent > USceneComponent > UActorComponent > UObject
// size 0x281, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AudioOcclusionComponent_C : public UAudioOcclusionComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> TracePointOffsets;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool UseSkeletalMeshBounds;  // 0x0280, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<FAudioOcclusionTracePoint> GetTracePoints(const FVector& ListenerLocation);  // parameters 0x20
};
