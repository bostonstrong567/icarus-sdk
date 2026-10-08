// /Game/ASS/CRE/Caveworm_Teenage/SK_CRE_CaveWorm_Teenage_AnimBp.SK_CRE_CaveWorm_Teenage_AnimBp_C
// Derives from: UAnimInstance > UObject
// size 0xAF4, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_CaveWorm_Teenage_AnimBp_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0348, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0370, size 0x28
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x0398, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x03E8, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0418, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0468, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0498, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x04B8, size 0x20
    UPROPERTY() FAnimNode_LookAt AnimGraphNode_LookAt;  // 0x04E0, size 0x1B0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0690, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0710, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0740, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0790, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x07C0, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_2;  // 0x0870, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x08B8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0900, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0948, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0AA0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FactionBoss_SandWorm_C* PawnRef;  // 0x0AC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SandWormState> CurrentState;  // 0x0AD0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0AD8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IKStrength;  // 0x0AE0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseLookat;  // 0x0AE4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0AE8, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Teenage_AnimBp_AnimGraphNode_TransitionResult_14A992194BF6AC0CAF83168C124AB80E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Teenage_AnimBp_AnimGraphNode_TransitionResult_1C8C26144CC1652EB6FB25A6AA50178F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Teenage_AnimBp_AnimGraphNode_TransitionResult_A6AD29B041EB2D52FA1415B4CB5776FD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_CaveWorm_Teenage_AnimBp_AnimGraphNode_TransitionResult_EE0372D44C5175249118DB8E882D09A6();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_CaveWorm_Teenage_AnimBp(int32 EntryPoint);  // parameters 0x4
};
