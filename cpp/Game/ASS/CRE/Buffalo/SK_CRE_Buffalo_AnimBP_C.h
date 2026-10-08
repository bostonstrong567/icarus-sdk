// /Game/ASS/CRE/Buffalo/SK_CRE_Buffalo_AnimBP.SK_CRE_Buffalo_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1BE8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Buffalo_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0408, size 0x48
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0450, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0538, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x05D8, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0658, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0740, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x07E0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0800, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x0908, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0928, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0958, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0A08, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0D70, size 0x368
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x10E0, size 0x830
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x1910, size 0x20
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1930, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1958, size 0x158
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1AB0, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1AD0, size 0xA0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1B70, size 0x28
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_D5EE94C3443D0C1BBDEEADAD787DE94B;  // 0x1B98, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_D5EE94C3443D0C1BBDEEADAD787DE94B;  // 0x1B9C, size 0x4
    UPROPERTY() float __CustomProperty_AdditionalTargetHeight_D5EE94C3443D0C1BBDEEADAD787DE94B;  // 0x1BA0, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_D5EE94C3443D0C1BBDEEADAD787DE94B;  // 0x1BA4, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_D5EE94C3443D0C1BBDEEADAD787DE94B;  // 0x1BB0, size 0x1
    UPROPERTY() float __CustomProperty_GroundHeightOffset_7E479D5D493AE73E75285194ED9C8E2F;  // 0x1BB4, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_7E479D5D493AE73E75285194ED9C8E2F;  // 0x1BB8, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_7E479D5D493AE73E75285194ED9C8E2F;  // 0x1BBC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastRotation;  // 0x1BC0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator AngularVelocity;  // 0x1BCC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GroundHeightOffset;  // 0x1BD8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtTargetHeightOffset;  // 0x1BDC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSimulatedTail;  // 0x1BE0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SimulatedTailStrength;  // 0x1BE4, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Buffalo_AnimBP_AnimGraphNode_BlendListByBool_B5B27E9A41D5799F367C3AA597C1069E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Buffalo_AnimBP_AnimGraphNode_BlendSpacePlayer_98F4DD894573EA9CE5E87097F1D9FFC5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Buffalo_AnimBP_AnimGraphNode_BlendSpacePlayer_AE05D4CF490DE1222C8CCE9DCDABE6F3();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Buffalo_AnimBP_AnimGraphNode_RigidBody_AAD2BE104EFD55722C5B1F8286416AAA();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Buffalo_AnimBP(int32 EntryPoint);  // parameters 0x4
};
