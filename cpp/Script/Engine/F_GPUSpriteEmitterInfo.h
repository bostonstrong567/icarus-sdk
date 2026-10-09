// /Script/Engine.GPUSpriteEmitterInfo
// size 0x280, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h

USTRUCT()
struct FGPUSpriteEmitterInfo
{
public:
    UPROPERTY() UParticleModuleRequired* RequiredModule;  // 0x0000, size 0x8
    UPROPERTY() UParticleModuleSpawn* SpawnModule;  // 0x0008, size 0x8
    UPROPERTY() UParticleModuleSpawnPerUnit* SpawnPerUnitModule;  // 0x0010, size 0x8
    UPROPERTY() TArray<UParticleModule*> SpawnModules;  // 0x0018, size 0x10
    UPROPERTY() FGPUSpriteLocalVectorFieldInfo LocalVectorField;  // 0x0030, size 0x70
    UPROPERTY() FFloatDistribution VectorFieldScale;  // 0x00A0, size 0x20
    UPROPERTY() FFloatDistribution DragCoefficient;  // 0x00C0, size 0x20
    UPROPERTY() FFloatDistribution PointAttractorStrength;  // 0x00E0, size 0x20
    UPROPERTY() FFloatDistribution Resilience;  // 0x0100, size 0x20
    UPROPERTY() FVector ConstantAcceleration;  // 0x0120, size 0xC
    UPROPERTY() FVector PointAttractorPosition;  // 0x012C, size 0xC
    UPROPERTY() float PointAttractorRadiusSq;  // 0x0138, size 0x4
    UPROPERTY() FVector OrbitOffsetBase;  // 0x013C, size 0xC
    UPROPERTY() FVector OrbitOffsetRange;  // 0x0148, size 0xC
    UPROPERTY() FVector2D InvMaxSize;  // 0x0154, size 0x8
    UPROPERTY() float InvRotationRateScale;  // 0x015C, size 0x4
    UPROPERTY() float MaxLifetime;  // 0x0160, size 0x4
    UPROPERTY() int32 MaxParticleCount;  // 0x0164, size 0x4
    UPROPERTY() TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;  // 0x0168, size 0x1
    UPROPERTY() TEnumAsByte<EParticleAxisLock> LockAxisFlag;  // 0x0169, size 0x1
    UPROPERTY() uint8 bEnableCollision : 1;  // 0x016C, mask 0x01
    UPROPERTY() TEnumAsByte<EParticleCollisionMode> CollisionMode;  // 0x0170, size 0x1
    UPROPERTY() uint8 bRemoveHMDRoll : 1;  // 0x0174, mask 0x01
    UPROPERTY() float MinFacingCameraBlendDistance;  // 0x0178, size 0x4
    UPROPERTY() float MaxFacingCameraBlendDistance;  // 0x017C, size 0x4
    UPROPERTY() FRawDistributionVector DynamicColor;  // 0x0180, size 0x48
    UPROPERTY() FRawDistributionFloat DynamicAlpha;  // 0x01C8, size 0x30
    UPROPERTY() FRawDistributionVector DynamicColorScale;  // 0x01F8, size 0x48
    UPROPERTY() FRawDistributionFloat DynamicAlphaScale;  // 0x0240, size 0x30
    FGPUSpriteResources * Resources;  // 0x0270, not reflected
};
