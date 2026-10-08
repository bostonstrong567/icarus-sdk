// /Game/ASS/CRE/Fish/Fish_Scyther_Tadpole/SK_CRE_Fish_Scyther_Tadpole_AnimBP.SK_CRE_Fish_Scyther_Tadpole_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x799, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Fish_Scyther_Tadpole_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x02F8, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0660, size 0xA0
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0700, size 0x90
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFishActor* FishOwner;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDead;  // 0x0798, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Fish_Scyther_Tadpole_AnimBP(int32 EntryPoint);  // parameters 0x4
};
