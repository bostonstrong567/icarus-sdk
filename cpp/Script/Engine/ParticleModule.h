// /Script/Engine.ParticleModule
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleModule.h

UCLASS(Abstract, EditInlineNew)
class UParticleModule : public UObject
{
public:
    UPROPERTY() uint8 bSpawnModule : 1;  // 0x0028, mask 0x01
    UPROPERTY() uint8 bUpdateModule : 1;  // 0x0028, mask 0x02
    UPROPERTY() uint8 bFinalUpdateModule : 1;  // 0x0028, mask 0x04
    UPROPERTY() uint8 bUpdateForGPUEmitter : 1;  // 0x0028, mask 0x08
    UPROPERTY() uint8 bCurvesAsColor : 1;  // 0x0028, mask 0x10
    UPROPERTY(EditAnywhere) uint8 b3DDrawMode : 1;  // 0x0028, mask 0x20
    UPROPERTY() uint8 bSupported3DDrawMode : 1;  // 0x0028, mask 0x40
    UPROPERTY() uint8 bEnabled : 1;  // 0x0028, mask 0x80
    UPROPERTY() uint8 bEditable : 1;  // 0x0029, mask 0x01
    UPROPERTY() uint8 LODDuplicate : 1;  // 0x0029, mask 0x02
    UPROPERTY() uint8 bSupportsRandomSeed : 1;  // 0x0029, mask 0x04
    UPROPERTY() uint8 bRequiresLoopingNotification : 1;  // 0x0029, mask 0x08
    UPROPERTY() uint8 LODValidity;  // 0x002A, size 0x1

    // Virtual functions that start here:
    //   AddModuleCurvesToEditor, AutoPopulateInstanceProperties, CanTickInAnyThread, CompileModule
    //   ConvertFloatDistribution, ConvertVectorDistribution, EmitterLoopingNotify, FinalUpdate
    //   GenerateLODModule, GenerateLODModuleValues, GetCurveObjects, GetModuleType
    //   GetParticleParametersUtilized, GetParticleSysParamsUtilized, GetRandomSeedInfo, IsSizeMultiplyLife
    //   IsUsedInLODLevel, PrepPerInstanceBlock, PrepRandomSeedInstancePayload, RefreshModule
    //   Render3DPreview, RequiredBytes, RequiredBytesPerInstance, SetRandomSeedEntry, SetToSensibleDefaults
    //   Spawn, TouchesMeshRotation, Update, WillGeneratedModuleBeIdentical
};
