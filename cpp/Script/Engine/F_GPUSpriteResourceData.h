// /Script/Engine.GPUSpriteResourceData
// size 0x160, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h

USTRUCT()
struct FGPUSpriteResourceData
{
public:
    UPROPERTY() TArray<FColor> QuantizedColorSamples;  // 0x0000, size 0x10
    UPROPERTY() TArray<FColor> QuantizedMiscSamples;  // 0x0010, size 0x10
    UPROPERTY() TArray<FColor> QuantizedSimulationAttrSamples;  // 0x0020, size 0x10
    UPROPERTY() FVector4 ColorScale;  // 0x0030, size 0x10
    UPROPERTY() FVector4 ColorBias;  // 0x0040, size 0x10
    UPROPERTY() FVector4 MiscScale;  // 0x0050, size 0x10
    UPROPERTY() FVector4 MiscBias;  // 0x0060, size 0x10
    UPROPERTY() FVector4 SimulationAttrCurveScale;  // 0x0070, size 0x10
    UPROPERTY() FVector4 SimulationAttrCurveBias;  // 0x0080, size 0x10
    UPROPERTY() FVector4 SubImageSize;  // 0x0090, size 0x10
    UPROPERTY() FVector4 SizeBySpeed;  // 0x00A0, size 0x10
    UPROPERTY() FVector ConstantAcceleration;  // 0x00B0, size 0xC
    UPROPERTY() FVector OrbitOffsetBase;  // 0x00BC, size 0xC
    UPROPERTY() FVector OrbitOffsetRange;  // 0x00C8, size 0xC
    UPROPERTY() FVector OrbitFrequencyBase;  // 0x00D4, size 0xC
    UPROPERTY() FVector OrbitFrequencyRange;  // 0x00E0, size 0xC
    UPROPERTY() FVector OrbitPhaseBase;  // 0x00EC, size 0xC
    UPROPERTY() FVector OrbitPhaseRange;  // 0x00F8, size 0xC
    UPROPERTY() float GlobalVectorFieldScale;  // 0x0104, size 0x4
    UPROPERTY() float GlobalVectorFieldTightness;  // 0x0108, size 0x4
    UPROPERTY() float PerParticleVectorFieldScale;  // 0x010C, size 0x4
    UPROPERTY() float PerParticleVectorFieldBias;  // 0x0110, size 0x4
    UPROPERTY() float DragCoefficientScale;  // 0x0114, size 0x4
    UPROPERTY() float DragCoefficientBias;  // 0x0118, size 0x4
    UPROPERTY() float ResilienceScale;  // 0x011C, size 0x4
    UPROPERTY() float ResilienceBias;  // 0x0120, size 0x4
    UPROPERTY() float CollisionRadiusScale;  // 0x0124, size 0x4
    UPROPERTY() float CollisionRadiusBias;  // 0x0128, size 0x4
    UPROPERTY() float CollisionTimeBias;  // 0x012C, size 0x4
    UPROPERTY() float CollisionRandomSpread;  // 0x0130, size 0x4
    UPROPERTY() float CollisionRandomDistribution;  // 0x0134, size 0x4
    UPROPERTY() float OneMinusFriction;  // 0x0138, size 0x4
    UPROPERTY() float RotationRateScale;  // 0x013C, size 0x4
    UPROPERTY() float CameraMotionBlurAmount;  // 0x0140, size 0x4
    UPROPERTY() TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;  // 0x0144, size 0x1
    UPROPERTY() TEnumAsByte<EParticleAxisLock> LockAxisFlag;  // 0x0145, size 0x1
    UPROPERTY() FVector2D PivotOffset;  // 0x0148, size 0x8
    UPROPERTY() uint8 bRemoveHMDRoll : 1;  // 0x0150, mask 0x01
    UPROPERTY() float MinFacingCameraBlendDistance;  // 0x0154, size 0x4
    UPROPERTY() float MaxFacingCameraBlendDistance;  // 0x0158, size 0x4
};
