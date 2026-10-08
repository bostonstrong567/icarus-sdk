// /Game/ASS/DEP/SK_DEP_GEN_WaterWheel_AnimBP.SK_DEP_GEN_WaterWheel_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x37D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_GEN_WaterWheel_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x02C8, size 0x80
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0348, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Active;  // 0x037C, size 0x1, named "Is Active"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DEP_GEN_WaterWheel_AnimBP(int32 EntryPoint);  // parameters 0x4
};
