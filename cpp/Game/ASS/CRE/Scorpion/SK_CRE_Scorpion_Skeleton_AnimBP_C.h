// /Game/ASS/CRE/Scorpion/SK_CRE_Scorpion_Skeleton_AnimBP.SK_CRE_Scorpion_Skeleton_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xDE0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Scorpion_Skeleton_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x03D8, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0420, size 0x158
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0578, size 0x158
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x06D0, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0720, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x07C0, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0860, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0948, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x09E8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0A08, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0B10, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0B30, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0BB0, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0C98, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0CC8, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0D78, size 0x28
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0DA0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDormant;  // 0x0DD0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* DormantAnim;  // 0x0DD8, size 0x8

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Scorpion_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_84D688DB4F2A05925E0B7DA43F17D77D();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Scorpion_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDormantAnim(UAnimSequence*& DormantAnim);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetIsDormant(bool& IsDormant);  // parameters 0x1
};
