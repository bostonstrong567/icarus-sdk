// /Game/ASS/ITM/SK_ITM_Lure_Held_AnimBP.SK_ITM_Lure_Held_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xC14, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ITM_Lure_Held_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x02F8, size 0x20
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x0320, size 0x830
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x0B50, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve Custom_Curve;  // 0x0B80, size 0x88, named "Custom Curve"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HorizontalForce;  // 0x0C08, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_ITM_Lure_Held_AnimBP(int32 EntryPoint);  // parameters 0x4
};
