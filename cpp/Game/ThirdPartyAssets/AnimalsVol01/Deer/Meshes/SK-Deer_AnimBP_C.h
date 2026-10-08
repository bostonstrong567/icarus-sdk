// /Game/ThirdPartyAssets/AnimalsVol01/Deer/Meshes/SK-Deer_AnimBP.SK-Deer_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1188, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Deer_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0488, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0528, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0548, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0650, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0670, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0758, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0788, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0838, size 0x48
    UPROPERTY() FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt;  // 0x0880, size 0x1C0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0A40, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x0B98, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0BC0, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0BE8, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0C88, size 0x158
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0DE0, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1148, size 0x28
    UPROPERTY() FVector __CustomProperty_Trace_Length_162BB0D7450977913D57BAA9039D54DD;  // 0x1170, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_162BB0D7450977913D57BAA9039D54DD;  // 0x117C, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_162BB0D7450977913D57BAA9039D54DD;  // 0x1180, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_162BB0D7450977913D57BAA9039D54DD;  // 0x1184, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Deer_AnimBP_AnimGraphNode_BlendSpacePlayer_4D5A5B6C4BC22AA35441F7BC6BC83EE6();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Deer_AnimBP_AnimGraphNode_BlendSpacePlayer_4D5A5B6C4BC22AA35441F7BC6BC83EE6"
    UFUNCTION() void ExecuteUbergraph_SK_Deer_AnimBP(int32 EntryPoint);  // parameters 0x4, named "ExecuteUbergraph_SK-Deer_AnimBP"
};
