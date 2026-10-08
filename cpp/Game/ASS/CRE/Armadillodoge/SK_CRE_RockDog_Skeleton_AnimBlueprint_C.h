// /Game/ASS/CRE/Armadillodoge/SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x10B8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_RockDog_Skeleton_AnimBlueprint_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x03D8, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0530, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0578, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x05A0, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x05C8, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0668, size 0x158
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x07C0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0840, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x08E0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0900, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0A08, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0A28, size 0xA0
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0AC8, size 0xB0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0B78, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0C60, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0D48, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0DC8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0DF8, size 0xB0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0EA8, size 0x30
    UPROPERTY() FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt;  // 0x0EE0, size 0x1C0
    UPROPERTY() FVector __CustomProperty_Trace_Length_00F6EB50403AC7569B22089433167795;  // 0x10A0, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_00F6EB50403AC7569B22089433167795;  // 0x10AC, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_00F6EB50403AC7569B22089433167795;  // 0x10B0, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_00F6EB50403AC7569B22089433167795;  // 0x10B4, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_8672E4424FBB4ADA0D79C3B61BF9C8FE();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7FEA9F3F435AAF1CFEC9B4AB29389423();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_AF069F7C46E67A0ED47F3D94F4AE26EA();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
