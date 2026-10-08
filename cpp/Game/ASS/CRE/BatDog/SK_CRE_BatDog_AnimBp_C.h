// /Game/ASS/CRE/BatDog/SK_CRE_BatDog_AnimBp.SK_CRE_BatDog_AnimBp_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x173E, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_BatDog_AnimBp_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0408, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x04F0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x05D8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0678, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x06F8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0798, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0818, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0838, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0940, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0960, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x09E0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0A80, size 0xB0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0B30, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0B60, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0C10, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0C58, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0DB0, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0DD8, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0E00, size 0xA0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0EA0, size 0x368
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1208, size 0xC8
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x12D0, size 0x368
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1638, size 0xE8
    UPROPERTY() bool __CustomProperty_DoLookAt_BB79908843C71FADB03A7D95669C70D3;  // 0x1720, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_BB79908843C71FADB03A7D95669C70D3;  // 0x1724, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x1730, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x173C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x173D, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_BatDog_AnimBp_AnimGraphNode_BlendListByBool_8BAA083E4AE5AD1D8409A28798FC4211();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_BatDog_AnimBp_AnimGraphNode_BlendSpacePlayer_6A84B6A445FA599426150DAB254023B9();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_BatDog_AnimBp_AnimGraphNode_BlendSpacePlayer_F2623AD54712A51B92DEB8A4DDCD39B5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_BatDog_AnimBp_AnimGraphNode_ControlRig_BB79908843C71FADB03A7D95669C70D3();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_BatDog_AnimBp(int32 EntryPoint);  // parameters 0x4
};
