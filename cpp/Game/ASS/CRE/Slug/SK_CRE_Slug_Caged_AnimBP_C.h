// /Game/ASS/CRE/Slug/SK_CRE_Slug_Caged_AnimBP.SK_CRE_Slug_Caged_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x844, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Slug_Caged_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0408, size 0x368
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0770, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x07F0, size 0x48
    UPROPERTY() FVector __CustomProperty_TargetLocation_6664F7934D4DC011619527A968BFE9C8;  // 0x0838, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Slug_Caged_AnimBP_AnimGraphNode_ControlRig_6664F7934D4DC011619527A968BFE9C8();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Slug_Caged_AnimBP(int32 EntryPoint);  // parameters 0x4
};
