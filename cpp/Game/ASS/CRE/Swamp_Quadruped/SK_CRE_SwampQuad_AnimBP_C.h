// /Game/ASS/CRE/Swamp_Quadruped/SK_CRE_SwampQuad_AnimBP.SK_CRE_SwampQuad_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1568, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_SwampQuad_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0408, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0430, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0458, size 0x28
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0480, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x04B0, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0530, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0618, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x06B8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x06D8, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x07E0, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0800, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0830, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x08B0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x08E0, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0960, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x09E0, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0A80, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0AA0, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0BA8, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0BC8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0BF8, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0CA8, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0CF0, size 0x158
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0E48, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x11B0, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x11D8, size 0x368
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_2CC658FC40873F2CE690CAA580114993;  // 0x1540, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_2CC658FC40873F2CE690CAA580114993;  // 0x154C, size 0x1
    UPROPERTY() FVector __CustomProperty_Trace_Length_8206271C482CBB9ED3BDC8B55E943567;  // 0x1550, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_8206271C482CBB9ED3BDC8B55E943567;  // 0x155C, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_8206271C482CBB9ED3BDC8B55E943567;  // 0x1560, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_8206271C482CBB9ED3BDC8B55E943567;  // 0x1564, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_SwampQuad_AnimBP_AnimGraphNode_BlendSpacePlayer_1BDF09934236B365E985F782DD79D6A1();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_SwampQuad_AnimBP_AnimGraphNode_TransitionResult_78CB0BEA4BC05EA5DBBC1F90C1101C83();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_SwampQuad_AnimBP_AnimGraphNode_TransitionResult_FFDDF19E4F287B968C17B1A0E441D5CF();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_SwampQuad_AnimBP(int32 EntryPoint);  // parameters 0x4
};
