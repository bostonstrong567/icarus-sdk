// /Game/ASS/CRE/RockGolem/RockGolem_DetachedMesh_AnimBP.RockGolem_DetachedMesh_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x3C0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class URockGolem_DetachedMesh_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x02F8, size 0x90
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot Pose;  // 0x0388, size 0x38

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_RockGolem_DetachedMesh_AnimBP(int32 EntryPoint);  // parameters 0x4
};
