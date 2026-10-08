// /Game/ASS/CRE/Raptor/Raptor_Dead_Rig_AnimBP.Raptor_Dead_Rig_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x3FD, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class URaptor_Dead_Rig_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0328, size 0x30
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0358, size 0x90
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x03E8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x03F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x03F5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PostureBlendTime;  // 0x03F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Attacking;  // 0x03FC, size 0x1, named "Is Attacking"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_Raptor_Dead_Rig_AnimBP(int32 EntryPoint);  // parameters 0x4
};
