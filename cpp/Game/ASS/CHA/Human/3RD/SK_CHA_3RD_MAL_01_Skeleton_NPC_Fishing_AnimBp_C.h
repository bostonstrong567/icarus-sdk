// /Game/ASS/CHA/Human/3RD/SK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp.SK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp_C
// Derives from: UAnimInstance > UObject
// size 0xA89, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x0398, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x03C0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x03E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0410, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0438, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x0460, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x04E0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x0510, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x0590, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x05C0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x0640, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0670, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x06F0, size 0x30
    UPROPERTY() FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;  // 0x0720, size 0x78
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0798, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x07C8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0848, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0878, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x08F8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0928, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x09A8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x09D8, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENPCFishing> FishingState;  // 0x0A88, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp_AnimGraphNode_TransitionResult_6396144840BAD8F2F89F398D07564A97();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp_AnimGraphNode_TransitionResult_9CC53D6C4E1A28D3DF4021813647054F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp_AnimGraphNode_TransitionResult_D102561C4D396E7B180929B403045F62();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp_AnimGraphNode_TransitionResult_EE1990EA4AAF1FEA6A237D9017ADFBCA();
    UFUNCTION() void ExecuteUbergraph_SK_CHA_3RD_MAL_01_Skeleton_NPC_Fishing_AnimBp(int32 EntryPoint);  // parameters 0x4
};
