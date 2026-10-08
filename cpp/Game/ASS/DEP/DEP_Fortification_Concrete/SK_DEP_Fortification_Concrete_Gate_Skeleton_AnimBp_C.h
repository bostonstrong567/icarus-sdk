// /Game/ASS/DEP/DEP_Fortification_Concrete/SK_DEP_Fortification_Concrete_Gate_Skeleton_AnimBp.SK_DEP_Fortification_Concrete_Gate_Skeleton_AnimBp_C
// Derives from: UAnimInstance > UObject
// size 0x631, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Fortification_Concrete_Gate_Skeleton_AnimBp_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0370, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x03F0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0420, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x04A0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x04D0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0550, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0580, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<DoorState> DoorState;  // 0x0630, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Fortification_Concrete_Gate_Skeleton_AnimBp_AnimGraphNode_TransitionResult_1584B2C846063158EA9E0D95F261397D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Fortification_Concrete_Gate_Skeleton_AnimBp_AnimGraphNode_TransitionResult_ACBD0B404CF2752BC25AC99502ECD259();
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Fortification_Concrete_Gate_Skeleton_AnimBp(int32 EntryPoint);  // parameters 0x4
};
