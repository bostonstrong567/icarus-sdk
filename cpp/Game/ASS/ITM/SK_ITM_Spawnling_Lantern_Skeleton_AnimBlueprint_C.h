// /Game/ASS/ITM/SK_ITM_Spawnling_Lantern_Skeleton_AnimBlueprint.SK_ITM_Spawnling_Lantern_Skeleton_AnimBlueprint_C
// Derives from: UAnimInstance > UObject
// size 0xB50, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ITM_Spawnling_Lantern_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x02F8, size 0x20
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x0320, size 0x830

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_ITM_Spawnling_Lantern_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
