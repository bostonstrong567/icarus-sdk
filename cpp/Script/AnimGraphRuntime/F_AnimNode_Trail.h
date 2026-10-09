// /Script/AnimGraphRuntime.AnimNode_Trail
// size 0x260, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Trail.h

USTRUCT()
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
public:
    FTransform OldBaseTransform;  // 0x00D0, not reflected
    UPROPERTY(EditAnywhere) FBoneReference TrailBone;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere) int32 ChainLength;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> ChainBoneAxis;  // 0x0114, size 0x1
    uint8 : 1 bHadValidStrength;  // 0x0115, not reflected
    UPROPERTY(EditAnywhere) uint8 bInvertChainBoneAxis : 1;  // 0x0115, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bLimitStretch : 1;  // 0x0115, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bLimitRotation : 1;  // 0x0115, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bUsePlanarLimit : 1;  // 0x0115, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bActorSpaceFakeVel : 1;  // 0x0115, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bReorientParentToChild : 1;  // 0x0115, mask 0x20
    UPROPERTY(EditAnywhere) float MaxDeltaTime;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RelaxationSpeedScale;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve TrailRelaxationSpeed;  // 0x0120, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;  // 0x01A8, size 0x30
    UPROPERTY(EditAnywhere) TArray<FRotationLimit> RotationLimits;  // 0x01D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> RotationOffsets;  // 0x01E8, size 0x10
    UPROPERTY(EditAnywhere) TArray<FAnimPhysPlanarLimit> PlanarLimits;  // 0x01F8, size 0x10
    UPROPERTY(EditAnywhere) float StretchLimit;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere) FVector FakeVelocity;  // 0x020C, size 0xC
    UPROPERTY(EditAnywhere) FBoneReference BaseJoint;  // 0x0218, size 0x10
    UPROPERTY(EditAnywhere) float LastBoneRotationAnimAlphaBlend;  // 0x0228, size 0x4
    float ThisTimstep;  // 0x022C, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > TrailBoneLocations;  // 0x0230, not reflected
    TArray<FPerJointTrailSetup,TSizedDefaultAllocator<32> > PerJointTrailData;  // 0x0240, not reflected
private:
    TArray<int,TSizedDefaultAllocator<32> > ChainBoneIndices;  // 0x0250, not reflected
};
