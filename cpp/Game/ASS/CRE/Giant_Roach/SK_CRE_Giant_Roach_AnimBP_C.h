// /Game/ASS/CRE/Giant_Roach/SK_CRE_Giant_Roach_AnimBP.SK_CRE_Giant_Roach_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x12DC, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Giant_Roach_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x03D8, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0530, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0618, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x06E8, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0788, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0870, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0958, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0A40, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0AE0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0B00, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0C08, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0C28, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0C58, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0D08, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0D30, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x1098, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x10E0, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1108, size 0x158
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x1260, size 0x30
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_2735E41F4CD233B51D8AA68C0E193667;  // 0x1290, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_2735E41F4CD233B51D8AA68C0E193667;  // 0x1294, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_2735E41F4CD233B51D8AA68C0E193667;  // 0x1298, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_2735E41F4CD233B51D8AA68C0E193667;  // 0x12A4, size 0x1
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_69A905294384468CCB3075BFF8AFDBCE;  // 0x12A8, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_69A905294384468CCB3075BFF8AFDBCE;  // 0x12AC, size 0x4
    UPROPERTY() FVector __CustomProperty_Trace_Length_69A905294384468CCB3075BFF8AFDBCE;  // 0x12B0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x12BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x12C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x12CC, size 0xC, named "Trace Length"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TentacleSimAlpha;  // 0x12D8, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Giant_Roach_AnimBP_AnimGraphNode_BlendListByBool_9FE3BA4548D2CFAC5C8C80BC76F68085();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Giant_Roach_AnimBP_AnimGraphNode_BlendSpacePlayer_431A1EA3449E20EDB668C99D49D03863();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Giant_Roach_AnimBP_AnimGraphNode_BlendSpacePlayer_AB86ABDC4A3BC1131E375695EA239755();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Giant_Roach_AnimBP(int32 EntryPoint);  // parameters 0x4
};
