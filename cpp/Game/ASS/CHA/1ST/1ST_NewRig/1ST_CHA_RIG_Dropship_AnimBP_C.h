// /Game/ASS/CHA/1ST/1ST_NewRig/1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x469, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_1ST_CHA_RIG_Dropship_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x02F8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0378, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0418, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Shake;  // 0x0468, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP(int32 EntryPoint);  // parameters 0x4
};
