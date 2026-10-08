// /Game/ASS/CRE/Kea/SK_CRE_Kea_AnimBP.SK_CRE_Kea_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x13C8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Kea_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x03D8, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0420, size 0x158
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0578, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0598, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x06A0, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x06C0, size 0xD0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0790, size 0xD0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0860, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x08E0, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0980, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0A68, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0AE8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0BD0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0C70, size 0xB0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0D20, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0E08, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0EF0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0F20, size 0xB0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0FD0, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1000, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1368, size 0x28
    UPROPERTY() FVector __CustomProperty_TorsoLookAtTargetLocation_966C1A49486DC8378B1244B2DB71A7C2;  // 0x1390, size 0xC
    UPROPERTY() bool __CustomProperty_EnableTorsoLookAt_966C1A49486DC8378B1244B2DB71A7C2;  // 0x139C, size 0x1
    UPROPERTY() bool __CustomProperty_DoLookAt_966C1A49486DC8378B1244B2DB71A7C2;  // 0x139D, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_966C1A49486DC8378B1244B2DB71A7C2;  // 0x13A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> CurrentMovementMode;  // 0x13AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsGliding;  // 0x13AD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMoving;  // 0x13AE, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle GlideTimer;  // 0x13B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForcedFlapTime;  // 0x13B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TorsoTargetLocation;  // 0x13BC, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_BlendSpacePlayer_6D1A31A94FBDD2B970FB43871890316C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_BlendSpacePlayer_F20FD6634FBCC3574B6C438AEEA0487E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_ControlRig_966C1A49486DC8378B1244B2DB71A7C2();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Kea_AnimBP_AnimGraphNode_ModifyBone_C205FA944404FA52A00D139DF302BC9E();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Kea_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnContinuousGlide();
};
