// /Game/ASS/CHA/Human/3RD/3RD_MAL_MountedAnimBP.3RD_MAL_MountedAnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x12D4, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_3RD_MAL_MountedAnimBP_C : public UAnimInstance, public IAnim_VehicleLayerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x02C8, size 0x158
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;  // 0x0420, size 0x118
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_2;  // 0x0538, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0568, size 0x368
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x08D0, size 0x80
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0950, size 0x368
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x0CB8, size 0xC8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0D80, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0E00, size 0x80
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x0E80, size 0x118
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_1;  // 0x0F98, size 0x30
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0FC8, size 0x30
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_1;  // 0x0FF8, size 0xB0
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;  // 0x10A8, size 0xB0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1158, size 0xC0
    UPROPERTY() float __CustomProperty_VerletStrength_F17B49B14661E62C569CBAA56F4B29C5;  // 0x1218, size 0x4
    UPROPERTY() FVector __CustomProperty_RelativeFeetOffset_F17B49B14661E62C569CBAA56F4B29C5;  // 0x121C, size 0xC
    UPROPERTY() float __CustomProperty_VerletStrength_6654F16B430AA80A67797180F44F704C;  // 0x1228, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtDirection_6654F16B430AA80A67797180F44F704C;  // 0x122C, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_6654F16B430AA80A67797180F44F704C;  // 0x1238, size 0x1
    UPROPERTY() FVector __CustomProperty_HandSpaceTargetLocation_6654F16B430AA80A67797180F44F704C;  // 0x123C, size 0xC
    UPROPERTY() FVector __CustomProperty_RelativeHandsOffset_6654F16B430AA80A67797180F44F704C;  // 0x1248, size 0xC
    UPROPERTY() float __CustomProperty_SpineCurlAmount_6654F16B430AA80A67797180F44F704C;  // 0x1254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MountSpeed;  // 0x1258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AnimDelta;  // 0x125C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LookRot;  // 0x1260, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimPitch;  // 0x126C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimYaw;  // 0x1270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* MountCharacterRef;  // 0x1278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtLocation;  // 0x1280, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmoothDirection;  // 0x128C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastRotation;  // 0x1290, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TurnRate;  // 0x129C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeFeetOffset;  // 0x12A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeHandsOffset;  // 0x12AC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandsTargetLocation;  // 0x12B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtDirection;  // 0x12C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerletStrength;  // 0x12D0, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_MountedAnimBP_AnimGraphNode_ControlRig_6654F16B430AA80A67797180F44F704C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_MountedAnimBP_AnimGraphNode_TwoWayBlend_3FCC041B44867FFDEEAC279126665C3E();
    UFUNCTION() void ExecuteUbergraph_3RD_MAL_MountedAnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateTurnRate();
    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
};
