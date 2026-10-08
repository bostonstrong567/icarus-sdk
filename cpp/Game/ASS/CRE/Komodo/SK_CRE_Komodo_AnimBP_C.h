// /Game/ASS/CRE/Komodo/SK_CRE_Komodo_AnimBP.SK_CRE_Komodo_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x13E0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Komodo_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x03D8, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0530, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0578, size 0x158
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x06D0, size 0x30
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0700, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0808, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0828, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x08F8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x09E0, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0AC8, size 0xD0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0B98, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0C18, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0CB8, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0D58, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0D78, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0E60, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0F48, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0F78, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1028, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1390, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x13B8, size 0x28

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Komodo_AnimBP_AnimGraphNode_BlendListByBool_243B221946901CDAE330CFB94CE70137();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Komodo_AnimBP_AnimGraphNode_BlendSpacePlayer_786A9DC54A03325A8416D4976DFAF5BA();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Komodo_AnimBP_AnimGraphNode_BlendSpacePlayer_A89924F54B40AF8A5B5E8E8CFACC66C0();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Komodo_AnimBP(int32 EntryPoint);  // parameters 0x4
};
