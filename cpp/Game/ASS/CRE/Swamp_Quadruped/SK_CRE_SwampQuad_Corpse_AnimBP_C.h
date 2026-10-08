// /Game/ASS/CRE/Swamp_Quadruped/SK_CRE_SwampQuad_Corpse_AnimBP.SK_CRE_SwampQuad_Corpse_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x9EC, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_SwampQuad_Corpse_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0328, size 0x90
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x03B8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0458, size 0x80
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x04D8, size 0x30
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0508, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0528, size 0x20
    UPROPERTY() FAnimNode_SpringBone AnimGraphNode_SpringBone_1;  // 0x0548, size 0x128
    UPROPERTY() FAnimNode_SpringBone AnimGraphNode_SpringBone;  // 0x0670, size 0x128
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0798, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x08F0, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0918, size 0xA0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x09B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FakeVelocity;  // 0x09E0, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_SwampQuad_Corpse_AnimBP(int32 EntryPoint);  // parameters 0x4
};
