// /Game/ASS/WEP/SK_GUN_Assault_Rifle_T4/SK_GUN_Assault_Rifle_T4_AnimBP.SK_GUN_Assault_Rifle_T4_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x340, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_GUN_Assault_Rifle_T4_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x02F8, size 0x48

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_GUN_Assault_Rifle_T4_AnimBP(int32 EntryPoint);  // parameters 0x4
};
