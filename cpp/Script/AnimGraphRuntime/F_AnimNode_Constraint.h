// /Script/AnimGraphRuntime.AnimNode_Constraint
// size 0x108, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Constraint.h

USTRUCT()
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere) FBoneReference BoneToModify;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) TArray<FConstraint> ConstraintSetup;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere) TArray<float> ConstraintWeights;  // 0x00E8, size 0x10
private:
    TArray<FConstraintData,TSizedDefaultAllocator<32> > ConstraintData;  // 0x00F8, not reflected
};
