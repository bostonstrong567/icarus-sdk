// /Game/ASS/CRE/IceBreaker/SK_CRE_Ice_Breaker_AnimBP.SK_CRE_Ice_Breaker_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x102C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Ice_Breaker_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0488, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0508, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x05F0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0690, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0730, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x07D0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0850, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x08F0, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x09D8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0A08, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0AB8, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0B00, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0C58, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0C80, size 0x368
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastRotation;  // 0x0FE8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x0FF8, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x1028, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_FootstepBackL();
    UFUNCTION(BlueprintCallable) void AnimNotify_FootstepBackR();
    UFUNCTION(BlueprintCallable) void AnimNotify_FootstepFrontL();
    UFUNCTION(BlueprintCallable) void AnimNotify_FootstepFrontR();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ice_Breaker_AnimBP_AnimGraphNode_BlendListByBool_1040746841BD567BDB0B6DA864B938E2();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ice_Breaker_AnimBP_AnimGraphNode_BlendListByBool_A51B9F3E42DA5ADCC60854866F921F4D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ice_Breaker_AnimBP_AnimGraphNode_BlendListByBool_C31E81EF49FF105E08F699BD825C8580();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ice_Breaker_AnimBP_AnimGraphNode_BlendListByBool_D9DDE17F4808F3B886D3D38FC277E4EE();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ice_Breaker_AnimBP_AnimGraphNode_BlendSpacePlayer_F8758FBB491B706B2BB8ACA457BBF066();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Ice_Breaker_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnFootstepDecal(FName SocketName, UMaterialInterface* DecalMaterial);  // parameters 0x10
};
