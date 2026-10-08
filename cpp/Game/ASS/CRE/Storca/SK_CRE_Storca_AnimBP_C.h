// /Game/ASS/CRE/Storca/SK_CRE_Storca_AnimBP.SK_CRE_Storca_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1638, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Storca_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0560, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0588, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05D0, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0728, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0810, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x08F8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x09E0, size 0xA0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0A80, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0B50, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0BF0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0C10, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0D18, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0D38, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0E20, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0E50, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0F00, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0F28, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1290, size 0x368
    UPROPERTY() FVector __CustomProperty_Trace_Length_BFA29B0F4CD68B2A96EF1A988C0E458E;  // 0x15F8, size 0xC
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_15E9908D41C1C84BB143F096E4C509AE;  // 0x1604, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_15E9908D41C1C84BB143F096E4C509AE;  // 0x1608, size 0xC
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_15E9908D41C1C84BB143F096E4C509AE;  // 0x1614, size 0x4
    UPROPERTY() bool __CustomProperty_DoLookAt_15E9908D41C1C84BB143F096E4C509AE;  // 0x1618, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x1619, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x161C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x1628, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x162C, size 0xC, named "Trace Length"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Storca_AnimBP_AnimGraphNode_BlendListByBool_4F3ECF7747F29BC38DF8518E6282E8A3();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Storca_AnimBP_AnimGraphNode_BlendSpacePlayer_6DD0C15740CD65D4F7DAE4B3474DDDB4();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Storca_AnimBP_AnimGraphNode_BlendSpacePlayer_C62256C34831A063316BF4904DECE04D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Storca_AnimBP_AnimGraphNode_ControlRig_15E9908D41C1C84BB143F096E4C509AE();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Storca_AnimBP(int32 EntryPoint);  // parameters 0x4
};
