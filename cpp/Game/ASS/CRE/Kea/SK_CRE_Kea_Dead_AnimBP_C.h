// /Game/ASS/CRE/Kea/SK_CRE_Kea_Dead_AnimBP.SK_CRE_Kea_Dead_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x3E8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Kea_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0328, size 0x30
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0358, size 0x90

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Kea_Dead_AnimBP(int32 EntryPoint);  // parameters 0x4
};
