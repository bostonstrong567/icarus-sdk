// /Game/ThirdPartyAssets/AnimalsVol01/Wolf/Meshes/SK-Wolf_AnimBP.SK-Wolf_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1B4D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Wolf_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0488, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0528, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x05A8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x05C8, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x06D0, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x06F0, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x07D8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0858, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x08F8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0998, size 0xB0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0A48, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0B30, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0B60, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0C10, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0C58, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0FC0, size 0x368
    UPROPERTY() FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;  // 0x1328, size 0x90
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x13B8, size 0xA0
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x1458, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1478, size 0x20
    UPROPERTY() FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;  // 0x14A0, size 0x440
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x18E0, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1908, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x19A8, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1B00, size 0x28
    UPROPERTY() bool __CustomProperty_DoLookAt_9B4ACD6D4D13BDB9189713AAB29F2301;  // 0x1B28, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_9B4ACD6D4D13BDB9189713AAB29F2301;  // 0x1B2C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x1B38, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x1B44, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x1B45, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SupportsRagdoll;  // 0x1B46, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocomotionMultiplier;  // 0x1B48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MakeJawFloppy;  // 0x1B4C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_AnimBP_AnimGraphNode_BlendListByBool_4126597A410D8E2EE1B0C98E39852809();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendListByBool_4126597A410D8E2EE1B0C98E39852809"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_AnimBP_AnimGraphNode_BlendListByBool_6571ACF8419A8566BC1131A6379BBB1D();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendListByBool_6571ACF8419A8566BC1131A6379BBB1D"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_546C95C6415776AEF547859C8D181151();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_546C95C6415776AEF547859C8D181151"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_5A99F42445C3117E4C8398A977885D44();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_5A99F42445C3117E4C8398A977885D44"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Wolf_AnimBP_AnimGraphNode_ControlRig_9B4ACD6D4D13BDB9189713AAB29F2301();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_ControlRig_9B4ACD6D4D13BDB9189713AAB29F2301"
    UFUNCTION() void ExecuteUbergraph_SK_Wolf_AnimBP(int32 EntryPoint);  // parameters 0x4, named "ExecuteUbergraph_SK-Wolf_AnimBP"
};
