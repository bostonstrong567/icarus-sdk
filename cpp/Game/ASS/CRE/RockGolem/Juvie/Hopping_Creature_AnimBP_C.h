// /Game/ASS/CRE/RockGolem/Juvie/Hopping_Creature_AnimBP.Hopping_Creature_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x18F0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UHopping_Creature_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x03D8, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0458, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x04D8, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0558, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0640, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0728, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x07C8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0868, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0908, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x09A8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x09D8, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0A88, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0AD0, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0C28, size 0x28
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0C50, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_2;  // 0x0C80, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0FE8, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x1350, size 0x48
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x1398, size 0x38
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x13D0, size 0xD0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x14A0, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x14F0, size 0x50
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1540, size 0x368
    UPROPERTY() FVector __CustomProperty_Trace_Length_6FCABF334B187ED24B40679D7E92C78D;  // 0x18A8, size 0xC
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_6FCABF334B187ED24B40679D7E92C78D;  // 0x18B4, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_6FCABF334B187ED24B40679D7E92C78D;  // 0x18B8, size 0x4
    UPROPERTY() FVector __CustomProperty_TargetLocation_A4DF39C94220C7CAB2672FB3CA16AB18;  // 0x18BC, size 0xC
    UPROPERTY() FVector __CustomProperty_TargetLocation_C9258047466DA101EA3E418B64061A07;  // 0x18C8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectileTarget;  // 0x18D4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUsingTongueAttack;  // 0x18E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x18E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x18E4, size 0xC, named "Trace Length"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Hopping_Creature_AnimBP_AnimGraphNode_BlendListByBool_A83A034C4960CB2425C0E6BE6250B99D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Hopping_Creature_AnimBP_AnimGraphNode_BlendListByBool_AC85F78F4C4684B8DAC3278919B19A12();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Hopping_Creature_AnimBP_AnimGraphNode_BlendListByBool_BE745AC348C909BC46ED0683BAB6D2F3();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Hopping_Creature_AnimBP_AnimGraphNode_BlendListByBool_F6CD21F54A825F312AD8AD96189955E6();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Hopping_Creature_AnimBP_AnimGraphNode_BlendSpacePlayer_BCA9C29E4D0DBB8B8BB5218D565EBE3B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Hopping_Creature_AnimBP_AnimGraphNode_ControlRig_A4DF39C94220C7CAB2672FB3CA16AB18();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Hopping_Creature_AnimBP_AnimGraphNode_ControlRig_C9258047466DA101EA3E418B64061A07();
    UFUNCTION() void ExecuteUbergraph_Hopping_Creature_AnimBP(int32 EntryPoint);  // parameters 0x4
};
