// /Game/ASS/CRE/RockGolem/Juvie/RockGolemJuvenile_AnimBP.RockGolemJuvenile_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1CB4, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class URockGolemJuvenile_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x03D8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x03F8, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0500, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0520, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x05A0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x0688, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0728, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x07A8, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0828, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0910, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x09B0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0A50, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0AF0, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0B90, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0C78, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0CA8, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0D58, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0DA0, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0EF8, size 0x28
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0F20, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_2;  // 0x0F50, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x12B8, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x1620, size 0x48
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x1668, size 0x38
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x16A0, size 0xD0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x1770, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x17C0, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1810, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x18B0, size 0x50
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1900, size 0x368
    UPROPERTY() FVector __CustomProperty_Trace_Length_EBB123E4437188A233A649945133E1D0;  // 0x1C68, size 0xC
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_EBB123E4437188A233A649945133E1D0;  // 0x1C74, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_EBB123E4437188A233A649945133E1D0;  // 0x1C78, size 0x4
    UPROPERTY() FVector __CustomProperty_TargetLocation_A7B3552F4CB03A038964628860A9E781;  // 0x1C7C, size 0xC
    UPROPERTY() FVector __CustomProperty_TargetLocation_6978213944DE3ED258049480299605F7;  // 0x1C88, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRolling;  // 0x1C94, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectileTarget;  // 0x1C98, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUsingTongueAttack;  // 0x1CA4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x1CA5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x1CA8, size 0xC, named "Trace Length"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_BlendListByBool_0F223CFF4BA5D12A58F53F85434AC3BD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_BlendListByBool_155E73FD41A5673AC6FFA497496FFDC8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_BlendListByBool_8A591EAB4BA7D08C313A47A06F476E03();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_BlendListByBool_B2AF1DE54F56FBC249B9099AB3BD94EF();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_BlendSpacePlayer_5879795E418C2F7DFBDF6180EA8AF5EC();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_ControlRig_6978213944DE3ED258049480299605F7();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_ControlRig_A7B3552F4CB03A038964628860A9E781();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_RockGolemJuvenile_AnimBP_AnimGraphNode_ModifyBone_1B2B0BED483BB30CE17D7F9DC7E39075();
    UFUNCTION() void ExecuteUbergraph_RockGolemJuvenile_AnimBP(int32 EntryPoint);  // parameters 0x4
};
