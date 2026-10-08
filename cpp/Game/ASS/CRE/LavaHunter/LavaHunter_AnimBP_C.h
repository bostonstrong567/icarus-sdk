// /Game/ASS/CRE/LavaHunter/LavaHunter_AnimBP.LavaHunter_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x20ED, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class ULavaHunter_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9;  // 0x03D8, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x0478, size 0x50
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x04C8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x04E8, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x05F0, size 0x20
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0610, size 0x48
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x0658, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0680, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x06A8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x06D0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x06F8, size 0x28
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0720, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x0770, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x07A0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x0820, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8;  // 0x0850, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x08F0, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;  // 0x0970, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7;  // 0x0A58, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;  // 0x0AF8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x0B98, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x0C18, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0D00, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x0D30, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0DB0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x0DE0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x0E60, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0F00, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0F80, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x1068, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x1108, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x1138, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x11B8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x1258, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x12F8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1398, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x1438, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x1520, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x15A0, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x1620, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1708, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1738, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x17E8, size 0x48
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x1830, size 0x30
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x1860, size 0x38
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x1898, size 0x50
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x18E8, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x19B8, size 0xE8
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x1AA0, size 0xC8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1B68, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1CC0, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1CE8, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1D10, size 0x368
    UPROPERTY() FVector __CustomProperty_Trace_Length_5AE2462C47414F87E28D0294873F2F9D;  // 0x2078, size 0xC
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_5AE2462C47414F87E28D0294873F2F9D;  // 0x2084, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_5AE2462C47414F87E28D0294873F2F9D;  // 0x2088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x208C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x2090, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastRotation;  // 0x20C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x20CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideEggSack;  // 0x20D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFrameVelocity;  // 0x20D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastDelta;  // 0x20D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsWounded;  // 0x20DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x20E0, size 0xC, named "Trace Length"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDormant;  // 0x20EC, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_144B2A65412232A1E938249059D664A1();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendListByBool_4CAE5F3C4EF5CFD8BCE22584DE2D69D0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendListByBool_63B491254D3ECC62E19D9CB590E39257();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendListByBool_6F2FC99F4FD92C7CB98D65A06551BE1F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendListByBool_C22A944D4DB39BE15B2162B2B48DB992();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendListByBool_CAFF74DE4FCD51EC8B1A538B085B41BB();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendListByBool_F2D0987D4847B947D11C0494D36BBEAC();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendSpacePlayer_5D442A1E490CAC78A0E9F0850D222784();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_BlendSpacePlayer_A40DBED04C367287DAB1AF9C938CD3BD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_ModifyBone_5DB2FB09413267C7AC347998DDB2674D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_TransitionResult_8894AE8B46C2745D3B2E4EB315355523();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_TransitionResult_E9D3FE364DB060706696BFBED32258B2();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_LavaHunter_AnimBP_AnimGraphNode_TwoWayBlend_7FE435B84EF91F8535D9F2A0726D5704();
    UFUNCTION() void ExecuteUbergraph_LavaHunter_AnimBP(int32 EntryPoint);  // parameters 0x4
};
