// /Script/Engine.ParticleModuleRequired
// Derives from: UParticleModule > UObject
// size 0x140, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleModuleRequired.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRequired : public UParticleModule
{
public:
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) float MinFacingCameraBlendDistance;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float MaxFacingCameraBlendDistance;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) FVector EmitterOrigin;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere) FRotator EmitterRotation;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseLocalSpace : 1;  // 0x0059, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bKillOnDeactivate : 1;  // 0x0059, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bKillOnCompleted : 1;  // 0x0059, mask 0x04
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleSortMode> SortMode;  // 0x005A, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseLegacyEmitterTime : 1;  // 0x005B, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bRemoveHMDRoll : 1;  // 0x005B, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bEmitterDurationUseRange : 1;  // 0x005B, mask 0x04
    UPROPERTY(EditAnywhere) float EmitterDuration;  // 0x005C, size 0x4
    UPROPERTY() FRawDistributionFloat SpawnRate;  // 0x0060, size 0x30
    UPROPERTY() TArray<FParticleBurst> BurstList;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) float EmitterDelay;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) float EmitterDelayLow;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere) uint8 bDelayFirstLoopOnly : 1;  // 0x00A8, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleSubUVInterpMethod> InterpolationMethod;  // 0x00A9, size 0x1
    UPROPERTY(EditAnywhere) uint8 bScaleUV : 1;  // 0x00AA, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEmitterDelayUseRange : 1;  // 0x00AA, mask 0x02
    UPROPERTY() TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;  // 0x00AB, size 0x1
    UPROPERTY(EditAnywhere) uint8 bOverrideSystemMacroUV : 1;  // 0x00AC, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUseMaxDrawCount : 1;  // 0x00AC, mask 0x02
    UPROPERTY(EditAnywhere) TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;  // 0x00AD, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEmitterNormalsMode> EmitterNormalsMode;  // 0x00AE, size 0x1
    UPROPERTY(EditAnywhere) uint8 bOrbitModuleAffectsVelocityAlignment : 1;  // 0x00AF, mask 0x01
    UPROPERTY(EditAnywhere) int32 SubImages_Horizontal;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) int32 SubImages_Vertical;  // 0x00B4, size 0x4
    UPROPERTY() float RandomImageTime;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere) int32 RandomImageChanges;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere) FVector MacroUVPosition;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere) float MacroUVRadius;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere) EParticleUVFlipMode UVFlippingMode;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;  // 0x00D1, size 0x1
    UPROPERTY(EditAnywhere) uint8 bDurationRecalcEachLoop : 1;  // 0x00D2, mask 0x01
    UPROPERTY(EditAnywhere) FVector NormalsSphereCenter;  // 0x00D4, size 0xC
    UPROPERTY(EditAnywhere) float AlphaThreshold;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere) int32 EmitterLoops;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere) UTexture2D* CutoutTexture;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere) int32 MaxDrawCount;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere) float EmitterDurationLow;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere) FVector NormalsCylinderDirection;  // 0x00F8, size 0xC
    UPROPERTY(EditAnywhere) TArray<FName> NamedMaterialOverrides;  // 0x0108, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FSubUVDerivedData DerivedData;  // 0x0118, private
    FRenderCommandFence ReleaseFence;  // 0x0128, private
    FSubUVBoundingGeometryBuffer * BoundingGeometryBuffer;  // 0x0138, private
};
