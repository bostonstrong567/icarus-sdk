// /Game/ASS/CRE/Dragonfly/SK_CRE_Dragonfly_AnimBP.SK_CRE_Dragonfly_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xA2C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Dragonfly_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0408, size 0xA0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x04A8, size 0x48
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x04F0, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0570, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0658, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x06F8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0718, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0820, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0840, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_1;  // 0x0870, size 0xB0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0920, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0950, size 0xB0
    UPROPERTY() FVector __CustomProperty_TorsoLookAtTargetLocation_9E49824343533777648F36B1E52FAB2D;  // 0x0A00, size 0xC
    UPROPERTY() bool __CustomProperty_EnableTorsoLookAt_9E49824343533777648F36B1E52FAB2D;  // 0x0A0C, size 0x1
    UPROPERTY() bool __CustomProperty_DoLookAt_9E49824343533777648F36B1E52FAB2D;  // 0x0A0D, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_9E49824343533777648F36B1E52FAB2D;  // 0x0A10, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> CurrentMovementMode;  // 0x0A1C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TorsoTargetLocation;  // 0x0A20, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Dragonfly_AnimBP_AnimGraphNode_BlendListByBool_5ADDEF924030880506F59184F565FB2B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Dragonfly_AnimBP_AnimGraphNode_ModifyBone_2814004247DE764C00432190FE7237BC();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Dragonfly_AnimBP(int32 EntryPoint);  // parameters 0x4
};
