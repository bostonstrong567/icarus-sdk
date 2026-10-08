// /Game/ASS/CRE/Irradiated_Abomination/SK_CRE_Irradiated_Abomination_AnimBP.SK_CRE_Irradiated_Abomination_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xF4D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Irradiated_Abomination_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x03D8, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0400, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0448, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x05A0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0688, size 0xA0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0728, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x07F8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x08E0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x09C8, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0A68, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0A88, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0B90, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0BB0, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0C98, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0CC8, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0D78, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0DA0, size 0x158
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0EF8, size 0x30
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_E5E4EF464626548D733F1CBE9833B24B;  // 0x0F28, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_E5E4EF464626548D733F1CBE9833B24B;  // 0x0F2C, size 0xC
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_E5E4EF464626548D733F1CBE9833B24B;  // 0x0F38, size 0x4
    UPROPERTY() bool __CustomProperty_DoLookAt_E5E4EF464626548D733F1CBE9833B24B;  // 0x0F3C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x0F3D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x0F40, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x0F4C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Irradiated_Abomination_AnimBP_AnimGraphNode_BlendListByBool_706DDA744D157C9AB99E52A673098E23();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Irradiated_Abomination_AnimBP_AnimGraphNode_BlendSpacePlayer_55EA06AA4A835E13FF5ABABADA51029C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Irradiated_Abomination_AnimBP_AnimGraphNode_BlendSpacePlayer_E133046B49BB2BC130BC7CB21EB109EE();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Irradiated_Abomination_AnimBP(int32 EntryPoint);  // parameters 0x4
};
