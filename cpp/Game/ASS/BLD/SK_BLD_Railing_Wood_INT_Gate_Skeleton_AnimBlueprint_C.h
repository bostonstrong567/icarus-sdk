// /Game/ASS/BLD/SK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint.SK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint_C
// Derives from: UAnimInstance > UObject
// size 0x789, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint_C : public UAnimInstance
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
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_0C0403244C105476680AF69B57FB4AD8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_39482C9A45B383D82B8CA9B1399E5AB1();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_4E544B604E1EE56D8BC39EBE26033C85();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_E6593A1E4CFBCC6F37F8BB9F1A651485();
    UFUNCTION() void ExecuteUbergraph_SK_BLD_Railing_Wood_INT_Gate_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
