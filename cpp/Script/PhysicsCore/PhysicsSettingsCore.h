// /Script/PhysicsCore.PhysicsSettingsCore
// Derives from: UDeveloperSettings > UObject
// size 0xE0, declared in Engine/Source/Runtime/PhysicsCore/Public/PhysicsSettingsCore.h

UCLASS(Config=Engine)
class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) float DefaultGravityZ;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Config) float DefaultTerminalVelocity;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) float DefaultFluidFriction;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 SimulateScratchMemorySize;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 RagdollAggregateThreshold;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, Config) float TriangleMeshTriangleMinAreaThreshold;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bEnableShapeSharing;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnablePCM;  // 0x0051, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableStabilization;  // 0x0052, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bWarnMissingLocks;  // 0x0053, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnable2DPhysics;  // 0x0054, size 0x1
    UPROPERTY(Config, Deprecated) bool bDefaultHasComplexCollision;  // 0x0055, size 0x1
    UPROPERTY(EditAnywhere, Config) float BounceThresholdVelocity;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EFrictionCombineMode> FrictionCombineMode;  // 0x005C, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode;  // 0x005D, size 0x1
    UPROPERTY(EditAnywhere, Config) float MaxAngularVelocity;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config) float MaxDepenetrationVelocity;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, Config) float ContactOffsetMultiplier;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, Config) float MinContactOffset;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, Config) float MaxContactOffset;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bSimulateSkeletalMeshOnDedicatedServer;  // 0x0074, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity;  // 0x0075, size 0x1
    UPROPERTY(EditAnywhere, Config) FChaosSolverConfiguration SolverOptions;  // 0x0078, size 0x68
};
