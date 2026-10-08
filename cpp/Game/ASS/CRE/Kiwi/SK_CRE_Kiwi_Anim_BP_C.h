// /Game/ASS/CRE/Kiwi/SK_CRE_Kiwi_Anim_BP.SK_CRE_Kiwi_Anim_BP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1AD4, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Kiwi_Anim_BP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0560, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05A8, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0700, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x07E8, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x08D0, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0950, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0A38, size 0xE8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0B20, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0C28, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0C48, size 0xD0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0D18, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0DE8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0E88, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0F28, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0F48, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0F78, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_2;  // 0x1028, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1390, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x13B8, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x13E0, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1748, size 0x368
    UPROPERTY() float __CustomProperty_NeckScale_1B8948104055B99C015B06ADC39F3BB7;  // 0x1AB0, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_A9C619C64A7B00956CEA3B87F231CAC6;  // 0x1AB4, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_A9C619C64A7B00956CEA3B87F231CAC6;  // 0x1AB8, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_A9C619C64A7B00956CEA3B87F231CAC6;  // 0x1ABC, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_A9C619C64A7B00956CEA3B87F231CAC6;  // 0x1AC8, size 0x1
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_ABDCD1B34E2259E95CE2769F49F9BFFC;  // 0x1ACC, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_ABDCD1B34E2259E95CE2769F49F9BFFC;  // 0x1AD0, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kiwi_Anim_BP_AnimGraphNode_BlendListByBool_E97BD098480909FC328420872D095C4C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kiwi_Anim_BP_AnimGraphNode_BlendSpacePlayer_AA8F9C014F62F67BD47397A0B9EE4451();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kiwi_Anim_BP_AnimGraphNode_BlendSpacePlayer_EE35A84B47AF9F6136C68D93CCCBE6D8();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Kiwi_Anim_BP(int32 EntryPoint);  // parameters 0x4
};
