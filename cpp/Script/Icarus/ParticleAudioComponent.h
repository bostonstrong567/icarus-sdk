// /Script/Icarus.ParticleAudioComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x240, declared in Icarus/Source/Icarus/Audio/ParticleAudioComponent.h

UCLASS(Config=Engine)
class UParticleAudioComponent : public USceneComponent, public INiagaraParticleCallbackHandler
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NiagaraVariableName;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ParticleCountThreshold;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ParticleAgeThreshold;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* OneShotSound;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* PersistentSound;  // 0x0218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseCountParameter;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseListenerRotation;  // 0x0221, size 0x1
    UPROPERTY(Instanced) UFMODAudioComponent* AudioComponent;  // 0x0228, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bIsAudioActive;  // 0x0222, private
    int32 CurrentParticleCount;  // 0x0224, private
    FTimerHandle TimeoutHandle;  // 0x0230, private
};
