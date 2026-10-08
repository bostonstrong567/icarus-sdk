// /Game/ASS/CRE/Spider/SK_CRE_Spider_AnimBP.SK_CRE_Spider_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x14F7, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Spider_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x03D8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x04C0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x05A8, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0690, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0760, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0800, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x08E8, size 0xE8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x09D0, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0AD8, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0AF8, size 0xD0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0BC8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0C48, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0CE8, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0D88, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0DA8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0DD8, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0E88, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0ED0, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1028, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1050, size 0x368
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x13B8, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x13E8, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1438, size 0xA0
    UPROPERTY() bool __CustomProperty_DoLookAt_7E6C65914DAF2CB2BDECA29FAFB202C2;  // 0x14D8, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_7E6C65914DAF2CB2BDECA29FAFB202C2;  // 0x14DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x14E8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x14F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x14F5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x14F6, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Spider_AnimBP_AnimGraphNode_BlendListByBool_4594A7C14934DCFCB2DFD5A033AA4A39();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Spider_AnimBP_AnimGraphNode_BlendSpacePlayer_1186E5CA4E2F7C3099A39D89B43DF8EB();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Spider_AnimBP_AnimGraphNode_BlendSpacePlayer_75918A944557F91DCA495B8ED1F6816D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Spider_AnimBP_AnimGraphNode_BlendSpacePlayer_F293E18D4E4C55BB3FE293A346087188();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Spider_AnimBP(int32 EntryPoint);  // parameters 0x4
};
