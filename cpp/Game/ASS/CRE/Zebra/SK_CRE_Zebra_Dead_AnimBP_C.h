// /Game/ASS/CRE/Zebra/SK_CRE_Zebra_Dead_AnimBP.SK_CRE_Zebra_Dead_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x92C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Zebra_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0328, size 0x80
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x03A8, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x03C8, size 0xA0
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0468, size 0x90
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x04F8, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0520, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0678, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x06A0, size 0xA0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0740, size 0x30
    UPROPERTY() FAnimNode_Fabrik AnimGraphNode_Fabrik;  // 0x0770, size 0x190
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0900, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FakeVelocity;  // 0x0920, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Zebra_Dead_AnimBP(int32 EntryPoint);  // parameters 0x4
};
