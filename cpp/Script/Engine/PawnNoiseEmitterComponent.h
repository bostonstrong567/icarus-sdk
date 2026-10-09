// /Script/Engine.PawnNoiseEmitterComponent
// Derives from: UActorComponent > UObject
// size 0xD8, declared in Engine/Source/Runtime/Engine/Classes/Components/PawnNoiseEmitterComponent.h

UCLASS(Config=Engine)
class UPawnNoiseEmitterComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FVector LastRemoteNoisePosition;  // 0x00B4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NoiseLifetime;  // 0x00C0, size 0x4
protected:
    UPROPERTY(EditAnywhere) uint8 bAIPerceptionSystemCompatibilityMode : 1;  // 0x00B0, mask 0x01
private:
    UPROPERTY() float LastRemoteNoiseVolume;  // 0x00C4, size 0x4
    UPROPERTY() float LastRemoteNoiseTime;  // 0x00C8, size 0x4
    UPROPERTY() float LastLocalNoiseVolume;  // 0x00CC, size 0x4
    UPROPERTY() float LastLocalNoiseTime;  // 0x00D0, size 0x4
public:
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void MakeNoise(AActor* NoiseMaker, float Loudness, const FVector& NoiseLocation);  // parameters 0x18

    // Virtual functions that start here:
    //   MakeNoise
};
