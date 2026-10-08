// /Game/ASS/CRE/RockGolem/Juvie/SK_Juvenile_RockGolem_Corpse_Animbp.SK_Juvenile_RockGolem_Corpse_Animbp_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x3E8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Juvenile_RockGolem_Corpse_Animbp_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0328, size 0x20
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0348, size 0x50
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0398, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03B8, size 0x30

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_Juvenile_RockGolem_Corpse_Animbp(int32 EntryPoint);  // parameters 0x4
};
