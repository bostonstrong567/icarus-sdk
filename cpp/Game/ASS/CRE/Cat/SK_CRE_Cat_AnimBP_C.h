// /Game/ASS/CRE/Cat/SK_CRE_Cat_AnimBP.SK_CRE_Cat_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1480, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Cat_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0408, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0450, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x05A8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0690, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0730, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x07D0, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x0850, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0870, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x0978, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0998, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0A80, size 0xE8
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x0B68, size 0xC8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0C30, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0C60, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0D10, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1078, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x10A0, size 0x368
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x1408, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1428, size 0x20
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_6719CCB04E35B4664FD77C9A92FF1458;  // 0x1448, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_6719CCB04E35B4664FD77C9A92FF1458;  // 0x144C, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_6719CCB04E35B4664FD77C9A92FF1458;  // 0x1450, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_6719CCB04E35B4664FD77C9A92FF1458;  // 0x145C, size 0x1
    UPROPERTY() float __CustomProperty_FeetCorrectionAlpha_E6046D24493292E9121C38B126E31634;  // 0x1460, size 0x4
    UPROPERTY() float __CustomProperty_Trace_Radius_E6046D24493292E9121C38B126E31634;  // 0x1464, size 0x4
    UPROPERTY() FVector __CustomProperty_Trace_Length_E6046D24493292E9121C38B126E31634;  // 0x1468, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_E6046D24493292E9121C38B126E31634;  // 0x1474, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_E6046D24493292E9121C38B126E31634;  // 0x1478, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_E6046D24493292E9121C38B126E31634;  // 0x147C, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Cat_AnimBP_AnimGraphNode_BlendListByBool_1D784E6E49AE1011AB7F75AE94D21F0A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Cat_AnimBP_AnimGraphNode_BlendSpacePlayer_178626BC4AC446ED7E4DFAAA76A0BE75();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Cat_AnimBP_AnimGraphNode_BlendSpacePlayer_8EBD5DC04CE59D36A48F7C96BCC10DC4();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Cat_AnimBP_AnimGraphNode_ControlRig_E6046D24493292E9121C38B126E31634();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Cat_AnimBP(int32 EntryPoint);  // parameters 0x4
};
