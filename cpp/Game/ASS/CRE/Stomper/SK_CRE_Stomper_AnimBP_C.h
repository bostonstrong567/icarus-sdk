// /Game/ASS/CRE/Stomper/SK_CRE_Stomper_AnimBP.SK_CRE_Stomper_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1628, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Stomper_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0560, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05A8, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0700, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x07E8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x08D0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x09B8, size 0xE8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0AA0, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0BA8, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0BC8, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0C98, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0D38, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0DD8, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0DF8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0E28, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0ED8, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0F00, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0F28, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1290, size 0x368
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_42D09B0C4E09BC6193861B87A2FFDDD2;  // 0x15F8, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_42D09B0C4E09BC6193861B87A2FFDDD2;  // 0x15FC, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_42D09B0C4E09BC6193861B87A2FFDDD2;  // 0x1600, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_42D09B0C4E09BC6193861B87A2FFDDD2;  // 0x160C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x1610, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x161C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x161D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocoPlayRate;  // 0x1620, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IdleAnimSpeedLimit;  // 0x1624, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Stomper_AnimBP_AnimGraphNode_BlendListByBool_DC8644AC41E4C2CC5FFFD3B0FF3D32A5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Stomper_AnimBP_AnimGraphNode_BlendSpacePlayer_0F10689E4C747985FE4D07830E73F895();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Stomper_AnimBP_AnimGraphNode_BlendSpacePlayer_2EDCE8D24544D9F45E9A04A5C6FD8E4B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Stomper_AnimBP_AnimGraphNode_BlendSpacePlayer_8CBC88E64B487920131C2A8FD1EA4BB7();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Stomper_AnimBP_AnimGraphNode_BlendSpacePlayer_D552D57B41652CFB2048B7BA50042D5F();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Stomper_AnimBP(int32 EntryPoint);  // parameters 0x4
};
