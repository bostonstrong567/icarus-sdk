// /Game/ASS/CRE/Fish/Fish01/SK_CRE_PAS_Fish01_Held_AnimBP.SK_CRE_PAS_Fish01_Held_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xD08, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_PAS_Fish01_Held_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x02F8, size 0x20
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x0320, size 0x830
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0B50, size 0x48
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0B98, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0BB8, size 0xD0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0C88, size 0x80

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_PAS_Fish01_Held_AnimBP(int32 EntryPoint);  // parameters 0x4
};
