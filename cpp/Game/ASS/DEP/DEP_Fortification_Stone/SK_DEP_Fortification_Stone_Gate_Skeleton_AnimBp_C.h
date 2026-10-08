// /Game/ASS/DEP/DEP_Fortification_Stone/SK_DEP_Fortification_Stone_Gate_Skeleton_AnimBp.SK_DEP_Fortification_Stone_Gate_Skeleton_AnimBp_C
// Derives from: UAnimInstance > UObject
// size 0x559, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Fortification_Stone_Gate_Skeleton_AnimBp_C : public UAnimInstance
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
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<DoorState> Door_State;  // 0x0558, size 0x1, named "Door State"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Fortification_Stone_Gate_Skeleton_AnimBp_AnimGraphNode_TransitionResult_994D2E54452AFF741346779B96ED7B71();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_Fortification_Stone_Gate_Skeleton_AnimBp_AnimGraphNode_TransitionResult_9B34B43F43A188077AA6BCB839975363();
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Fortification_Stone_Gate_Skeleton_AnimBp(int32 EntryPoint);  // parameters 0x4
};
