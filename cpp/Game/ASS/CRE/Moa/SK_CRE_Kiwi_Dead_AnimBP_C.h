// /Game/ASS/CRE/Moa/SK_CRE_Kiwi_Dead_AnimBP.SK_CRE_Kiwi_Dead_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x3EC, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Kiwi_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0328, size 0x90
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03B8, size 0x30
    UPROPERTY() float __CustomProperty_NeckScale_69EA27CD4863B76CB7718CB0D11B757E;  // 0x03E8, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Kiwi_Dead_AnimBP(int32 EntryPoint);  // parameters 0x4
};
