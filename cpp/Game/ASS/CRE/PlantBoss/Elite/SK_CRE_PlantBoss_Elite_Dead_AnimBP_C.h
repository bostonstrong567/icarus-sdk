// /Game/ASS/CRE/PlantBoss/Elite/SK_CRE_PlantBoss_Elite_Dead_AnimBP.SK_CRE_PlantBoss_Elite_Dead_AnimBP_C
// Derives from: UIcarusCorpseAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x628, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_PlantBoss_Elite_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0328, size 0x30
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x0358, size 0x90
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x03E8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0418, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x04C8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0510, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0558, size 0xD0

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_SK_CRE_PlantBoss_Elite_Dead_AnimBP(int32 EntryPoint);  // parameters 0x4
};
