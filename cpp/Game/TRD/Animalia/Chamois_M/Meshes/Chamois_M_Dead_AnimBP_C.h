// /Game/TRD/Animalia/Chamois_M/Meshes/Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x694, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UChamois_M_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0328, size 0x158
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0480, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0500, size 0xA0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x05A0, size 0x28
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x05C8, size 0x90
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0658, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FakeVelocity;  // 0x0688, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_Chamois_M_Dead_AnimBP(int32 EntryPoint);  // parameters 0x4
};
