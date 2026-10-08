// /Game/ASS/CRE/Chicken/SK_CRE_Chicken_AnimBP.SK_CRE_Chicken_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x618, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Chicken_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0408, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x04F0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0520, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x05D0, size 0x48

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Chicken_AnimBP(int32 EntryPoint);  // parameters 0x4
};
