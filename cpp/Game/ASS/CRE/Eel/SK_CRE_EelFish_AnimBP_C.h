// /Game/ASS/CRE/Eel/SK_CRE_EelFish_AnimBP.SK_CRE_EelFish_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xA81, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_EelFish_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x02F8, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0660, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x09C8, size 0xA0
    UPROPERTY() float __CustomProperty_TurnAngle_FCA4D1B14922B6AD566D098A08FCFF75;  // 0x0A68, size 0x4
    UPROPERTY() bool __CustomProperty_SwimStraight__FCA4D1B14922B6AD566D098A08FCFF75;  // 0x0A6C, size 0x1, named "__CustomProperty_SwimStraight?_FCA4D1B14922B6AD566D098A08FCFF75"
    UPROPERTY() float __CustomProperty_SwimmingSpeed_FCA4D1B14922B6AD566D098A08FCFF75;  // 0x0A70, size 0x4
    UPROPERTY() float __CustomProperty_SwimmingAmount_FCA4D1B14922B6AD566D098A08FCFF75;  // 0x0A74, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFishActor* FishOwner;  // 0x0A78, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDead;  // 0x0A80, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_CRE_EelFish_AnimBP(int32 EntryPoint);  // parameters 0x4
};
