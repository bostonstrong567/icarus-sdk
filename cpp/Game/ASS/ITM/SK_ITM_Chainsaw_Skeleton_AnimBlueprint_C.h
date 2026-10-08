// /Game/ASS/ITM/SK_ITM_Chainsaw_Skeleton_AnimBlueprint.SK_ITM_Chainsaw_Skeleton_AnimBlueprint_C
// Derives from: UAnimInstance > UObject
// size 0x835, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ITM_Chainsaw_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x02F8, size 0x48
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x0340, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0368, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0390, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x03B8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x03E0, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0488, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x04B8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0538, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0568, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0598, size 0xB0
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0648, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0668, size 0x20
    UPROPERTY() FAnimNode_Fabrik AnimGraphNode_Fabrik;  // 0x0690, size 0x190
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasFuel;  // 0x0820, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandleTarget;  // 0x0824, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0830, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InUse;  // 0x0834, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ITM_Chainsaw_Skeleton_AnimBlueprint_AnimGraphNode_Fabrik_9CDD592A48806521DD7BFD8A404A42BD();
    UFUNCTION() void ExecuteUbergraph_SK_ITM_Chainsaw_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
