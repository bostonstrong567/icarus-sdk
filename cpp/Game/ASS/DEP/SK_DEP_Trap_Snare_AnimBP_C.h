// /Game/ASS/DEP/SK_DEP_Trap_Snare_AnimBP.SK_DEP_Trap_Snare_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x6DD, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Trap_Snare_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0398, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x03C0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0440, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0470, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x04C0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x04F0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0570, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x05A0, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x05F0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0620, size 0xB0
    UPROPERTY() float __CustomProperty_StickRotation_6B0575A04E1EFC77D200DF93636746A7;  // 0x06D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasTrappedCharacter;  // 0x06D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Stick_Anim_Offset;  // 0x06D8, size 0x4, named "Stick Anim Offset"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBaited;  // 0x06DC, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Trap_Snare_AnimBP_AnimGraphNode_TransitionResult_004236474F5EC8A242E383ADF639FB81();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Trap_Snare_AnimBP_AnimGraphNode_TransitionResult_B327F4594BD5C2D2C26A3885C594C57F();
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Trap_Snare_AnimBP(int32 EntryPoint);  // parameters 0x4
};
