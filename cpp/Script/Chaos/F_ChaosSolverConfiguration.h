// /Script/Chaos.ChaosSolverConfiguration
// size 0x68, declared in Engine/Source/Runtime/Experimental/Chaos/Public/ChaosSolverConfiguration.h

USTRUCT()
struct FChaosSolverConfiguration
{
    UPROPERTY(EditAnywhere) int32 Iterations;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 CollisionPairIterations;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 PushOutIterations;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 CollisionPushOutPairIterations;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float CollisionMarginFraction;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float CollisionMarginMax;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float CollisionCullDistance;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) int32 JointPairIterations;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) int32 JointPushOutPairIterations;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float ClusterConnectionFactor;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) EClusterUnionMethod ClusterUnionConnectionType;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) bool bGenerateCollisionData;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere) FSolverCollisionFilterSettings CollisionFilterSettings;  // 0x002C, size 0x10
    UPROPERTY(EditAnywhere) bool bGenerateBreakData;  // 0x003C, size 0x1
    UPROPERTY(EditAnywhere) FSolverBreakingFilterSettings BreakingFilterSettings;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) bool bGenerateTrailingData;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) FSolverTrailingFilterSettings TrailingFilterSettings;  // 0x0054, size 0x10
    UPROPERTY(EditAnywhere) bool bGenerateContactGraph;  // 0x0064, size 0x1
};
