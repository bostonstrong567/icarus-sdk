// /Game/ASS/CRE/Needler/SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C
// Derives from: UAnimInstance > UObject
// size 0x881, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;  // 0x02F8, size 0x1D8
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x04D0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x04F8, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0520, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x05A0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x05D0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0650, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0680, size 0xB0
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x0730, size 0x38
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0768, size 0x50
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x07B8, size 0xC8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OnCooldown;  // 0x0880, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
