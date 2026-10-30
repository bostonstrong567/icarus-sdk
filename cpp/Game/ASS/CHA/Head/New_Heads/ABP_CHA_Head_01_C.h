// /Game/ASS/CHA/Head/New_Heads/ABP_CHA_Head_01.ABP_CHA_Head_01_C
// Derives from: UAnimInstance > UObject
// size 0x8A9, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UABP_CHA_Head_01_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_1;  // 0x02F8, size 0x1D8
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x04D0, size 0xC0
    UPROPERTY() FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;  // 0x0590, size 0x78
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x0608, size 0xC8
    UPROPERTY() FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;  // 0x06D0, size 0x1D8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x08A8, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CHA_Head_01_AnimGraphNode_TwoWayBlend_A729D015492191C80151B9A6641D10B9();
    UFUNCTION() void ExecuteUbergraph_ABP_CHA_Head_01(int32 EntryPoint);  // parameters 0x4
};
