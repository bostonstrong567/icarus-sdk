// /Game/ASS/ITM/AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C
// Derives from: UAnimInstance > UObject
// size 0x419, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UAnimBP_FireExtinguisher_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x02F8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0378, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Firing;  // 0x0418, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_AnimBP_FireExtinguisher(int32 EntryPoint);  // parameters 0x4
};
