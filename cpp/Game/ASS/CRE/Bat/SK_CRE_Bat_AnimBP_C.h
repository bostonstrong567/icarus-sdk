// /Game/ASS/CRE/Bat/SK_CRE_Bat_AnimBP.SK_CRE_Bat_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xEEC, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Bat_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x03D8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x03F8, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0500, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0520, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0608, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x06A8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0728, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_1;  // 0x0758, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0808, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0850, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0BB8, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0C58, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0C88, size 0xB0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0D38, size 0x158
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0E90, size 0x30
    UPROPERTY() FVector __CustomProperty_TorsoLookAtTargetLocation_64E0187A4B91ED8A33B0A2A3214CD111;  // 0x0EC0, size 0xC
    UPROPERTY() bool __CustomProperty_EnableTorsoLookAt_64E0187A4B91ED8A33B0A2A3214CD111;  // 0x0ECC, size 0x1
    UPROPERTY() bool __CustomProperty_DoLookAt_64E0187A4B91ED8A33B0A2A3214CD111;  // 0x0ECD, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_64E0187A4B91ED8A33B0A2A3214CD111;  // 0x0ED0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TorsoTargetLocation;  // 0x0EDC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDiving;  // 0x0EE8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsGliding;  // 0x0EE9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMoving;  // 0x0EEA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> CurrentMovementMode;  // 0x0EEB, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Bat_AnimBP_AnimGraphNode_BlendListByBool_A7207A8847D09EAA3D40C2A6C0A7E59D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Bat_AnimBP_AnimGraphNode_ModifyBone_003881CA4BE5C69931A61287B1FD91D9();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Bat_AnimBP(int32 EntryPoint);  // parameters 0x4
};
