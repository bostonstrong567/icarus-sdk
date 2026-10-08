// /Game/ASS/DEP/DEP_Pump_Jack_T5/SK_DEP_Pump_Jack_T5_Arm_Skeleton_AnimBP.SK_DEP_Pump_Jack_T5_Arm_Skeleton_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x521, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Pump_Jack_T5_Arm_Skeleton_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0348, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x03C8, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x03F8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0428, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x04D8, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Running;  // 0x0520, size 0x1, named "Is Running"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Pump_Jack_T5_Arm_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
