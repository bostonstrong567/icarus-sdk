// /Game/ASS/CRE/Ape/SK_CRE_Yeti_AnimBP.SK_CRE_Yeti_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x119D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Yeti_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0408, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x04A8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0590, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0678, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0748, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0830, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0860, size 0xB0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0910, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x09B0, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0B08, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0B30, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0B78, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0CD0, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0CF8, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1060, size 0xA0
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x1100, size 0x90
    UPROPERTY() FVector __CustomProperty_TargetLocation_8A41207E40371F12298718941552021A;  // 0x1190, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x119C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Yeti_AnimBP_AnimGraphNode_BlendListByBool_DB368410408F9D8BECAFA0B10BA2B1A8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Yeti_AnimBP_AnimGraphNode_BlendSpacePlayer_BEA28F2642685939297E4AB9431669CA();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Yeti_AnimBP_AnimGraphNode_ControlRig_8A41207E40371F12298718941552021A();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Yeti_AnimBP(int32 EntryPoint);  // parameters 0x4
};
