// /Script/Engine.EmitterDynamicParameter
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Particles/Parameter/ParticleModuleParameterDynamic.h

USTRUCT()
struct FEmitterDynamicParameter
{
    UPROPERTY(EditAnywhere) FName ParamName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) uint8 bUseEmitterTime : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSpawnTimeOnly : 1;  // 0x0008, mask 0x02
    UPROPERTY(EditAnywhere) TEnumAsByte<EEmitterDynamicParameterValue> ValueMethod;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bScaleVelocityByParamValue : 1;  // 0x0010, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat ParamValue;  // 0x0018, size 0x30
};
