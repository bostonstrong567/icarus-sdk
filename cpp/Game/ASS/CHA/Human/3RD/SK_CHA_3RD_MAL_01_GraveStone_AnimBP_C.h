// /Game/ASS/CHA/Human/3RD/SK_CHA_3RD_MAL_01_GraveStone_AnimBP.SK_CHA_3RD_MAL_01_GraveStone_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x3F0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CHA_3RD_MAL_01_GraveStone_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0328, size 0x30
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0358, size 0x90
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Gravestone_C* As_BP_Gravestone;  // 0x03E8, size 0x8, named "As BP Gravestone"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_CHA_3RD_MAL_01_GraveStone_AnimBP(int32 EntryPoint);  // parameters 0x4
};
