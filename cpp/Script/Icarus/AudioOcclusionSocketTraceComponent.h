// /Script/Icarus.AudioOcclusionSocketTraceComponent
// Derives from: UAudioOcclusionComponent > USceneComponent > UActorComponent > UObject
// size 0x280, declared in Icarus/Source/Icarus/Audio/Occlusion/AudioOcclusionSocketTraceComponent.h

UCLASS(Config=Engine)
class UAudioOcclusionSocketTraceComponent : public UAudioOcclusionComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAudioOcclusionSocketTracePoint> TracePointDefinitions;  // 0x0270, size 0x10

    UFUNCTION(BlueprintCallable) void SetTracePointTargets(USceneComponent* TargetComponent);  // parameters 0x8
};
