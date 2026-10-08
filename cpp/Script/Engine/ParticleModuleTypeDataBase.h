// /Script/Engine.ParticleModuleTypeDataBase
// Derives from: UParticleModule > UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

    // Virtual functions that start here:
    //   Build, CacheModuleInfo, CreateInstance, IsAMeshEmitter, IsMotionBlurEnabled, RequiresBuild
    //   SupportsSpecificScreenAlignmentFlags, SupportsSubUV
};
