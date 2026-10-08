// /Game/ASS/CRE/Irradiated_Mutation/SK_CRE_Irradiated_Mutation_AnimBP.SK_CRE_Irradiated_Mutation_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x121D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Irradiated_Mutation_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x03D8, size 0xA0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0478, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0548, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0630, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0718, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x07B8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x07D8, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x08E0, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0900, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0980, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x09B0, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0A60, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0A88, size 0x158
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0BE0, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0F48, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0F90, size 0xD0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1060, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1088, size 0x158
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x11E0, size 0x30
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_6398BA194D70ED726A2D39AF9EDEDC71;  // 0x1210, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_6398BA194D70ED726A2D39AF9EDEDC71;  // 0x121C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Irradiated_Mutation_AnimBP_AnimGraphNode_BlendListByBool_E4FB278B41DC16E72191FBA47609007C();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Irradiated_Mutation_AnimBP(int32 EntryPoint);  // parameters 0x4
};
