// /Game/ASS/CRE/PredatorBird/SK_CRE_PredatorBird_AnimBp.SK_CRE_PredatorBird_AnimBp_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1389, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_PredatorBird_AnimBp_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0408, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0428, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0530, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2;  // 0x0550, size 0xD0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0620, size 0xD0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x06F0, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0770, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0858, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0940, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x09E0, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0AC8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0AF8, size 0xB0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0BA8, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0D00, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0D28, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0D70, size 0x368
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x10D8, size 0x38
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x1110, size 0x80
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x1190, size 0xD0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x1260, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x12B0, size 0xA0
    UPROPERTY() FVector __CustomProperty_TorsoLookAtTargetLocation_EAB1D15447E2FCB2C29C4B8DAE66C07F;  // 0x1350, size 0xC
    UPROPERTY() bool __CustomProperty_EnableTorsoLookAt_EAB1D15447E2FCB2C29C4B8DAE66C07F;  // 0x135C, size 0x1
    UPROPERTY() bool __CustomProperty_DoLookAt_EAB1D15447E2FCB2C29C4B8DAE66C07F;  // 0x135D, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_EAB1D15447E2FCB2C29C4B8DAE66C07F;  // 0x1360, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> CurrentMovementMode;  // 0x136C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsGliding;  // 0x136D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMoving;  // 0x136E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle GlideTimer;  // 0x1370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForcedFlapTime;  // 0x1378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TorsoTargetLocation;  // 0x137C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDiving;  // 0x1388, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_PredatorBird_AnimBp_AnimGraphNode_ApplyMeshSpaceAdditive_CE42FFA24E9CC150CD748783BA173433();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_PredatorBird_AnimBp_AnimGraphNode_BlendSpacePlayer_232D11C44DA47E6F096C35A3518D0B4B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_PredatorBird_AnimBp_AnimGraphNode_BlendSpacePlayer_FE9F8032458D997B6E98D4A783D5932D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_PredatorBird_AnimBp_AnimGraphNode_ModifyBone_C76D4BA14A9FE6D80F7612AE0C9C2D3B();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_PredatorBird_AnimBp(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnContinuousGlide();
};
