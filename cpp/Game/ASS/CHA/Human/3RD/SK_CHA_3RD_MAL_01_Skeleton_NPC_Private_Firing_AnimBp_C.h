// /Game/ASS/CHA/Human/3RD/SK_CHA_3RD_MAL_01_Skeleton_NPC_Private_Firing_AnimBp.SK_CHA_3RD_MAL_01_Skeleton_NPC_Private_Firing_AnimBp_C
// Derives from: UAnimInstance > UObject
// size 0x732, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CHA_3RD_MAL_01_Skeleton_NPC_Private_Firing_AnimBp_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0398, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x03C0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0440, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0470, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x04F0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0520, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x05A0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x05D0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0650, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0680, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFiring;  // 0x0730, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Shot;  // 0x0731, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_CHA_3RD_MAL_01_Skeleton_NPC_Private_Firing_AnimBp(int32 EntryPoint);  // parameters 0x4
};
