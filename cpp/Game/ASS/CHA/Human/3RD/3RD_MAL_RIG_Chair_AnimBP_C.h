// /Game/ASS/CHA/Human/3RD/3RD_MAL_RIG_Chair_AnimBP.3RD_MAL_RIG_Chair_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xCBD, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_3RD_MAL_RIG_Chair_AnimBP_C : public UAnimInstance, public IAnim_VehicleLayerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x02C8, size 0x158
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0420, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x04A0, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0540, size 0x50
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x0590, size 0xC8
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;  // 0x0658, size 0x118
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_2;  // 0x0770, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x07A0, size 0x80
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x0820, size 0x118
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_1;  // 0x0938, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0968, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x09E8, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0A08, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0A28, size 0x30
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_1;  // 0x0A58, size 0xB0
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;  // 0x0B08, size 0xB0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x0BB8, size 0xC0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDriver;  // 0x0C78, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* VehicleRef;  // 0x0C80, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimPitch;  // 0x0C88, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimYaw;  // 0x0C8C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LookRot;  // 0x0C90, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AnimDelta;  // 0x0C9C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VehicleSpeed;  // 0x0CA0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LHandSocketLocation;  // 0x0CA4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RHandSocketLocation;  // 0x0CB0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Shake;  // 0x0CBC, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP_AnimGraphNode_TwoWayBlend_C412B1A04C8A3F73B4E7E89ED8F54F8C();
    UFUNCTION() void ExecuteUbergraph_3RD_MAL_RIG_Chair_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
};
