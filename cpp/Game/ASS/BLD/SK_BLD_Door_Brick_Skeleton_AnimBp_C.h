// /Game/ASS/BLD/SK_BLD_Door_Brick_Skeleton_AnimBp.SK_BLD_Door_Brick_Skeleton_AnimBp_C
// Derives from: UAnimInstance > UObject
// size 0x789, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_BLD_Door_Brick_Skeleton_AnimBp_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0398, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x03C0, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x03E8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x0468, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0498, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0518, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0548, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x05C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x05F8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0678, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x06A8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x06D8, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<DoorState> DoorState;  // 0x0788, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Brick_Skeleton_AnimBp_AnimGraphNode_TransitionResult_886EC24543113381C4C86EB50DE52E4D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Brick_Skeleton_AnimBp_AnimGraphNode_TransitionResult_9E92C08843624CCD9588CD91C332EE2C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Brick_Skeleton_AnimBp_AnimGraphNode_TransitionResult_B0FCBDC74EC785ED0C3E1F97DCC8D61B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Brick_Skeleton_AnimBp_AnimGraphNode_TransitionResult_E2CB7B0E440FD60496CA86999EBCF6AA();
    UFUNCTION() void ExecuteUbergraph_SK_BLD_Door_Brick_Skeleton_AnimBp(int32 EntryPoint);  // parameters 0x4
};
