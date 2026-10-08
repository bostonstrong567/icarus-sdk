// /Script/Engine.ParticleLODLevel
// Derives from: UObject
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleLODLevel.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleLODLevel : public UObject
{
public:
    UPROPERTY() int32 Level;  // 0x0028, size 0x4
    UPROPERTY() uint8 bEnabled : 1;  // 0x002C, mask 0x01
    UPROPERTY(Instanced) UParticleModuleRequired* RequiredModule;  // 0x0030, size 0x8
    UPROPERTY() TArray<UParticleModule*> Modules;  // 0x0038, size 0x10
    UPROPERTY() UParticleModuleTypeDataBase* TypeDataModule;  // 0x0048, size 0x8
    UPROPERTY() UParticleModuleSpawn* SpawnModule;  // 0x0050, size 0x8
    UPROPERTY() UParticleModuleEventGenerator* EventGenerator;  // 0x0058, size 0x8
    UPROPERTY(Transient) TArray<UParticleModuleSpawnBase*> SpawningModules;  // 0x0060, size 0x10
    UPROPERTY(Transient) TArray<UParticleModule*> SpawnModules;  // 0x0070, size 0x10
    UPROPERTY(Transient) TArray<UParticleModule*> UpdateModules;  // 0x0080, size 0x10
    UPROPERTY(Transient) TArray<UParticleModuleOrbit*> OrbitModules;  // 0x0090, size 0x10
    UPROPERTY(Transient) TArray<UParticleModuleEventReceiverBase*> EventReceiverModules;  // 0x00A0, size 0x10
    UPROPERTY() uint8 ConvertedModules : 1;  // 0x00B0, mask 0x01
    UPROPERTY() int32 PeakActiveParticles;  // 0x00B4, size 0x4

    // Virtual functions that start here:
    //   CalculateMaxActiveParticleCount, GenerateFromLODLevel, SetLevelIndex, UpdateModuleLists
};
