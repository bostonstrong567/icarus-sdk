// /Script/ChaosSolverEngine.ChaosSolverActor
// Derives from: AActor > UObject
// size 0x318, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosSolverActor.h

UCLASS(Config=Engine)
class AChaosSolverActor : public AActor
{
public:
    UPROPERTY(EditAnywhere) FChaosSolverConfiguration Properties;  // 0x0220, size 0x68
    UPROPERTY(Deprecated) float TimeStepMultiplier;  // 0x0288, size 0x4
    UPROPERTY(Deprecated) int32 CollisionIterations;  // 0x028C, size 0x4
    UPROPERTY(Deprecated) int32 PushOutIterations;  // 0x0290, size 0x4
    UPROPERTY(Deprecated) int32 PushOutPairIterations;  // 0x0294, size 0x4
    UPROPERTY(Deprecated) float ClusterConnectionFactor;  // 0x0298, size 0x4
    UPROPERTY(Deprecated) EClusterConnectionTypeEnum ClusterUnionConnectionType;  // 0x029C, size 0x1
    UPROPERTY(Deprecated) bool DoGenerateCollisionData;  // 0x029D, size 0x1
    UPROPERTY(Deprecated) FSolverCollisionFilterSettings CollisionFilterSettings;  // 0x02A0, size 0x10
    UPROPERTY(Deprecated) bool DoGenerateBreakingData;  // 0x02B0, size 0x1
    UPROPERTY(Deprecated) FSolverBreakingFilterSettings BreakingFilterSettings;  // 0x02B4, size 0x10
    UPROPERTY(Deprecated) bool DoGenerateTrailingData;  // 0x02C4, size 0x1
    UPROPERTY(Deprecated) FSolverTrailingFilterSettings TrailingFilterSettings;  // 0x02C8, size 0x10
    UPROPERTY(Deprecated) float MassScale;  // 0x02D8, size 0x4
    UPROPERTY(Deprecated) bool bGenerateContactGraph;  // 0x02DC, size 0x1
    UPROPERTY(EditAnywhere) bool bHasFloor;  // 0x02DD, size 0x1
    UPROPERTY(EditAnywhere) float FloorHeight;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere) FChaosDebugSubstepControl ChaosDebugSubstepControl;  // 0x02E4, size 0x3
    UPROPERTY(Instanced) UBillboardComponent* SpriteComponent;  // 0x02E8, size 0x8
    UPROPERTY(Instanced) UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;  // 0x0308, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FPhysScene_Chaos,0> PhysScene;  // 0x02F0, private
    Chaos::FPBDRigidsSolver * Solver;  // 0x0300, private
    FSingleParticlePhysicsProxy * Proxy;  // 0x0310, private

    UFUNCTION(BlueprintCallable) void SetAsCurrentWorldSolver();
    UFUNCTION(BlueprintCallable) void SetSolverActive(bool bActive);  // parameters 0x1

    // Virtual functions that start here:
    //   SetSolverActive
};
