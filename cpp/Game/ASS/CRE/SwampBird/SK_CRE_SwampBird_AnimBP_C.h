// /Game/ASS/CRE/SwampBird/SK_CRE_SwampBird_AnimBP.SK_CRE_SwampBird_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x177D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_SwampBird_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x03D8, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0530, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0578, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x06D0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x07B8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x08A0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0988, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0A70, size 0x80
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0AF0, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0BF8, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0C18, size 0xD0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0CE8, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0DB8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0E58, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0EF8, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0F18, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0F48, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0FF8, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1020, size 0x28
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x1048, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1078, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x13E0, size 0x368
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_F092A06F49A8952367F345AD87812366;  // 0x1748, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_F092A06F49A8952367F345AD87812366;  // 0x174C, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_38CD973B4B9D4505884DC0B31F711466;  // 0x1750, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_38CD973B4B9D4505884DC0B31F711466;  // 0x1754, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_38CD973B4B9D4505884DC0B31F711466;  // 0x1758, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_38CD973B4B9D4505884DC0B31F711466;  // 0x1764, size 0x1
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_F1C500E847C1B7F5C9C45AAC808C8A09;  // 0x1768, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_F1C500E847C1B7F5C9C45AAC808C8A09;  // 0x176C, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_F1C500E847C1B7F5C9C45AAC808C8A09;  // 0x1770, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_F1C500E847C1B7F5C9C45AAC808C8A09;  // 0x177C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_SwampBird_AnimBP_AnimGraphNode_BlendListByBool_27F5288E44DA484C16A64EA77C90CA5D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_SwampBird_AnimBP_AnimGraphNode_BlendSpacePlayer_5C0BAE6249BC991E4869B39E56A4A9A6();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_SwampBird_AnimBP_AnimGraphNode_BlendSpacePlayer_8DB16C524A66BA4A9912B4B8E10C394A();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_SwampBird_AnimBP(int32 EntryPoint);  // parameters 0x4
};
