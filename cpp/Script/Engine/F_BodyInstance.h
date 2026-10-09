// /Script/Engine.BodyInstance
// size 0x158, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h

USTRUCT()
struct FBodyInstance : public FBodyInstanceCore
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    int32 InstanceBodyIndex;  // 0x0018, not reflected
    int16 InstanceBoneIndex;  // 0x001C, not reflected
    BodyInstanceSceneState CurrentSceneState;  // 0x0058, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESleepFamily SleepFamily;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EDOFMode> DOFMode;  // 0x005A, size 0x1
    uint8 : 1 bContactModification;  // 0x005B, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseCCD : 1;  // 0x005B, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIgnoreAnalyticCollisions : 1;  // 0x005B, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bNotifyRigidBodyCollision : 1;  // 0x005B, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bLockTranslation : 1;  // 0x005B, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bLockRotation : 1;  // 0x005B, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bLockXTranslation : 1;  // 0x005B, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bLockYTranslation : 1;  // 0x005B, mask 0x80
    uint8 : 1 bHACK_DisableCollisionResponse;  // 0x005C, not reflected
    uint8 : 1 bHACK_DisableSkelComponentFilterOverriding;  // 0x005C, not reflected
    UPROPERTY(EditAnywhere) uint8 bLockZTranslation : 1;  // 0x005C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bLockXRotation : 1;  // 0x005C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bLockYRotation : 1;  // 0x005C, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bLockZRotation : 1;  // 0x005C, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bOverrideMaxAngularVelocity : 1;  // 0x005C, mask 0x10
    FVector Scale3D;  // 0x0060, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 PositionSolverIterationCount;  // 0x0074, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 VelocitySolverIterationCount;  // 0x0075, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LinearDamping;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AngularDamping;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere) FVector CustomDOFPlaneNormal;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector COMNudge;  // 0x00CC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MassScale;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InertiaTensorScale;  // 0x00DC, size 0xC
    FConstraintInstance * DOFConstraint;  // 0x00E8, not reflected
    FBodyInstance * WeldParent;  // 0x00F0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxAngularVelocity;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CustomSleepThresholdMultiplier;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StabilizationThresholdMultiplier;  // 0x0118, size 0x4
    UPROPERTY() float PhysicsBlendWeight;  // 0x011C, size 0x4
    FPhysicsActorHandle_PhysX ActorHandle;  // 0x0120, not reflected
    TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> OwnerComponent;  // 0x0128, not reflected
    FPhysxUserData PhysicsUserData;  // 0x0138, not reflected
protected:
    UPROPERTY(EditAnywhere) uint8 bOverrideMaxDepenetrationVelocity : 1;  // 0x005C, mask 0x80
    uint8 : 1 bPendingCollisionProfileSetup;  // 0x005D, not reflected
    UPROPERTY(EditAnywhere) uint8 bOverrideWalkableSlopeOnInstance : 1;  // 0x005D, mask 0x01
    UPROPERTY() uint8 bInterpolateWhenSubStepping : 1;  // 0x005D, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxDepenetrationVelocity;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MassInKgOverride;  // 0x00AC, size 0x4
    TWeakObjectPtr<UBodySetup,FWeakObjectPtr> ExternalCollisionProfileBodySetup;  // 0x00B0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWalkableSlopeOverride WalkableSlopeOverride;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPhysicalMaterial* PhysMaterialOverride;  // 0x0108, size 0x8
private:
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionChannel> ObjectType;  // 0x001E, size 0x1
    uint8 MaskFilter;  // 0x001F, not reflected
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionEnabled> CollisionEnabled;  // 0x0020, size 0x1
    TOptional<TArray<TEnumAsByte<enum ECollisionEnabled::Type>,TSizedDefaultAllocator<32> > > ShapeCollisionEnabled;  // 0x0028, not reflected
    TOptional<TArray<TTuple<int,FCollisionResponse>,TSizedDefaultAllocator<32> > > ShapeCollisionResponses;  // 0x0040, not reflected
    UPROPERTY(EditAnywhere) FName CollisionProfileName;  // 0x006C, size 0x8
    UPROPERTY(EditAnywhere) FCollisionResponse CollisionResponses;  // 0x0078, size 0x30
    FBodyInstance::FBodyInstanceDelegatesPtr BodyInstanceDelegates;  // 0x0130, not reflected
    TSharedPtr<TMap<FPhysicsShapeHandle_PhysX,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeHandle_PhysX,FBodyInstance::FWeldInfo,0> >,0> ShapeToBodiesMap;  // 0x0148, not reflected
};
