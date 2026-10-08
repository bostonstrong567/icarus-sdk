// /Game/ASS/DEP/SK_DEP_Radar_03_AnimBP_Copypose.SK_DEP_Radar_03_AnimBP_Copypose_C
// Derives from: UAnimInstance > UObject
// size 0x4D0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_Radar_03_AnimBP_Copypose_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;  // 0x02F8, size 0x1D8

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_DEP_Radar_03_AnimBP_Copypose(int32 EntryPoint);  // parameters 0x4
};
