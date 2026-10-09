// /Script/ChaosSolverEngine.ChaosDebugSubstepControl
// size 0x3, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosSolverActor.h

USTRUCT()
struct FChaosDebugSubstepControl
{
public:
    UPROPERTY(EditAnywhere) bool bPause;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bSubstep;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) bool bStep;  // 0x0002, size 0x1
};
