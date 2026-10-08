// /Script/AnimGraphRuntime.AnimNode_RigidBody
// size 0x830, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_RigidBody.h

USTRUCT()
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) UPhysicsAsset* OverridePhysicsAsset;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere) FVector OverrideWorldGravity;  // 0x0168, size 0xC
    UPROPERTY(EditAnywhere) FVector ExternalForce;  // 0x0174, size 0xC
    UPROPERTY(EditAnywhere) FVector ComponentLinearAccScale;  // 0x0180, size 0xC
    UPROPERTY(EditAnywhere) FVector ComponentLinearVelScale;  // 0x018C, size 0xC
    UPROPERTY(EditAnywhere) FVector ComponentAppliedLinearAccClamp;  // 0x0198, size 0xC
    UPROPERTY(EditAnywhere) FSimSpaceSettings SimSpaceSettings;  // 0x01A4, size 0x40
    UPROPERTY(EditAnywhere) float CachedBoundsScale;  // 0x01E4, size 0x4
    UPROPERTY(EditAnywhere) FBoneReference BaseBoneRef;  // 0x01E8, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionChannel> OverlapChannel;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere) ESimulationSpace SimulationSpace;  // 0x01F9, size 0x1
    UPROPERTY(EditAnywhere) bool bForceDisableCollisionBetweenConstraintBodies;  // 0x01FA, size 0x1
    UPROPERTY(EditAnywhere) uint8 bEnableWorldGeometry : 1;  // 0x01FC, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideWorldGravity : 1;  // 0x01FC, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bTransferBoneVelocities : 1;  // 0x01FC, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bFreezeIncomingPoseOnStart : 1;  // 0x01FC, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bClampLinearTranslationLimitToRefPose : 1;  // 0x01FC, mask 0x10
    UPROPERTY(EditAnywhere) float WorldSpaceMinimumScale;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere) float EvaluationResetTime;  // 0x0204, size 0x4

    // Not reflected:
    FTransform PreviousCompWorldSpaceTM;  // 0x00D0
    FTransform CurrentTransform;  // 0x0100
    FTransform PreviousTransform;  // 0x0130
    UPhysicsAsset * UsePhysicsAsset;  // 0x0160
    ETeleportType ResetSimulatedTeleportType;  // 0x01FB
    uint8 : 1 bEnabled;  // 0x0208
    uint8 : 1 bSimulationStarted;  // 0x0208
    uint8 : 1 bCheckForBodyTransformInit;  // 0x0208
    float WorldTimeSeconds;  // 0x020C
    float LastEvalTimeSeconds;  // 0x0210
    float AccumulatedDeltaTime;  // 0x0214
    float AnimPhysicsMinDeltaTime;  // 0x0218
    bool bSimulateAnimPhysicsAfterReset;  // 0x021C
    TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> SkelMeshCompWeakPtr;  // 0x0220
    ImmediatePhysics_PhysX::FSimulation * PhysicsSimulation;  // 0x0228
    FSolverIterations SolverIterations;  // 0x0230
    TArray<FAnimNode_RigidBody::FOutputBoneData,TSizedDefaultAllocator<32> > OutputBoneData;  // 0x0250
    TArray<ImmediatePhysics_PhysX::FActorHandle *,TSizedDefaultAllocator<32> > Bodies;  // 0x0260
    TArray<int,TSizedDefaultAllocator<32> > SkeletonBoneIndexToBodyIndex;  // 0x0270
    TArray<FAnimNode_RigidBody::FBodyAnimData,TSizedDefaultAllocator<32> > BodyAnimData;  // 0x0280
    TArray<FPhysicsConstraintHandle_PhysX *,TSizedDefaultAllocator<32> > Constraints;  // 0x0290
    TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32> > PendingRadialForces;  // 0x02A0
    FPerSolverFieldSystem PerSolverField;  // 0x02B0
    TMap<UPrimitiveComponent const *,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent const *,FAnimNode_RigidBody::FWorldObject,0> > ComponentsInSim;  // 0x0480
    int32 ComponentsInSimTick;  // 0x04D0
    FVector WorldSpaceGravity;  // 0x04D4
    float TotalMass;  // 0x04E0
    FSphere CachedBounds;  // 0x04E4
    FCollisionQueryParams QueryParams;  // 0x04F8
    FPhysScene_PhysX * PhysScene;  // 0x0568
    const UWorld * UnsafeWorld;  // 0x0570
    const AActor * UnsafeOwner;  // 0x0578
    FBoneContainer CapturedBoneVelocityBoneContainer;  // 0x0580
    FCSPose<FCompactHeapPose> CapturedBoneVelocityPose;  // 0x06D0
    FCSPose<FCompactHeapPose> CapturedFrozenPose;  // 0x0718
    FBlendedHeapCurve CapturedFrozenCurves;  // 0x0760
    FVector PreviousComponentLinearVelocity;  // 0x0790
    FTransform SimSpacePreviousComponentToWorld;  // 0x07A0
    FTransform SimSpacePreviousBoneToComponent;  // 0x07D0
    FVector SimSpacePreviousComponentLinearVelocity;  // 0x0800
    FVector SimSpacePreviousComponentAngularVelocity;  // 0x080C
    FVector SimSpacePreviousBoneLinearVelocity;  // 0x0818
    FVector SimSpacePreviousBoneAngularVelocity;  // 0x0824
};
