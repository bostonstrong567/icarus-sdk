// /Game/ASS/ITM/Legendary_Chainsaw/SK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP.SK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x4EC, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x02F8, size 0x80
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x0378, size 0xC8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0440, size 0x48
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0488, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SkeletalItem_Sandwyrm_Chainsaw_C* Chainsaw;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChainsawCharge;  // 0x04E8, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_ITM_Legendary_Chainsaw_CORE_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
