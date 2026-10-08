// /Game/ASS/ITM/SK_ITM_Lantern_AnimBP.SK_ITM_Lantern_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xB50, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ITM_Lantern_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x02C8, size 0x20
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x02F0, size 0x830
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0B20, size 0x30

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_ITM_Lantern_AnimBP(int32 EntryPoint);  // parameters 0x4
};
