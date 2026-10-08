// /Game/ThirdPartyAssets/AnimalsVol01/Wolf/Meshes/SK-Wolf_Tamed_AnimBP.SK-Wolf_Tamed_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x28D0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Wolf_Tamed_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;  // 0x0408, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x04A8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x0590, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0630, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x06D0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0750, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x07F0, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x0870, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0890, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x0998, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x09B8, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0AA0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0B20, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0BC0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0CA8, size 0xB0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0D58, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0E40, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0E70, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0F20, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0F68, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x12D0, size 0x368
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x1638, size 0x48
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x1680, size 0x38
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x16B8, size 0x50
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x1708, size 0xD0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x17D8, size 0x50
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x1830, size 0x830
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x2060, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x2080, size 0x20
    UPROPERTY() FAnimNode_SpringBone AnimGraphNode_SpringBone_1;  // 0x20A0, size 0x128
    UPROPERTY() FAnimNode_SpringBone AnimGraphNode_SpringBone;  // 0x21C8, size 0x128
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x22F0, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x2390, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x24E8, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x2510, size 0x80
    UPROPERTY() FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel;  // 0x2590, size 0x68
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x25F8, size 0x20
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x2618, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x2770, size 0x28
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x2798, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x27B8, size 0xA0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x2858, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x2880, size 0x28
    UPROPERTY() bool __CustomProperty_DoLookAt_6319260943E98A97A1D274899FD68379;  // 0x28A8, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_6319260943E98A97A1D274899FD68379;  // 0x28AC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x28B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x28C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x28C5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMovingSlowly;  // 0x28C6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSimulatedTail;  // 0x28C7, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSimulatedEars;  // 0x28C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldWagTail;  // 0x28C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SimulatedTailStrength;  // 0x28CC, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_BlendBoneByChannel_6CEF635346837043567061934D6C80AC();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_BlendBoneByChannel_6CEF635346837043567061934D6C80AC"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_BlendListByBool_82583A2441E8BE585C396DA07382CC16();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_BlendListByBool_82583A2441E8BE585C396DA07382CC16"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_BlendListByBool_EFDC29CA47D48CAD2DE92695D5E4876F();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_BlendListByBool_EFDC29CA47D48CAD2DE92695D5E4876F"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_0DCE362946FE5D4321542193B75B234C();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_0DCE362946FE5D4321542193B75B234C"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_869AFC1840E502E452F1AD8F0BBC2174();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_869AFC1840E502E452F1AD8F0BBC2174"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_914DBB1742AB4B96EDA2DC992A0FFCE7();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_914DBB1742AB4B96EDA2DC992A0FFCE7"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_D58F336540F8163D0F5BD0A48FFBFB0A();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_BlendSpacePlayer_D58F336540F8163D0F5BD0A48FFBFB0A"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_ControlRig_6319260943E98A97A1D274899FD68379();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_ControlRig_6319260943E98A97A1D274899FD68379"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_RigidBody_8B6F36E84AC90712E9D45C93950D667B();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_RigidBody_8B6F36E84AC90712E9D45C93950D667B"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_Tamed_AnimBP_AnimGraphNode_SequencePlayer_332F633242F9F96A1DA430A31A290DB7();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_Tamed_AnimBP_AnimGraphNode_SequencePlayer_332F633242F9F96A1DA430A31A290DB7"
    UFUNCTION() void ExecuteUbergraph_SK_Wolf_Tamed_AnimBP(int32 EntryPoint);  // parameters 0x4, named "ExecuteUbergraph_SK-Wolf_Tamed_AnimBP"
};
