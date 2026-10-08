// /Game/ASS/CRE/BatDog/SK_CRE_Batdog_Corpse_AnimBP.SK_CRE_Batdog_Corpse_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x784, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Batdog_Corpse_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0328, size 0x30
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0358, size 0x90
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x03E8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0488, size 0x80
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0508, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0660, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0688, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0728, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FakeVelocity;  // 0x0778, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Batdog_Corpse_AnimBP(int32 EntryPoint);  // parameters 0x4
};
