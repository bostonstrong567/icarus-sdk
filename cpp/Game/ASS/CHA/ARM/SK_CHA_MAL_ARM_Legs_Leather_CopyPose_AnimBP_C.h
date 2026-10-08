// /Game/ASS/CHA/ARM/SK_CHA_MAL_ARM_Legs_Leather_CopyPose_AnimBP.SK_CHA_MAL_ARM_Legs_Leather_CopyPose_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xD40, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CHA_MAL_ARM_Legs_Leather_CopyPose_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;  // 0x02F8, size 0x1D8
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x04D0, size 0x830
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0D00, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0D20, size 0x20

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CHA_MAL_ARM_Legs_Leather_CopyPose_AnimBP(int32 EntryPoint);  // parameters 0x4
};
