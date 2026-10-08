// /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
// size 0x90, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseSnapshot.h

USTRUCT()
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SnapshotName;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot Snapshot;  // 0x0018, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESnapshotSourceMode Mode;  // 0x0050, size 0x1

    // Not reflected:
    TArray<int,TSizedDefaultAllocator<32> > SourceBoneMapping;  // 0x0058
    TArray<FName,TSizedDefaultAllocator<32> > TargetBoneNames;  // 0x0068
    FName MappedSourceMeshName;  // 0x0078
    FName MappedTargetMeshName;  // 0x0080
    FName TargetBoneNameMesh;  // 0x0088
};
