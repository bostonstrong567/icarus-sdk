// /Game/ASS/DEP/DEP_Armor_Stand_T4/SK_DEP_Armor_Stand_T4_Case_AnimBP.SK_DEP_Armor_Stand_T4_Case_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x55A, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Armor_Stand_T4_Case_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0348, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x03C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x03F8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0478, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x04A8, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Case_Open;  // 0x0558, size 0x1, named "Case Open"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Interacting;  // 0x0559, size 0x1, named "Is Interacting"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Armor_Stand_T4_Case_AnimBP_AnimGraphNode_TransitionResult_9D6945AC404AC7D164339C839785C378();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Armor_Stand_T4_Case_AnimBP_AnimGraphNode_TransitionResult_BF3B48AE4B60EA33314972838E0258D7();
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Armor_Stand_T4_Case_AnimBP(int32 EntryPoint);  // parameters 0x4
};
