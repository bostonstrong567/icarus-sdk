// /Game/ASS/CRE/Ghost_Crocodile/SK_CRE_Ghost_Crocodile_AnimBP.SK_CRE_Ghost_Crocodile_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1F5D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Ghost_Crocodile_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0560, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05A8, size 0x158
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0700, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0780, size 0xA0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2;  // 0x0820, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;  // 0x08F0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x09D8, size 0xE8
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x0AC0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x0AE0, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x0BE8, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0C08, size 0xA0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_2;  // 0x0CA8, size 0x368
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x1010, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x10F8, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x11C8, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x12B0, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x1380, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1468, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1508, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x1528, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x1630, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1650, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1738, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1768, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1818, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1B80, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1BA8, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1BD0, size 0x368
    UPROPERTY() bool __CustomProperty_DoLookAt_166F92E1489527F81FC444AF5D9B5832;  // 0x1F38, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_166F92E1489527F81FC444AF5D9B5832;  // 0x1F3C, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_Tail_8E41E888498245DAC32359BEC9B9D7D5;  // 0x1F48, size 0x4
    UPROPERTY() float __CustomProperty_Trace_Offset_8E41E888498245DAC32359BEC9B9D7D5;  // 0x1F4C, size 0x4
    UPROPERTY() FVector __CustomProperty_Trace_Length_8E41E888498245DAC32359BEC9B9D7D5;  // 0x1F50, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSandSwimming;  // 0x1F5C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ghost_Crocodile_AnimBP_AnimGraphNode_BlendListByBool_4F3D782349DB352F3E0ACEA908E16A65();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ghost_Crocodile_AnimBP_AnimGraphNode_BlendSpacePlayer_806C68DD4C3781766AC9AB88DFA93429();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ghost_Crocodile_AnimBP_AnimGraphNode_BlendSpacePlayer_8D1A61194CC91BBD20AD67AB3BF842C4();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ghost_Crocodile_AnimBP_AnimGraphNode_BlendSpacePlayer_9E9D083E4269EC6BDB2E7FABD86E0828();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ghost_Crocodile_AnimBP_AnimGraphNode_ControlRig_166F92E1489527F81FC444AF5D9B5832();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ghost_Crocodile_AnimBP_AnimGraphNode_ControlRig_8E41E888498245DAC32359BEC9B9D7D5();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Ghost_Crocodile_AnimBP(int32 EntryPoint);  // parameters 0x4
};
