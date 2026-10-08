// /Game/ASS/CRE/Needler/SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x176C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Needler_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0560, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05A8, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0700, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x07E8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x08D0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x09B8, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0AA0, size 0x80
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0B20, size 0xD0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0BF0, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0CC0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0D60, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0E00, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0E20, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0F28, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0F48, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0F78, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1028, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1390, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x13B8, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x13E0, size 0x368
    UPROPERTY() bool __CustomProperty_DoLookAt_BEEC1EC349E86EB9F7AC58A80D98A22A;  // 0x1748, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_BEEC1EC349E86EB9F7AC58A80D98A22A;  // 0x174C, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_Tail_29B5B1BB4351B438507913AF20ADBC96;  // 0x1758, size 0x4
    UPROPERTY() float __CustomProperty_Trace_Offset_29B5B1BB4351B438507913AF20ADBC96;  // 0x175C, size 0x4
    UPROPERTY() FVector __CustomProperty_Trace_Length_29B5B1BB4351B438507913AF20ADBC96;  // 0x1760, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendListByBool_FE64EEA948DB4AB4DF8FE6B2EF291CBB();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_3847537C4F400D2497D39C81CDFD767D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_B895153B44CFB891CE16919FE3884B06();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_ControlRig_BEEC1EC349E86EB9F7AC58A80D98A22A();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Needler_AnimBP(int32 EntryPoint);  // parameters 0x4
};
