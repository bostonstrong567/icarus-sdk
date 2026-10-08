// /Script/Icarus.AudioOcclusionComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x270, declared in Icarus/Source/Icarus/Audio/Occlusion/AudioOcclusionComponent.h

UCLASS(Config=Engine)
class UAudioOcclusionComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere) bool bDebug;  // 0x01F8, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    float AverageOcclusion;  // 0x01FC, private
    TMap<FName const ,FAudioOcclusionTraceResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName const ,FAudioOcclusionTraceResult,0> > OcclusionTraceResults;  // 0x0200, private
    uint64 LastOcclusionUpdateFrame;  // 0x0250, private
    EAudioOcclusionMode CurrentOcclusionMode;  // 0x0258, private
    TArray<FAudioOcclusionTracePoint,TSizedDefaultAllocator<32> > SimpleTracePoint;  // 0x0260, private

    UFUNCTION(BlueprintNativeEvent) TArray<FAudioOcclusionTracePoint> GetTracePoints(const FVector& ListenerLocation);  // parameters 0x20

    // Virtual functions that start here:
    //   GetIgnoredActors, GetOcclusionValueFromHit, GetTraceChannel, GetTracePoints_Implementation
};
