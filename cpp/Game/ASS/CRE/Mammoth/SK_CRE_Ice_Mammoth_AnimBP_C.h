// /Game/ASS/CRE/Mammoth/SK_CRE_Ice_Mammoth_AnimBP.SK_CRE_Ice_Mammoth_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x14B8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Ice_Mammoth_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x03D8, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0530, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0558, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05A0, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x06F8, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0720, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x07A0, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0840, size 0xE8
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x0928, size 0xC0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x09E8, size 0xE8
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x0AD0, size 0xC8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0B98, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0BC8, size 0xB0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0C78, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0CA8, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1010, size 0xA0
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x10B0, size 0x90
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1140, size 0x368
    UPROPERTY() bool __CustomProperty_DoLookAt_16381B81454BDDDE282478B629413400;  // 0x14A8, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_16381B81454BDDDE282478B629413400;  // 0x14AC, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ice_Mammoth_AnimBP_AnimGraphNode_BlendListByBool_57722A354A06DFC23DAFE79C171F445C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ice_Mammoth_AnimBP_AnimGraphNode_BlendSpacePlayer_30F2B4F24CD392782CAE7586170DC0FC();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Ice_Mammoth_AnimBP(int32 EntryPoint);  // parameters 0x4
};
