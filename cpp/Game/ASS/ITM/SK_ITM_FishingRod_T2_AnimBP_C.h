// /Game/ASS/ITM/SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x7E0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ITM_FishingRod_T2_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x02C8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x02E8, size 0x108
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03F0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0420, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x04A0, size 0xA0
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0540, size 0x20
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0560, size 0x50
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x05B0, size 0xC0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0670, size 0xE8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldSnapToHand;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform HandTargetTransform;  // 0x0760, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsReeling;  // 0x0790, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BendAmount;  // 0x0794, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory LurePositionHistory;  // 0x0798, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishDataRowHandle DefaultFish;  // 0x07C8, size 0x18

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP_AnimGraphNode_ModifyBone_99CC83BD479B6388B303B6AA9641FEBC();
    UFUNCTION() void ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP(int32 EntryPoint);  // parameters 0x4
};
