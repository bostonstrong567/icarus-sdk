// /Game/ASS/CHA/Human/3RD/CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xE9D, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UCHA_3RD_MAL_RIG_DropShipAnimBP_C : public UAnimInstance, public IAnim_VehicleLayerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x02C8, size 0x50
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0318, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0398, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0438, size 0x158
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;  // 0x0590, size 0x118
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_2;  // 0x06A8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x06D8, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0778, size 0x50
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x07C8, size 0xC8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0890, size 0x80
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0910, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0960, size 0xA0
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x0A00, size 0x118
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_1;  // 0x0B18, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0B48, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0BC8, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0BE8, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0C08, size 0x30
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_1;  // 0x0C38, size 0xB0
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;  // 0x0CE8, size 0xB0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x0D98, size 0xC0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDriver;  // 0x0E58, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* VehicleRef;  // 0x0E60, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimPitch;  // 0x0E68, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimYaw;  // 0x0E6C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LookRot;  // 0x0E70, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AnimDelta;  // 0x0E7C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VehicleSpeed;  // 0x0E80, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LHandSocketLocation;  // 0x0E84, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RHandSocketLocation;  // 0x0E90, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Shake;  // 0x0E9C, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38();
    UFUNCTION() void ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
};
