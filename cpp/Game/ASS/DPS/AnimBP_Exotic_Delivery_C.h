// /Game/ASS/DPS/AnimBP_Exotic_Delivery.AnimBP_Exotic_Delivery_C
// Derives from: UAnimInstance > UObject
// size 0x659, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UAnimBP_Exotic_Delivery_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0398, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0418, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0448, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x04C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x04F8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0578, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x05A8, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Landed;  // 0x0658, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_AnimBP_Exotic_Delivery(int32 EntryPoint);  // parameters 0x4
};
