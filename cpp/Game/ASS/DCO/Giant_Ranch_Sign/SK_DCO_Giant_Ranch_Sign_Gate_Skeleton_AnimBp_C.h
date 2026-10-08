// /Game/ASS/DCO/Giant_Ranch_Sign/SK_DCO_Giant_Ranch_Sign_Gate_Skeleton_AnimBp.SK_DCO_Giant_Ranch_Sign_Gate_Skeleton_AnimBp_C
// Derives from: UAnimInstance > UObject
// size 0x6A9, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DCO_Giant_Ranch_Sign_Gate_Skeleton_AnimBp_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0398, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0418, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0448, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x04C8, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x04F8, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0548, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0578, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x05C8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x05F8, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOpen;  // 0x06A8, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DCO_Giant_Ranch_Sign_Gate_Skeleton_AnimBp(int32 EntryPoint);  // parameters 0x4
};
