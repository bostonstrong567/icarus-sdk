// /Game/ASS/WEP/SK_ARR_Drill_Heavy_AnimBP.SK_ARR_Drill_Heavy_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x4C5, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ARR_Drill_Heavy_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x02F8, size 0xC8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x03C0, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0440, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargedAmountForAnim;  // 0x04C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ChargedForAnim;  // 0x04C4, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_ARR_Drill_Heavy_AnimBP(int32 EntryPoint);  // parameters 0x4
};
