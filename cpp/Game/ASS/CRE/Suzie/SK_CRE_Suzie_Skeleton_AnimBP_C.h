// /Game/ASS/CRE/Suzie/SK_CRE_Suzie_Skeleton_AnimBP.SK_CRE_Suzie_Skeleton_AnimBP_C
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0xE6C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Suzie_Skeleton_AnimBP_C : public UIcarusAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02D8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0308, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0330, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0358, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0380, size 0x28
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x03A8, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x03F8, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0428, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0478, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x04A8, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x04C8, size 0x20
    UPROPERTY() FAnimNode_LookAt AnimGraphNode_LookAt;  // 0x04F0, size 0x1B0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x06A0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0720, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0750, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x07A0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x07D0, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_2;  // 0x0880, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x08C8, size 0x368
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0C30, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0D88, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0DB0, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0DF8, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FactionBoss_SandWorm_C* PawnRef;  // 0x0E40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SandWormState> CurrentState;  // 0x0E48, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0E50, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IKStrength;  // 0x0E58, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseLookat;  // 0x0E5C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0E60, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_HideMesh();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_660BB6054D55F6652D3BF1BB9D16ED45();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_6DD9223641FB1047C7E03AB00DA5A11B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_957C4EB247E9D11DD69286A1EAEA5D8D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP_AnimGraphNode_TransitionResult_BDE704BB41C47520E5B35990ED2F4094();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Suzie_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
