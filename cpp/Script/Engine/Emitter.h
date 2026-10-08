// /Script/Engine.Emitter
// Derives from: AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/Particles/Emitter.h

UCLASS(Config=Engine)
class AEmitter : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UParticleSystemComponent* ParticleSystemComponent;  // 0x0220, size 0x8
    UPROPERTY() uint8 bDestroyOnSystemFinish : 1;  // 0x0228, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPostUpdateTickGroup : 1;  // 0x0228, mask 0x02
    UPROPERTY(Replicated, ReplicatedUsing) uint8 bCurrentlyActive : 1;  // 0x0228, mask 0x04
    UPROPERTY(BlueprintAssignable) FParticleSpawnSignature OnParticleSpawn;  // 0x0230, size 0x10
    UPROPERTY(BlueprintAssignable) FParticleBurstSignature OnParticleBurst;  // 0x0240, size 0x10
    UPROPERTY(BlueprintAssignable) FParticleDeathSignature OnParticleDeath;  // 0x0250, size 0x10
    UPROPERTY(BlueprintAssignable) FParticleCollisionSignature OnParticleCollide;  // 0x0260, size 0x10

    UFUNCTION(BlueprintCallable) void Activate();
    UFUNCTION(BlueprintCallable) void Deactivate();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActive() const;  // parameters 0x1
    UFUNCTION() void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);  // parameters 0x8
    UFUNCTION() void OnRep_bCurrentlyActive();
    UFUNCTION(BlueprintCallable) void SetActorParameter(FName ParameterName, AActor* Param);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetColorParameter(FName ParameterName, FLinearColor Param);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetFloatParameter(FName ParameterName, float Param);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTemplate(UParticleSystem* NewTemplate);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetVectorParameter(FName ParameterName, FVector Param);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void ToggleActive();

    // Virtual functions that start here:
    //   OnParticleSystemFinished, OnRep_bCurrentlyActive, SetTemplate
};
