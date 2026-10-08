// /Game/ASS/CRE/Raptor/Raptor_Rig_AnimBP.Raptor_Rig_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x18B0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class URaptor_Rig_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0408, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x04F0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0570, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0610, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x06F8, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0798, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0880, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0968, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0A08, size 0x80
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0A88, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0B58, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0BF8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0C18, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0D20, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0D40, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0DE0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0E10, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0EC0, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0F08, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1060, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1088, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x13F0, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x1438, size 0xD0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1508, size 0x368
    UPROPERTY() bool __CustomProperty_FourLeg_8BE6DE3840CE29EF8CD2CD8B7EE87A34;  // 0x1870, size 0x1
    UPROPERTY() float __CustomProperty_NeckScale_37C974F2442C7C07ABFFD4A14D44E9C8;  // 0x1874, size 0x4
    UPROPERTY() bool __CustomProperty_IsOnFourLegs_37C974F2442C7C07ABFFD4A14D44E9C8;  // 0x1878, size 0x1
    UPROPERTY() bool __CustomProperty_DoLookAt_37C974F2442C7C07ABFFD4A14D44E9C8;  // 0x1879, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_37C974F2442C7C07ABFFD4A14D44E9C8;  // 0x187C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Crouching;  // 0x1888, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DriftIntensity;  // 0x188C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* DriftParticle_L;  // 0x1890, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* DriftParticle_R;  // 0x1898, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<EPhysicalSurface>> DisallowedSurfaces;  // 0x18A0, size 0x10

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_2ACFC64A4562C5720FD7F29239768D65();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_BlendListByBool_84698EF9462E74306130E1AF478D314E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_BlendSpacePlayer_45B302644035215ABE66D7844FA5A1ED();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_Raptor_Rig_AnimBP_AnimGraphNode_BlendSpacePlayer_50AB0677404001641A73829B2F6E8E39();
    UFUNCTION() void ExecuteUbergraph_Raptor_Rig_AnimBP(int32 EntryPoint);  // parameters 0x4
};
