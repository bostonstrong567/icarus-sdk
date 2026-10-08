// /Game/ASS/CRE/Striker/Striker_AnimBP.Striker_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x197C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UStriker_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x03D8, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0420, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0578, size 0x28
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x05A0, size 0xE8
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0688, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0758, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0840, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x08C0, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0940, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0A28, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0AC8, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0B68, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0B88, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0C90, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0CB0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0D98, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0E38, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0ED8, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0F78, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1060, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1090, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1140, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x14A8, size 0x48
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x14F0, size 0x30
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x1520, size 0xD0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x15F0, size 0x368
    UPROPERTY() bool __CustomProperty_FourLeg_23E3F53C420984654CD55EBB31079406;  // 0x1958, size 0x1
    UPROPERTY() bool __CustomProperty_IsOnFourLegs_B166AD4D42FDC9EC05BA81AAC6EEF505;  // 0x1959, size 0x1
    UPROPERTY() bool __CustomProperty_DoLookAt_B166AD4D42FDC9EC05BA81AAC6EEF505;  // 0x195A, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_B166AD4D42FDC9EC05BA81AAC6EEF505;  // 0x195C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x1968, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x1974, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x1975, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PostureBlendTime;  // 0x1978, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Striker_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_80B01B0E459232C224F9D3B97409B338();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Striker_AnimBP_AnimGraphNode_BlendListByBool_9BBB42B8453F78FF2E5A098432E26336();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Striker_AnimBP_AnimGraphNode_BlendSpacePlayer_36B57B7E4179BC5115B56CA83F2BE932();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Striker_AnimBP_AnimGraphNode_BlendSpacePlayer_60D22C94408EAFE16F2438B377506C12();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Striker_AnimBP_AnimGraphNode_BlendSpacePlayer_8E343E2A4531B14277DD0199E2CE5AC6();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Striker_AnimBP_AnimGraphNode_ControlRig_B166AD4D42FDC9EC05BA81AAC6EEF505();
    UFUNCTION() void ExecuteUbergraph_Striker_AnimBP(int32 EntryPoint);  // parameters 0x4
};
