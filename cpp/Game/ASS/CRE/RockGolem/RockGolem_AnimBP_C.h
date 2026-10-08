// /Game/ASS/CRE/RockGolem/RockGolem_AnimBP.RockGolem_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1E9C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class URockGolem_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x03D8, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x03F8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x04E0, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0580, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0600, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0680, size 0x80
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0700, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0808, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0828, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0910, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x09B0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0A50, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0AF0, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0B90, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0C78, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0CA8, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_2;  // 0x0D58, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0DA0, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0EF8, size 0x28
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0F20, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4;  // 0x0F50, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;  // 0x0FA0, size 0x50
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_2;  // 0x0FF0, size 0x368
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1358, size 0xC8
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1420, size 0x368
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_1;  // 0x1788, size 0x38
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x17C0, size 0x48
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x1808, size 0x38
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x1840, size 0xD0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x1910, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x1960, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x19B0, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x1A50, size 0x50
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1AA0, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x1E08, size 0x48
    UPROPERTY() FVector __CustomProperty_Trace_Length_C35E54224EBEA525C4B649ADCFECA8CD;  // 0x1E50, size 0xC
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_C35E54224EBEA525C4B649ADCFECA8CD;  // 0x1E5C, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_C35E54224EBEA525C4B649ADCFECA8CD;  // 0x1E60, size 0x4
    UPROPERTY() FVector __CustomProperty_TargetLocation_9D2D9F834EBD44100F3FB6AAAA2ADFFD;  // 0x1E64, size 0xC
    UPROPERTY() FVector __CustomProperty_TargetLocation_52C36D65415B64D947EAF79744103C3F;  // 0x1E70, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRolling;  // 0x1E7C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectileTarget;  // 0x1E80, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUsingTongueAttack;  // 0x1E8C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x1E8D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x1E90, size 0xC, named "Trace Length"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_BlendListByBool_210EAC67425005C9723F20B35D2939A7();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_BlendListByBool_34A505EE49238048FA8FB793C10079B5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_BlendListByBool_774417454EF854A00FDD20BAE3EEC2A7();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_BlendListByBool_FD01227A43AA9B046455D2A81EB34380();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_BlendSpacePlayer_AE80F8A9441A35035500769D63E74F46();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_ControlRig_52C36D65415B64D947EAF79744103C3F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_ControlRig_9D2D9F834EBD44100F3FB6AAAA2ADFFD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolem_AnimBP_AnimGraphNode_ModifyBone_AF6CA1D14C7617098BAEA495FC2A0B59();
    UFUNCTION() void ExecuteUbergraph_RockGolem_AnimBP(int32 EntryPoint);  // parameters 0x4
};
