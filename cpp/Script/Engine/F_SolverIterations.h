// /Script/Engine.SolverIterations
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h

USTRUCT()
struct FSolverIterations
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FixedTimeStep;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SolverIterations;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 JointIterations;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CollisionIterations;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SolverPushOutIterations;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 JointPushOutIterations;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CollisionPushOutIterations;  // 0x0018, size 0x4
};
