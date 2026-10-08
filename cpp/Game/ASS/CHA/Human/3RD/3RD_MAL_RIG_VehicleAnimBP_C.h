// /Game/ASS/CHA/Human/3RD/3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xE60, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_3RD_MAL_RIG_VehicleAnimBP_C : public UAnimInstance, public IAnim_VehicleLayerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x02C8, size 0x80
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_2;  // 0x0348, size 0x30
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;  // 0x0378, size 0x118
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0490, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0530, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0550, size 0x20
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0570, size 0x50
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;  // 0x05C0, size 0xC8
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;  // 0x0688, size 0xC0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0748, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x08A0, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x08C8, size 0x28
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x08F0, size 0x118
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0A08, size 0x50
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0A58, size 0x80
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x0AD8, size 0xC8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_1;  // 0x0BA0, size 0x30
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0BD0, size 0x30
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_1;  // 0x0C00, size 0xB0
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;  // 0x0CB0, size 0xB0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x0D60, size 0xC0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VehicleSpeed;  // 0x0E20, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AnimDelta;  // 0x0E24, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* VehicleRef;  // 0x0E28, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDriver;  // 0x0E30, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LHandSocketLocation;  // 0x0E34, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RHandSocketLocation;  // 0x0E40, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LookRot;  // 0x0E4C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimPitch;  // 0x0E58, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimYaw;  // 0x0E5C, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963();
    UFUNCTION() void ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
};
