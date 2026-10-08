// /Game/ASS/CHA/Head/SK_CHA_head_CopyPose_AnimBP.SK_CHA_head_CopyPose_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x701, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CHA_head_CopyPose_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x02F8, size 0x80
    UPROPERTY() FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;  // 0x0378, size 0x1D8
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x0550, size 0xC0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0610, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x06B0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x0700, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_CHA_head_CopyPose_AnimBP(int32 EntryPoint);  // parameters 0x4
};
