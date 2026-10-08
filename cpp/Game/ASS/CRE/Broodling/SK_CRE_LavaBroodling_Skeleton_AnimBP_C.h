// /Game/ASS/CRE/Broodling/SK_CRE_LavaBroodling_Skeleton_AnimBP.SK_CRE_LavaBroodling_Skeleton_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xFB8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_LavaBroodling_Skeleton_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0408, size 0x48
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0450, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0538, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x05B8, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0658, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0688, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0738, size 0x48
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x0780, size 0x38
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x07B8, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0888, size 0xE8
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x0970, size 0xC8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0A38, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0B90, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0BB8, size 0x28
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0BE0, size 0x50
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0C30, size 0x368
    UPROPERTY() FVector __CustomProperty_Trace_Length_3A75527840B6306C4B547A8E713036E1;  // 0x0F98, size 0xC
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_3A75527840B6306C4B547A8E713036E1;  // 0x0FA4, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_3A75527840B6306C4B547A8E713036E1;  // 0x0FA8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TraceLength;  // 0x0FAC, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_LavaBroodling_Skeleton_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_953C224A4CF68F65C5097FA65B5DC313();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_LavaBroodling_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_830329FB4EAC6309744372B055958495();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_LavaBroodling_Skeleton_AnimBP_AnimGraphNode_TwoWayBlend_C5C4264A446D901A06BD3E984683621D();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_LavaBroodling_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
