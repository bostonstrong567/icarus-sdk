// /Script/AnimGraphRuntime.AnimNode_PoseDriver
// size 0x168, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseDriver.h

USTRUCT()
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink SourcePose;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBoneReference> SourceBones;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBoneReference> OnlyDriveBones;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) TArray<FPoseDriverTarget> PoseTargets;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference EvalSpaceBone;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRBFParams RBFParams;  // 0x0100, size 0x2C
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPoseDriverSource DriveSource;  // 0x012C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPoseDriverOutput DriveOutput;  // 0x012D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOnlyDriveSelectedBones : 1;  // 0x012E, mask 0x01
    UPROPERTY(EditAnywhere) int32 LODThreshold;  // 0x0130, size 0x4

    // Not reflected:
    TArray<FRBFOutputWeight,TSizedDefaultAllocator<32> > OutputWeights;  // 0x00C0
    TArray<FTransform,TSizedDefaultAllocator<32> > SourceBoneTMs;  // 0x00D0
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > BonesToFilter;  // 0x00E0
    uint8 : 1 bCachedDrivenIDsAreDirty;  // 0x012E
    TSharedPtr<FRBFSolverData const ,0> SolverData;  // 0x0138
    FRBFEntry RBFInput;  // 0x0148
    TArray<FRBFTarget,TSizedDefaultAllocator<32> > RBFTargets;  // 0x0158
};
