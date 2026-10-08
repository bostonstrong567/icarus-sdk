// /Game/ASS/CRE/Ape/SK_CRE_Juvenile_Ape_AnimBP.SK_CRE_Juvenile_Ape_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x10BD, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Juvenile_Ape_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x03D8, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0478, size 0x50
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x04C8, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0620, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0648, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0690, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x07E8, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0810, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0B78, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0C18, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0D00, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0DE8, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0EB8, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0FA0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0FD0, size 0xB0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x1080, size 0x30
    UPROPERTY() FVector __CustomProperty_TargetLocation_2B759AA34CC117A57EC2B39A6FDCAAF2;  // 0x10B0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x10BC, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Juvenile_Ape_AnimBP_AnimGraphNode_BlendListByBool_899215254AC1225B0433A2861661E04D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Juvenile_Ape_AnimBP_AnimGraphNode_BlendSpacePlayer_090EFFC04D68622492F322B349CC7690();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Juvenile_Ape_AnimBP_AnimGraphNode_ControlRig_2B759AA34CC117A57EC2B39A6FDCAAF2();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Juvenile_Ape_AnimBP(int32 EntryPoint);  // parameters 0x4
};
