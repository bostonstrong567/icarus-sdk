// /Script/LevelSequence.LevelSequenceMediaController
// Derives from: AActor > UObject
// size 0x248, declared in Engine/Source/Runtime/LevelSequence/Public/SequenceMediaController.h

UCLASS(Config=Engine)
class ALevelSequenceMediaController : public AActor, public IMovieSceneCustomClockSource
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ALevelSequenceActor* Sequence;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UMediaComponent* MediaComponent;  // 0x0230, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) float ServerStartTimeSeconds;  // 0x0238, size 0x4
    double SequencePositionSeconds;  // 0x0240, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UMediaComponent* GetMediaComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) ALevelSequenceActor* GetSequence() const;  // parameters 0x8
    UFUNCTION() void OnRep_ServerStartTimeSeconds();
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void SynchronizeToServer(float DesyncThresholdSeconds);  // parameters 0x4
};
