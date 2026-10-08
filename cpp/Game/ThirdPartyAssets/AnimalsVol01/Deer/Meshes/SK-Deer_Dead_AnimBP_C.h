// /Game/ThirdPartyAssets/AnimalsVol01/Deer/Meshes/SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xC54, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Deer_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0328, size 0x30
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0358, size 0x90
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x03E8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0488, size 0x80
    UPROPERTY() FAnimNode_Trail AnimGraphNode_Trail;  // 0x0510, size 0x260
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0770, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0790, size 0x20
    UPROPERTY() FAnimNode_SpringBone AnimGraphNode_SpringBone_1;  // 0x07B0, size 0x128
    UPROPERTY() FAnimNode_SpringBone AnimGraphNode_SpringBone;  // 0x08D8, size 0x128
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0A00, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0B58, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0B80, size 0xA0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0C20, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FakeVelocity;  // 0x0C48, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_Deer_Dead_AnimBP(int32 EntryPoint);  // parameters 0x4, named "ExecuteUbergraph_SK-Deer_Dead_AnimBP"
};
