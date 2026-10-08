// /Game/ASS/CHA/1ST/1ST_NewRig/1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xF92, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_1ST_CHA_RIG_VehicleAnimBP_C : public UAnimInstance, public IAnim_VehicleLayerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_2;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;  // 0x02F8, size 0x118
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_1;  // 0x0410, size 0x30
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x0440, size 0x118
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0558, size 0xA0
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x05F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0620, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0648, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0670, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0698, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0718, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0748, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x07C8, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x07F8, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0848, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0878, size 0xB0
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x0928, size 0xC8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x09F0, size 0x80
    UPROPERTY() FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1;  // 0x0A70, size 0x1E0
    UPROPERTY() FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK;  // 0x0C50, size 0x1E0
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0E30, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0E50, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0E70, size 0x30
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;  // 0x0EA0, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaT;  // 0x0F50, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDriver;  // 0x0F54, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* VehicleRef;  // 0x0F58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VehicleSpeed;  // 0x0F60, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SteeringValue;  // 0x0F64, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TotalSteeringAngle;  // 0x0F68, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LHandSocketLocation;  // 0x0F6C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RHandSocketLocation;  // 0x0F78, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SteeringAngle;  // 0x0F84, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentOriginAngle;  // 0x0F88, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SteeringSpeed;  // 0x0F8C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsTurningRight;  // 0x0F90, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsTurningLeft;  // 0x0F91, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82();
    UFUNCTION() void ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
};
