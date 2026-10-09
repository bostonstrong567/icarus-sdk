// /Script/Icarus.OverlapAudioComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x230, declared in Icarus/Source/Icarus/Audio/OverlapAudioComponent.h

UCLASS(Config=Engine)
class UOverlapAudioComponent : public USceneComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInitializeManually;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoPlay;  // 0x0201, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseAttenuationOverride;  // 0x0202, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0208, size 0x4
private:
    UPROPERTY(Transient, Instanced) UFMODAudioComponent* AudioComponent;  // 0x0210, size 0x8
    UPROPERTY(Transient, Instanced) USphereComponent* Collider;  // 0x0218, size 0x8
    bool bCanPlay;  // 0x0220, not reflected
    bool bIsOverlapping;  // 0x0221, not reflected
    bool bIsSetToPlay;  // 0x0222, not reflected
public:
    UFUNCTION() void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Initialize();
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void Stop();
};
