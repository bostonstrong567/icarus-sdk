// /Game/ASS/CRE/Slinker/SK_CRE_Slinker_AnimBP.SK_CRE_Slinker_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x161D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Slinker_AnimBP_C : public UIcarusCreatureAnimInstance
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
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_08E23930452919C379D0CD86E7E82BBC;  // 0x15F8, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_08E23930452919C379D0CD86E7E82BBC;  // 0x15FC, size 0xC
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_08E23930452919C379D0CD86E7E82BBC;  // 0x1608, size 0x4
    UPROPERTY() bool __CustomProperty_DoLookAt_08E23930452919C379D0CD86E7E82BBC;  // 0x160C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x160D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x1610, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x161C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Slinker_AnimBP_AnimGraphNode_BlendListByBool_7656CF9E45448214759E35903F20AC83();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Slinker_AnimBP_AnimGraphNode_BlendSpacePlayer_1B2543284BE8846FF44C049C9B58D245();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Slinker_AnimBP_AnimGraphNode_BlendSpacePlayer_8C75603A49FDE0FB2FFD5E949762C7C0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Slinker_AnimBP_AnimGraphNode_ControlRig_08E23930452919C379D0CD86E7E82BBC();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Slinker_AnimBP(int32 EntryPoint);  // parameters 0x4
};
