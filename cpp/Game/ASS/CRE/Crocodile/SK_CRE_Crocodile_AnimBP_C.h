// /Game/ASS/CRE/Crocodile/SK_CRE_Crocodile_AnimBP.SK_CRE_Crocodile_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x176C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Crocodile_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x03D8, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0530, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0578, size 0x158
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x06D0, size 0x30
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0700, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x07D0, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x08B8, size 0xD0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0988, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0A08, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0AA8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0B90, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0C30, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0C50, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0D58, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0D78, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0E60, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0F48, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0F78, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1028, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1390, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x13B8, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x13E0, size 0x368
    UPROPERTY() bool __CustomProperty_DoLookAt_1769DB39478F4CA44B006F902A0DDFAB;  // 0x1748, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_1769DB39478F4CA44B006F902A0DDFAB;  // 0x174C, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_Tail_B586B4CF4F2807126577D7A489DDD407;  // 0x1758, size 0x4
    UPROPERTY() float __CustomProperty_Trace_Offset_B586B4CF4F2807126577D7A489DDD407;  // 0x175C, size 0x4
    UPROPERTY() FVector __CustomProperty_Trace_Length_B586B4CF4F2807126577D7A489DDD407;  // 0x1760, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Crocodile_AnimBP_AnimGraphNode_BlendListByBool_A2B5720F4BD1749015E7FDBDB67094CE();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Crocodile_AnimBP_AnimGraphNode_BlendSpacePlayer_A313E18A48BD3F64B3B4A78D95A86A05();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Crocodile_AnimBP_AnimGraphNode_BlendSpacePlayer_E0DF2F7A4C3E23D52FD172B4479C5E4C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Crocodile_AnimBP_AnimGraphNode_ControlRig_1769DB39478F4CA44B006F902A0DDFAB();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Crocodile_AnimBP(int32 EntryPoint);  // parameters 0x4
};
