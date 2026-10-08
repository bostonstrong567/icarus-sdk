// /Game/ASS/CRE/Ape/SK_CRE_Ape_AnimBP.SK_CRE_Ape_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x14A0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Ape_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x03D8, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x04A8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0590, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0678, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x06F8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0798, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0838, size 0xE8
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0920, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0970, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0A10, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0AB0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0B98, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0C80, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0D20, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0D50, size 0xB0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0E00, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0E30, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0E78, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0FD0, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0FF8, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x1098, size 0x50
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x10E8, size 0x368
    UPROPERTY() FVector __CustomProperty_TargetLocation_F83B696C4A7EB26632AFE285FB302659;  // 0x1450, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x145C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCarryingLog;  // 0x145D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHangingInTree;  // 0x145E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOnTrunk;  // 0x145F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x1460, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastRotation;  // 0x1464, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x1470, size 0x30

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendListByBool_9F56B4E94B5244A93D551A9CC36D131A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendListByBool_C6BFFEF34D9C41AB7354F0B4E49611D2();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendSpacePlayer_CAE9046C494769BFA73232834A47DD9C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_BlendSpacePlayer_FF04141440AAA3CDA65C07A5449AC4B1();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Ape_AnimBP_AnimGraphNode_ControlRig_F83B696C4A7EB26632AFE285FB302659();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Ape_AnimBP(int32 EntryPoint);  // parameters 0x4
};
