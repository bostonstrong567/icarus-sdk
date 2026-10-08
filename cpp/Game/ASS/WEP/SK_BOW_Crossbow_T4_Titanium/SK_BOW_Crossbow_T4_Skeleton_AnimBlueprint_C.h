// /Game/ASS/WEP/SK_BOW_Crossbow_T4_Titanium/SK_BOW_Crossbow_T4_Skeleton_AnimBlueprint.SK_BOW_Crossbow_T4_Skeleton_AnimBlueprint_C
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0x3D0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_BOW_Crossbow_T4_Skeleton_AnimBlueprint_C : public UIcarusAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0308, size 0x48
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0350, size 0x80

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_BOW_Crossbow_T4_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
