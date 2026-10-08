// /Game/ASS/WEP/GUN_BlackWolfRevolver/SK_GUN_BWR_Barrel_A_Skeleton_AnimBlueprint.SK_GUN_BWR_Barrel_A_Skeleton_AnimBlueprint_C
// Derives from: UAnimInstance > UObject
// size 0x528, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_GUN_BWR_Barrel_A_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x02F8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0340, size 0x48
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x0388, size 0x38
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x03C0, size 0xC8
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0488, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x04D8, size 0x50

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_GUN_BWR_Barrel_A_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
