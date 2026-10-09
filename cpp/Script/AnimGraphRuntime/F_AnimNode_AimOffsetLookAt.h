// /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
// size 0x1C0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_AimOffsetLookAt.h

USTRUCT()
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
public:
    FTransform SocketLocalTransform;  // 0x00F0, not reflected
    FTransform PivotSocketLocalTransform;  // 0x0120, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink BasePose;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODThreshold;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SourceSocketName;  // 0x0164, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName PivotSocketName;  // 0x016C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtLocation;  // 0x0174, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SocketAxis;  // 0x0180, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x018C, size 0x4
    FBoneReference SocketBoneReference;  // 0x0190, not reflected
    FBoneReference PivotSocketBoneReference;  // 0x01A0, not reflected
    bool bIsLODEnabled;  // 0x01B0, not reflected
};
