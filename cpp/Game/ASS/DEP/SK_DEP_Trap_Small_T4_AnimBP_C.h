// /Game/ASS/DEP/SK_DEP_Trap_Small_T4_AnimBP.SK_DEP_Trap_Small_T4_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x5D9, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Trap_Small_T4_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0348, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0398, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x03C8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0448, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0478, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x04F8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0528, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsTrapOpened;  // 0x05D8, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Trap_Small_T4_AnimBP(int32 EntryPoint);  // parameters 0x4
};
