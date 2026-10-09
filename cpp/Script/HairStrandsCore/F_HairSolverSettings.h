// /Script/HairStrandsCore.HairSolverSettings
// size 0x38, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairSolverSettings
{
public:
    UPROPERTY(EditAnywhere) bool EnableSimulation;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) EGroomNiagaraSolvers NiagaraSolver;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UNiagaraSystem> CustomSystem;  // 0x0008, size 0x28
    UPROPERTY(EditAnywhere) int32 SubSteps;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) int32 IterationCount;  // 0x0034, size 0x4
};
