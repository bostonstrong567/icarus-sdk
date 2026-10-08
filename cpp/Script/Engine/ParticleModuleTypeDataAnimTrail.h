// /Script/Engine.ParticleModuleTypeDataAnimTrail
// Derives from: UParticleModuleTypeDataBase > UParticleModule > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
    UPROPERTY(EditAnywhere) uint8 bDeadTrailsOnDeactivate : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEnablePreviousTangentRecalculation : 1;  // 0x0030, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bTangentRecalculationEveryFrame : 1;  // 0x0030, mask 0x04
    UPROPERTY(EditAnywhere) float TilingDistance;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float DistanceTessellationStepSize;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float TangentTessellationStepSize;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float WidthTessellationStepSize;  // 0x0040, size 0x4
};
