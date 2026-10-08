// /Game/ASS/CRE/Blueback/SK_CRE_BlueBack_AnimBP.SK_CRE_BlueBack_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x10E5, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_BlueBack_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0408, size 0x48
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0450, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x04D0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x05B8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x06A0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0740, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x07E0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0800, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0908, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0928, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0958, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0A08, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0D70, size 0x368
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_4A809F244E654683B007BEA2F328031A;  // 0x10D8, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_4A809F244E654683B007BEA2F328031A;  // 0x10E4, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_BlueBack_AnimBP_AnimGraphNode_BlendListByBool_DBCC067A4973B4DAD5B3E4A4ED940AE8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_BlueBack_AnimBP_AnimGraphNode_BlendSpacePlayer_A031B6734454D9D51078889D5AD5EA09();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_BlueBack_AnimBP_AnimGraphNode_BlendSpacePlayer_FE6F010B4201CE3163A28B881569D528();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_BlueBack_AnimBP(int32 EntryPoint);  // parameters 0x4
};
