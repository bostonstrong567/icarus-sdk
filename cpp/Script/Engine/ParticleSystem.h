// /Script/Engine.ParticleSystem
// Derives from: UFXSystemAsset > UObject
// size 0x110, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystem.h

UCLASS(MinimalAPI)
class UParticleSystem : public UFXSystemAsset
{
public:
    UPROPERTY(EditAnywhere) float UpdateTime_FPS;  // 0x0030, size 0x4
    UPROPERTY() float UpdateTime_Delta;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float WarmupTime;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float WarmupTickRate;  // 0x003C, size 0x4
    UPROPERTY() TArray<UParticleEmitter*> Emitters;  // 0x0040, size 0x10
    UPROPERTY(Transient, Instanced) UParticleSystemComponent* PreviewComponent;  // 0x0050, size 0x8
    UPROPERTY() UInterpCurveEdSetup* CurveEdSetup;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) float LODDistanceCheckTime;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) float MacroUVRadius;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) TArray<float> LODDistances;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) TArray<FParticleSystemLOD> LODSettings;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) FBox FixedRelativeBoundingBox;  // 0x0088, size 0x1C
    UPROPERTY(EditAnywhere) float SecondsBeforeInactive;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere) float Delay;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere) float DelayLow;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere) uint8 bOrientZAxisTowardCamera : 1;  // 0x00B0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUseFixedRelativeBoundingBox : 1;  // 0x00B0, mask 0x02
    UPROPERTY() uint8 bShouldResetPeakCounts : 1;  // 0x00B0, mask 0x04
    UPROPERTY(Transient) uint8 bHasPhysics : 1;  // 0x00B0, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bUseRealtimeThumbnail : 1;  // 0x00B0, mask 0x10
    UPROPERTY() uint8 ThumbnailImageOutOfDate : 1;  // 0x00B0, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bUseDelayRange : 1;  // 0x00B1, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAllowManagedTicking : 1;  // 0x00B1, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAutoDeactivate : 1;  // 0x00B1, mask 0x04
    UPROPERTY() uint8 bRegenerateLODDuplicate : 1;  // 0x00B1, mask 0x08
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleSystemUpdateMode> SystemUpdateMode;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ParticleSystemLODMethod> LODMethod;  // 0x00B3, size 0x1
    UPROPERTY(EditAnywhere) EParticleSystemInsignificanceReaction InsignificantReaction;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleSystemOcclusionBoundsMethod> OcclusionBoundsMethod;  // 0x00B5, size 0x1
    UPROPERTY(EditAnywhere) EParticleSignificanceLevel MaxSignificanceLevel;  // 0x00B7, size 0x1
    UPROPERTY(EditAnywhere) uint32 MinTimeBetweenTicks;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere) float InsignificanceDelay;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere) FVector MacroUVPosition;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere) FBox CustomOcclusionBounds;  // 0x00CC, size 0x1C
    UPROPERTY(Transient) TArray<FLODSoloTrack> SoloTracking;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNamedEmitterMaterial> NamedMaterialSlots;  // 0x00F8, size 0x10
private:
    uint8 : 1 bIsElligibleForAsyncTick;  // 0x00B0, not reflected
    uint8 : 1 bIsElligibleForAsyncTickComputed;  // 0x00B0, not reflected
    uint8 : 1 bAnyEmitterLoopsForever;  // 0x00B6, not reflected
    EParticleSignificanceLevel HighestSignificance;  // 0x0108, not reflected
    EParticleSignificanceLevel LowestSignificance;  // 0x0109, not reflected
    uint8 : 1 bIsImmortal;  // 0x010A, not reflected
    uint8 : 1 bShouldManageSignificance;  // 0x010A, not reflected
    uint8 : 1 bWillBecomeZombie;  // 0x010A, not reflected
public:
    UFUNCTION(BlueprintCallable) bool ContainsEmitterType(TSubclassOf<UObject> TypeData);  // parameters 0x9

    // Virtual functions that start here:
    //   CalculateMaxActiveParticleCounts, GetCurrentLODMethod, GetLODDistance, GetLODLevelCount
    //   SetCurrentLODMethod, SetLODDistance
};
