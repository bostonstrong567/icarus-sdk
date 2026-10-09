// /Script/Icarus.AudioOcclusionSocketTraceComponent
// Derives from: UAudioOcclusionComponent > USceneComponent > UActorComponent > UObject
// size 0x280, declared in Icarus/Source/Icarus/Audio/Occlusion/AudioOcclusionSocketTraceComponent.h

UCLASS(Config=Engine)
class UAudioOcclusionSocketTraceComponent : public UAudioOcclusionComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAudioOcclusionSocketTracePoint> TracePointDefinitions;  // 0x0270, size 0x10
public:
    UFUNCTION(BlueprintCallable) void SetTracePointTargets(USceneComponent* TargetComponent);  // parameters 0x8
};
