// /Game/ASS/CRE/Suzie/SK_CRE_Suzie_Cosmetic_AnimBP.SK_CRE_Suzie_Cosmetic_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x468, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Suzie_Cosmetic_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x02F8, size 0x48
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0340, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0448, size 0x20

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Suzie_Cosmetic_AnimBP(int32 EntryPoint);  // parameters 0x4
};
