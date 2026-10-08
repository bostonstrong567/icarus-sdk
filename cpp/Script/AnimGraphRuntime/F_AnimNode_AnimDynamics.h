// /Script/AnimGraphRuntime.AnimNode_AnimDynamics
// size 0x440, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_AnimDynamics.h

USTRUCT()
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LinearDampingOverride;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AngularDampingOverride;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere) FBoneReference RelativeSpaceBone;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference BoundBone;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference ChainEnd;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere) FVector BoxExtents;  // 0x0160, size 0xC
    UPROPERTY(EditAnywhere) FVector LocalJointOffset;  // 0x016C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GravityScale;  // 0x0178, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GravityOverride;  // 0x017C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LinearSpringConstant;  // 0x0188, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AngularSpringConstant;  // 0x018C, size 0x4
    UPROPERTY(EditAnywhere) float WindScale;  // 0x0190, size 0x4
    UPROPERTY(EditAnywhere) FVector ComponentLinearAccScale;  // 0x0194, size 0xC
    UPROPERTY(EditAnywhere) FVector ComponentLinearVelScale;  // 0x01A0, size 0xC
    UPROPERTY(EditAnywhere) FVector ComponentAppliedLinearAccClamp;  // 0x01AC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AngularBiasOverride;  // 0x01B8, size 0x4
    UPROPERTY(EditAnywhere) int32 NumSolverIterationsPreUpdate;  // 0x01BC, size 0x4
    UPROPERTY(EditAnywhere) int32 NumSolverIterationsPostUpdate;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere) FAnimPhysConstraintSetup ConstraintSetup;  // 0x01C4, size 0x48
    UPROPERTY(EditAnywhere) TArray<FAnimPhysSphericalLimit> SphericalLimits;  // 0x0210, size 0x10
    UPROPERTY(EditAnywhere) float SphereCollisionRadius;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere) FVector ExternalForce;  // 0x0224, size 0xC
    UPROPERTY(EditAnywhere) TArray<FAnimPhysPlanarLimit> PlanarLimits;  // 0x0230, size 0x10
    UPROPERTY(EditAnywhere) AnimPhysCollisionType CollisionType;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AnimPhysSimSpaceType SimulationSpace;  // 0x0241, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseSphericalLimits : 1;  // 0x0244, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUsePlanarLimit : 1;  // 0x0244, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bDoUpdate : 1;  // 0x0244, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bDoEval : 1;  // 0x0244, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bOverrideLinearDamping : 1;  // 0x0244, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bOverrideAngularBias : 1;  // 0x0244, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bOverrideAngularDamping : 1;  // 0x0244, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bEnableWind : 1;  // 0x0244, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseGravityOverride : 1;  // 0x0245, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bLinearSpring : 1;  // 0x0245, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bAngularSpring : 1;  // 0x0245, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bChain : 1;  // 0x0245, mask 0x10
    UPROPERTY(EditAnywhere) FRotationRetargetingInfo RetargetingSettings;  // 0x0250, size 0x130

    // Not reflected:
    FTransform PreviousCompWorldSpaceTM;  // 0x00D0
    FTransform PreviousActorWorldSpaceTM;  // 0x0100
    AnimPhysSimSpaceType LastSimSpace;  // 0x0242
    ETeleportType InitTeleportType;  // 0x0243
    uint8 : 1 bWindWasEnabled;  // 0x0245
    float NextTimeStep;  // 0x0380
    float TimeDebt;  // 0x0384
    float AnimPhysicsMinDeltaTime;  // 0x0388
    float MaxPhysicsDeltaTime;  // 0x038C
    float MaxSubstepDeltaTime;  // 0x0390
    int32 MaxSubsteps;  // 0x0394
    TArray<FAnimPhysLinkedBody,TSizedDefaultAllocator<32> > Bodies;  // 0x0398
    TArray<FAnimPhysLinkedBody *,TSizedDefaultAllocator<32> > BodiesToReset;  // 0x03A8
    TArray<FAnimPhysRigidBody *,TSizedDefaultAllocator<32> > BaseBodyPtrs;  // 0x03B8
    TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32> > LinearLimits;  // 0x03C8
    TArray<FAnimPhysAngularLimit,TSizedDefaultAllocator<32> > AngularLimits;  // 0x03D8
    TArray<FAnimPhysSpring,TSizedDefaultAllocator<32> > Springs;  // 0x03E8
    TArray<FVector,TSizedDefaultAllocator<32> > JointOffsets;  // 0x03F8
    TArray<FBoneReference,TSizedDefaultAllocator<32> > BoundBoneReferences;  // 0x0408
    TArray<int,TSizedDefaultAllocator<32> > ActiveBoneIndices;  // 0x0418
    FVector SimSpaceGravityDirection;  // 0x0428
    FVector PreviousComponentLinearVelocity;  // 0x0434
};
