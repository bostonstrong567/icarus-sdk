// /Game/ASS/DEP/SK_DEP_Extractor_01_Skeleton_AnimBP.SK_DEP_Extractor_01_Skeleton_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x922, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Extractor_01_Skeleton_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0398, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x03C0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x0440, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x0470, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x04F0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0520, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x05A0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x05D0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0650, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0680, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0700, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0730, size 0xB0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x07E0, size 0xC0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x08A0, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsExtracting;  // 0x0920, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPlayerInteracting;  // 0x0921, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Extractor_01_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_59594FD44D367B03FA0A2094C6B408CD();
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Extractor_01_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
