// /Game/ASS/CRE/Moa/SK_CRE_Moa_AnimBP.SK_CRE_Moa_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1768, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Moa_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0560, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05A8, size 0x158
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0700, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0780, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0868, size 0xE8
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
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1028, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1390, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x13B8, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x13E0, size 0x368
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_9F791BA84B24158FF5540697533FA0DC;  // 0x1748, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_9F791BA84B24158FF5540697533FA0DC;  // 0x174C, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_9F791BA84B24158FF5540697533FA0DC;  // 0x1750, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_9F791BA84B24158FF5540697533FA0DC;  // 0x175C, size 0x1
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_E72A7022499C426E3E1BDDB59AB830CE;  // 0x1760, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_E72A7022499C426E3E1BDDB59AB830CE;  // 0x1764, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Moa_AnimBP_AnimGraphNode_BlendListByBool_261FA3DF41A9AFB6ED233F9C096F151D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Moa_AnimBP_AnimGraphNode_BlendSpacePlayer_4F479FFD4CDA422A09CE289E37A661E4();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Moa_AnimBP_AnimGraphNode_BlendSpacePlayer_8F99838B4FD9EDCA081BC9B88C28E99E();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Moa_AnimBP(int32 EntryPoint);  // parameters 0x4
};
