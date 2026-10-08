// /Game/Prototypes/SpaceStationPlayer/Player/Animations/3RD_CHA_RIG_Space_AnimBP.3RD_CHA_RIG_Space_AnimBP_C
// Derives from: UIcarusCharacterAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x2CC0, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_3RD_CHA_RIG_Space_AnimBP_C : public UIcarusCharacterAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;  // 0x02E8, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;  // 0x03F0, size 0x108
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x04F8, size 0xC0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;  // 0x05B8, size 0x108
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;  // 0x06C0, size 0xC8
    UPROPERTY() FAnimNode_LegIK AnimGraphNode_LegIK_1;  // 0x0788, size 0xF8
    UPROPERTY() FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1;  // 0x0880, size 0x1E0
    UPROPERTY() FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK;  // 0x0A60, size 0x1E0
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x0C40, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;  // 0x0C60, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x0CE0, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;  // 0x0D00, size 0x80
    UPROPERTY() FAnimNode_LegIK AnimGraphNode_LegIK;  // 0x0D80, size 0xF8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0E78, size 0x48
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x0EC0, size 0xC8
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization;  // 0x0F88, size 0x70
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;  // 0x0FF8, size 0xC0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x10B8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x10E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x1110, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x1138, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x1160, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x1188, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;  // 0x11B0, size 0x80
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1230, size 0xC0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x12F0, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x1370, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x13F0, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x1410, size 0x20
    UPROPERTY() FAnimNode_ExtensionLimit AnimGraphNode_ExtensionLimit;  // 0x1430, size 0xD8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;  // 0x1508, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x1610, size 0x108
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1718, size 0x30
    UPROPERTY() FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_2;  // 0x1748, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x17E8, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x1868, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;  // 0x18E8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x19D0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_1;  // 0x1AB8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x1B58, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x1BD8, size 0x80
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x1C58, size 0xB0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x1D08, size 0xE8
    UPROPERTY() FAnimNode_SpeedWarping3D AnimGraphNode_SpeedWarping3D;  // 0x1DF0, size 0xF0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x1EE0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x1FC8, size 0xE8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x20B0, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x21B8, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x21D8, size 0xE8
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x22C0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x22E0, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x23E8, size 0x108
    UPROPERTY() FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;  // 0x24F0, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x2590, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x2610, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x2690, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x26C0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x2740, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x2770, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EffectorLocationRight;  // 0x2820, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector JointTargetLocationRight;  // 0x282C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EffectorLocationLeft;  // 0x2838, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector JointTargetLocationLeft;  // 0x2844, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform EffectorTransformLeft;  // 0x2850, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform EffectorTransformRight;  // 0x2880, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) HabHandStateStruct HandStateLeft;  // 0x28B0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) HabHandStateStruct HandStateRight;  // 0x28E0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpaceBase> LocomotionBS;  // 0x2910, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimOverlayState OverlayState;  // 0x2938, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmNormalisedTimeRight;  // 0x293C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmNormalisedTimeLeft;  // 0x2940, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ArmInterpSpeed;  // 0x2944, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float _6DOFMovement;  // 0x2948, size 0x4, named "6DOFMovement"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x294C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocalDirection;  // 0x2950, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FootEffectorLocationRight;  // 0x2954, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FootEffectorLocationLeft;  // 0x2960, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator HeadRotation;  // 0x296C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LegIKRatioRight;  // 0x2978, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LegIKRatioLeft;  // 0x297C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LegIKDistance;  // 0x2980, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HorizontalAngle;  // 0x2984, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerticalAngle;  // 0x2988, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFocusableData CurrentFocusableData;  // 0x2990, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EnableIKLeft;  // 0x2B80, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) HabHandStateStruct FutureHandStateLeft;  // 0x2B88, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) HabHandStateStruct FutureHandStateRight;  // 0x2BB8, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PredictedLocalAcceleration;  // 0x2BE8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MovementMarker;  // 0x2BF4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandRelativeMarkerOrigin;  // 0x2C00, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CSMovementDirection;  // 0x2C0C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator MovementOrientationOffset;  // 0x2C18, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MovementDirState;  // 0x2C24, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementDirStateBlendTime;  // 0x2C28, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerticalMovementBlend;  // 0x2C2C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SpeedTransition;  // 0x2C30, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpeedScaling;  // 0x2C34, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EHandedness> Handedness;  // 0x2C38, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator EffectorRotationRight;  // 0x2C3C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator EffectorRotationLeft;  // 0x2C48, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MSMovementDirection;  // 0x2C54, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator InvertedMovementOrientationOffset;  // 0x2C60, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EnableIKRight;  // 0x2C6C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TouchOrGripLeft;  // 0x2C70, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TouchOrGripRight;  // 0x2C71, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TempGripTransition;  // 0x2C74, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GripMovementLeft;  // 0x2C78, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GripMovementRight;  // 0x2C7C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GripLerpLeft;  // 0x2C80, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GripLerpRight;  // 0x2C84, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastGripPosLeft;  // 0x2C88, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastGripPosRight;  // 0x2C94, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GrippingGripTarget;  // 0x2CA0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MarkerPlacementTime;  // 0x2CA4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MarkerSpeedAverage;  // 0x2CA8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> CachedAnims;  // 0x2CB0, size 0x10

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION(BlueprintCallable) float CalculateDistanceFromMarker();  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_530185734784C9A1320330BC59F6F08D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_97C53E4E4D99883350EF4FA024CBE2ED();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_C96CAF9F4D5BBC88BBFCAB92A2D2D612();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_EC390B23494B30572AB6088B93623AB9();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP_AnimGraphNode_TransitionResult_F58A755B4146E0ED69BBD599302F2AE0();
    UFUNCTION() void ExecuteUbergraph_3RD_CHA_RIG_Space_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ESpaceHandGripMode> GetHandMode(bool ForLeftHand) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) HabHandStateStruct GetHandState(bool ForLeftHand) const;  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetHandTransform(bool ForLeftHand, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsHandReaching(bool ForLeftHand, bool& Return_Value) const;  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) void OnFocusedItemUpdated(AIcarusItem* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B7BDDA3108(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlaceMovementMarker();
    UFUNCTION(BlueprintCallable) void UpdateFocusedItemState();
    UFUNCTION(BlueprintCallable) void UpdateHandDistance(bool ForLeftHand);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateHandIK(bool ForLeftHand);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateLegIK(bool ForLeftLeg);  // parameters 0x1
};
