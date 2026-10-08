// /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Derives from: UActorComponent > UObject
// size 0x138, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/SkeletalMeshSimulationComponent.h

UCLASS(Config=Engine)
class USkeletalMeshSimulationComponent : public UActorComponent, public IChaosNotifyHandlerInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UChaosPhysicalMaterial* PhysicalMaterial;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) AChaosSolverActor* ChaosSolverActor;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere) UPhysicsAsset* OverridePhysicsAsset;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSimulating;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNotifyCollisions;  // 0x00D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EObjectStateTypeEnum ObjectType;  // 0x00D2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Density;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinMass;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxMass;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECollisionTypeEnum CollisionType;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImplicitShapeParticlesPerUnitArea;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ImplicitShapeMinNumParticles;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ImplicitShapeMaxNumParticles;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinLevelSetResolution;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxLevelSetResolution;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CollisionGroup;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInitialVelocityTypeEnum InitialVelocityType;  // 0x00FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialLinearVelocity;  // 0x0100, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialAngularVelocity;  // 0x010C, size 0xC
    UPROPERTY(BlueprintAssignable) FOnChaosPhysicsCollision OnChaosPhysicsCollision;  // 0x0118, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FSkeletalMeshPhysicsProxy * PhysicsProxy;  // 0x0128, private
    TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial> > ChaosMaterial;  // 0x0130, private

    UFUNCTION(BlueprintImplementableEvent) void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);  // parameters 0x70
};
