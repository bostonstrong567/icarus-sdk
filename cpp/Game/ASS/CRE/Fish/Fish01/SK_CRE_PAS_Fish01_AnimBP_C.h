// /Game/ASS/CRE/Fish/Fish01/SK_CRE_PAS_Fish01_AnimBP.SK_CRE_PAS_Fish01_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x821, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_PAS_Fish01_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x02F8, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0660, size 0xA0
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0700, size 0x90
    UPROPERTY() float __CustomProperty_RotationRate_59A6B454476A46BE947F70B5CEC02806;  // 0x0790, size 0x4
    UPROPERTY() float __CustomProperty_NewSpeed_59A6B454476A46BE947F70B5CEC02806;  // 0x0794, size 0x4
    UPROPERTY() bool __CustomProperty_AnimateFins_59A6B454476A46BE947F70B5CEC02806;  // 0x0798, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFishActor* FishOwner;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDead;  // 0x07A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed_Alpha;  // 0x07AC, size 0x4, named "Speed Alpha"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x07B0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory RotationHistory;  // 0x07E0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastRotation;  // 0x0810, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x081C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldAnimateFins;  // 0x0820, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP_AnimGraphNode_ControlRig_59A6B454476A46BE947F70B5CEC02806();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP(int32 EntryPoint);  // parameters 0x4
};
