// /Script/GeometryCollectionEngine.StaticMeshSimulationComponent
// Derives from: UActorComponent > UObject
// size 0x138, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/StaticMeshSimulationComponent.h

UCLASS(Config=Engine)
class UStaticMeshSimulationComponent : public UActorComponent, public IChaosNotifyHandlerInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Simulating;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNotifyCollisions;  // 0x00B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EObjectStateTypeEnum ObjectType;  // 0x00BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mass;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECollisionTypeEnum CollisionType;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EImplicitTypeEnum ImplicitType;  // 0x00C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinLevelSetResolution;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxLevelSetResolution;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInitialVelocityTypeEnum InitialVelocityType;  // 0x00CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialLinearVelocity;  // 0x00D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialAngularVelocity;  // 0x00DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageThreshold;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UChaosPhysicalMaterial* PhysicalMaterial;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere) AChaosSolverActor* ChaosSolverActor;  // 0x00F8, size 0x8
    UPROPERTY(BlueprintAssignable) FOnChaosPhysicsCollision OnChaosPhysicsCollision;  // 0x0100, size 0x10
    UPROPERTY() TArray<UPrimitiveComponent*> SimulatedComponents;  // 0x0120, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FStaticMeshPhysicsProxy *,TSizedDefaultAllocator<32> > PhysicsProxies;  // 0x0110, private
    TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial> > ChaosMaterial;  // 0x0130, private

    UFUNCTION(BlueprintCallable) void ForceRecreatePhysicsState();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);  // parameters 0x70
};
