// /Game/ThirdPartyAssets/AnimalsVol01/Bear/Meshes/SK-Bear_AnimBP.SK-Bear_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1440, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Bear_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0408, size 0xB0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x04B8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0538, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x05D8, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x06C0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0740, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x07E0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0800, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0908, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0928, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0A10, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0A40, size 0xB0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0AF0, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0C48, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x0C90, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0CB8, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0CE0, size 0xA0
    UPROPERTY() FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt;  // 0x0D80, size 0x1C0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0F40, size 0x158
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1098, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1400, size 0x28
    UPROPERTY() FVector __CustomProperty_Trace_Length_0E3912484F618EBFA97571B9CD075E81;  // 0x1428, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_0E3912484F618EBFA97571B9CD075E81;  // 0x1434, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_0E3912484F618EBFA97571B9CD075E81;  // 0x1438, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_0E3912484F618EBFA97571B9CD075E81;  // 0x143C, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bear_AnimBP_AnimGraphNode_BlendListByBool_08BC8BF4457ACC9ECCC6138F7452FA27();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendListByBool_08BC8BF4457ACC9ECCC6138F7452FA27"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_1DB800EB41A9ED5CF2090CA4FD8949FA();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_1DB800EB41A9ED5CF2090CA4FD8949FA"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_36BC4CBF4A0C2F5862A11B9313F4D8C5();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_36BC4CBF4A0C2F5862A11B9313F4D8C5"
    UFUNCTION() void ExecuteUbergraph_SK_Bear_AnimBP(int32 EntryPoint);  // parameters 0x4, named "ExecuteUbergraph_SK-Bear_AnimBP"
};
