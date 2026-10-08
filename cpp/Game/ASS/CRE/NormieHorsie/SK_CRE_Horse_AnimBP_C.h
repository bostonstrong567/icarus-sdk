// /Game/ASS/CRE/NormieHorsie/SK_CRE_Horse_AnimBP.SK_CRE_Horse_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x160D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Horse_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0560, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0588, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05D0, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0728, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0810, size 0xA0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x08B0, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0980, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0A68, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0B50, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0BF0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0C10, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0D18, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0D38, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0E20, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0E50, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0F00, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0F28, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1290, size 0x368
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_63FE192F460FA96334FF9196A2C9EBEB;  // 0x15F8, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_63FE192F460FA96334FF9196A2C9EBEB;  // 0x15FC, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_63FE192F460FA96334FF9196A2C9EBEB;  // 0x1600, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_63FE192F460FA96334FF9196A2C9EBEB;  // 0x160C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Horse_AnimBP_AnimGraphNode_BlendListByBool_39AC631D411BA1A8F5D0479E23A87460();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Horse_AnimBP_AnimGraphNode_BlendSpacePlayer_0805F44E47CA6B9B676BD09C8F807FD4();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Horse_AnimBP_AnimGraphNode_BlendSpacePlayer_E3B0A64840675F6D6FEFA68E73BB66C6();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Horse_AnimBP(int32 EntryPoint);  // parameters 0x4
};
