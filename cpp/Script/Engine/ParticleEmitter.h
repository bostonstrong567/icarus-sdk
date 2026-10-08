// /Script/Engine.ParticleEmitter
// Derives from: UObject
// size 0x1B8, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleEmitter.h

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UParticleEmitter : public UObject
{
public:
    UPROPERTY(EditAnywhere) FName EmitterName;  // 0x0028, size 0x8
    UPROPERTY(Transient) int32 SubUVDataOffset;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EEmitterRenderMode> EmitterRenderMode;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere) EParticleSignificanceLevel SignificanceLevel;  // 0x0035, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseLegacySpawningBehavior : 1;  // 0x0037, mask 0x01
    UPROPERTY() uint8 ConvertedModules : 1;  // 0x0037, mask 0x10
    UPROPERTY(Transient) uint8 bIsSoloing : 1;  // 0x0037, mask 0x20
    UPROPERTY() uint8 bCookedOut : 1;  // 0x0037, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bDisabledLODsKeepEmitterAlive : 1;  // 0x0037, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bDisableWhenInsignficant : 1;  // 0x0038, mask 0x01
    UPROPERTY() TArray<UParticleLODLevel*> LODLevels;  // 0x0040, size 0x10
    UPROPERTY() int32 PeakActiveParticles;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) int32 InitialAllocationCount;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) float QualityLevelSpawnRateScale;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) uint32 DetailModeBitmask;  // 0x005C, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TEnumAsByte<enum EParticleAxisLock> LockAxisFlags;  // 0x0036
    uint8 : 1 bRequiresLoopNotification;  // 0x0037
    uint8 : 1 bAxisLockEnabled;  // 0x0037
    uint8 : 1 bMeshRotationActive;  // 0x0037
    uint8 : 1 bRemoveHMDRollInVR;  // 0x0038
    TMap<UParticleModule *,unsigned int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule *,unsigned int,0> > ModuleOffsetMap;  // 0x0060
    TMap<UParticleModule *,unsigned int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule *,unsigned int,0> > ModuleInstanceOffsetMap;  // 0x00B0
    TMap<UParticleModule *,unsigned int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule *,unsigned int,0> > ModuleRandomSeedInstanceOffsetMap;  // 0x0100
    TArray<UMaterialInterface *,TSizedDefaultAllocator<32> > MeshMaterials;  // 0x0150
    int32 DynamicParameterDataOffset;  // 0x0160
    int32 LightDataOffset;  // 0x0164
    float LightVolumetricScatteringIntensity;  // 0x0168
    int32 CameraPayloadOffset;  // 0x016C
    int32 ParticleSize;  // 0x0170
    int32 ReqInstanceBytes;  // 0x0174
    FVector2D PivotOffset;  // 0x0178
    int32 TypeDataOffset;  // 0x0180
    int32 TypeDataInstanceOffset;  // 0x0184
    float MinFacingCameraBlendDistance;  // 0x0188
    float MaxFacingCameraBlendDistance;  // 0x018C
    TArray<UParticleModule *,TSizedDefaultAllocator<32> > ModulesNeedingInstanceData;  // 0x0190
    TArray<UParticleModule *,TSizedDefaultAllocator<32> > ModulesNeedingRandomSeedInstanceData;  // 0x01A0
    USubUVAnimation * SubUVAnimation;  // 0x01B0

    // Virtual functions that start here:
    //   AutogenerateLowestLODLevel, CalculateMaxActiveParticleCount, CreateInstance, SetLODCount
    //   SetToSensibleDefaults, UpdateModuleLists
};
