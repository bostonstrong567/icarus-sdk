// /Script/DragonIKPlugin.AnimNode_DragonFabrikSolver
// size 0x160, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonFabrikSolver.h

USTRUCT()
struct FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase
{
public:
    UPROPERTY(EditAnywhere) FBoneReference StartSplineBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference EndSplineBone;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Precision;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxIterations;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Target_Transform;  // 0x00F0, size 0x30
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > FabrikBoneTransforms;  // 0x0120, not reflected
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > FabrikBoneTransforms_duplicate;  // 0x0130, not reflected
    USkeletalMeshComponent * owning_skel;  // 0x0140, not reflected
    bool first_start;  // 0x0148, not reflected
    FBoneContainer * SavedBoneContainer;  // 0x0150, not reflected
};
