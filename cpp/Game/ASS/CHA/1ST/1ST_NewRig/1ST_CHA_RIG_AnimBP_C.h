// /Game/ASS/CHA/1ST/1ST_NewRig/1ST_CHA_RIG_AnimBP.1ST_CHA_RIG_AnimBP_C
// Derives from: UIcarusCharacterAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x4820, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_1ST_CHA_RIG_AnimBP_C : public UIcarusCharacterAnimInstance, public IAnim_VehicleLayerInterface_C, public IWeaponAnimationInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30;  // 0x02E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29;  // 0x0310, size 0x28
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0338, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_19;  // 0x0420, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0450, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_18;  // 0x0538, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_4;  // 0x0568, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_7;  // 0x0618, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;  // 0x0660, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x07B8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28;  // 0x07E0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27;  // 0x0808, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26;  // 0x0830, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25;  // 0x0858, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24;  // 0x0880, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23;  // 0x08A8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22;  // 0x08D0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21;  // 0x08F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20;  // 0x0920, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19;  // 0x0948, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;  // 0x0970, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;  // 0x0998, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;  // 0x09C0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;  // 0x09E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;  // 0x0A10, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;  // 0x0A38, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x0A60, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x0A88, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x0AB0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x0AD8, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17;  // 0x0B00, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_17;  // 0x0B80, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8;  // 0x0BB0, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16;  // 0x0C50, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15;  // 0x0CD0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_16;  // 0x0D50, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14;  // 0x0D80, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_15;  // 0x0E00, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;  // 0x0E30, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_14;  // 0x0EB0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_3;  // 0x0EE0, size 0xB0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_13;  // 0x0F90, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x0FC0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x0FE8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x1010, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x1038, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;  // 0x1060, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_12;  // 0x10E0, size 0x30
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2;  // 0x1110, size 0xC8
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7;  // 0x11D8, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6;  // 0x1228, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_11;  // 0x1278, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;  // 0x12A8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_10;  // 0x1328, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x1358, size 0xB0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_9;  // 0x1408, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;  // 0x1438, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_8;  // 0x14B8, size 0x30
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;  // 0x14E8, size 0xC8
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5;  // 0x15B0, size 0x50
    UPROPERTY() FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;  // 0x1600, size 0xC8
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4;  // 0x16C8, size 0x50
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;  // 0x1718, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;  // 0x1738, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;  // 0x1758, size 0x108
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;  // 0x1860, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7;  // 0x18E0, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;  // 0x1980, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x19D0, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;  // 0x1A20, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x1AC0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x1B40, size 0xA0
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization_1;  // 0x1BE0, size 0x70
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x1C50, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x1C80, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x1D00, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x1D80, size 0xA0
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization;  // 0x1E20, size 0x70
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x1E90, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x1EC0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x1F40, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x1F70, size 0x80
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x1FF0, size 0xC0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x20B0, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x2150, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x21D0, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x2200, size 0x28
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_1;  // 0x2228, size 0xB0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_2;  // 0x22D8, size 0x30
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;  // 0x2308, size 0x118
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;  // 0x2420, size 0x108
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_1;  // 0x2528, size 0x38
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x2560, size 0xD0
    UPROPERTY() FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;  // 0x2630, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x26E0, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x2708, size 0x158
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x2860, size 0xE8
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;  // 0x2948, size 0xC0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_1;  // 0x2A08, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x2A38, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x2A60, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x2A88, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x2AB0, size 0x28
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x2AD8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x2B08, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x2B88, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x2BB8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x2C38, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x2C68, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x2CE8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x2D18, size 0xB0
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x2DC8, size 0x38
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x2E00, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x2ED0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x2F70, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x3010, size 0x50
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x3060, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x3080, size 0x20
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_6;  // 0x30A0, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_5;  // 0x30E8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_4;  // 0x3130, size 0x48
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;  // 0x3178, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x3280, size 0x108
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x3388, size 0x50
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x33D8, size 0x118
    UPROPERTY() FAnimNode_Fabrik AnimGraphNode_Fabrik;  // 0x34F0, size 0x190
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_3;  // 0x3680, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_2;  // 0x36C8, size 0x48
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x3710, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x3818, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x3838, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x3858, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x3960, size 0x108
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x3A68, size 0x48
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x3AB0, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x3AD0, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x3AF0, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x3B20, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x3BC0, size 0xE8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x3CA8, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x3CF0, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x3E48, size 0x28
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x3E70, size 0xC0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x3F30, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x3F58, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningBPCharacter;  // 0x3F80, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentVelocity;  // 0x3F88, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EasedCurrentVelocity;  // 0x3F8C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRangedWeaponData RangedWeaponData;  // 0x3F90, size 0xD0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x4060, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargePower;  // 0x4064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsReloading;  // 0x4068, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFiring;  // 0x4069, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpaceBase> LocomotionBS;  // 0x4070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimOverlayState OverlayState;  // 0x4098, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCrouched;  // 0x4099, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequestedJump;  // 0x409A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsGrounded;  // 0x409B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsJumping;  // 0x409C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFalling;  // 0x409D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocomotionCamBoneWeight;  // 0x40A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowHandsWhenUnequipped;  // 0x40A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFocusableData CurrentFocusableData;  // 0x40B0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSprinting;  // 0x42A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimPlayRate;  // 0x42A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GripSocketLocation;  // 0x42A8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IKAlpha;  // 0x42B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetRecoil;  // 0x42B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentRecoil;  // 0x42BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmAnimData FirearmData;  // 0x42C0, size 0x118
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> FocusableAnims;  // 0x43D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> BowDataAnims;  // 0x43E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasFinishedLoadingFocusableAnims;  // 0x43F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThrowStrength;  // 0x43FC, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Throwable_C* ThrowableRef;  // 0x4400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDrawingThrowable;  // 0x4408, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Reeling;  // 0x4409, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCasting;  // 0x440A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Casted;  // 0x440B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform MeshOffset;  // 0x4410, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator WorldRotation;  // 0x4440, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator DeltaRotation;  // 0x444C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ADSAlpha;  // 0x4458, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsToThrow;  // 0x445C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform ItemAttachOffset;  // 0x4460, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LandedTimeStamp;  // 0x4490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUnderwater;  // 0x4494, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Direction;  // 0x4498, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemAnimationData CachedItemAnimations;  // 0x44A0, size 0x360
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverlayIdleBlend;  // 0x4800, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator _3rdHeadRotation;  // 0x4804, size 0xC, named "3rdHeadRotation"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForceGripIKValue;  // 0x4810, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFocusableComponent* CurrentFocusable;  // 0x4818, size 0x8

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_D28A1C77417DAF01958987976AC25CDD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_E5180EAA4C47AB3A465AB98A5EC435A0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendListByBool_19CECC9D43B751CAEEEAF499CC3819A0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendListByBool_B0D9D70441F225370BBD7E9CCDDBEE41();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendListByBool_CA7A63AB4989C05920089F931A442653();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendListByBool_E05C990540EEC3B010DB2495148A0662();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendSpacePlayer_4CC150DD44D02D494BD416A5BC884195();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendSpacePlayer_9C69C6214056C7EE9ED3C7BB3FAA6CDD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendSpacePlayer_A226BD5A453E52160D89C6BA04C87F16();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_BlendSpacePlayer_D0FFEC374C4ECB91D55B2C88A03E7C72();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_Fabrik_A4A3FD9443A24765B3C5EE9CFBB69BFB();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_LayeredBoneBlend_FFE6EBA541F65E882B4111BA2408B4A0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ModifyBone_4F057270413F0B7EB6FDF8BE5020C353();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ModifyBone_57E7EA774F1F290423DFFB9A4A70414C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ModifyBone_8E61018440DFC9BD418912BC4615D874();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ModifyBone_955145C04A5AF77A7893BE800620F116();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ModifyBone_A37E46714715430A919746AB5352EDB8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_ModifyBone_D01EBFA44ECD86897FADABA48DD2CAFA();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequenceEvaluator_1C2FBBA4409251A3B5A36B93F687C851();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequenceEvaluator_73EDB2B54D9AD8974D576EB0FF549CB5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequenceEvaluator_85FEE09E4E2EADF9408E2B8CE5BC9C36();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequenceEvaluator_8991323646E84F484CDEC0AB20636D7A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequenceEvaluator_E11C37D744EC7490C9B6669F03AED1D9();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_0BFC85554981E16D990D7088253E92C6();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_197524324809F6A50D7334A983113C04();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_3826FB2E4FFEC323750C489F0A2AD087();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_54A11FC5445BD77CA205CFAB199E1923();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_780DB0ED407BF9DA1DCF6EB7CD2903B9();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_AA77D7A146580F05ED3FEA9567257DB1();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_CC4A37FE49CAE0AD4F3A6A88FDE10D73();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_D52DD0B84BD02357C67581A020CC716E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_D6FB76494D46A0A158686393F67DEE59();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_SequencePlayer_F73DC2C14D156057C6A0DFA1BD1BDC99();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_0184B13B4691DE8E4B222598C13ABAD5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_37D28F0048486895FFCFC6AB552C175F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_3A2EDE7C42A44D5847463496A9BC7943();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_49AF547B440DEA3170DF67B90F2FF8AF();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_57A40CD44060C34ABB00F5989765DB2B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_5F3434984B891F6F2E9B4B81642060DE();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_65E988C346E22DBF645682A9B9160F52();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_6949760A46FE52C2E5ACE589C96C4014();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_6E0E488245F303A1B1C906B5AFFF5CC5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_816727FC46F57C9BBA2EC78CC745DE33();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_883FF8F24A1861E0CAB105BD39C3E345();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_B850407948ACFE816D30EC89403D5AE9();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_CD37968B4F28577D9DBE2DB204D159BD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_CDCA2ECC46F0781862775695D252624A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_D32718D94329AEA47A15EC9DB7E48BEA();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_E803D1314A134830A00FFDA621ACFB73();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_AnimBP_AnimGraphNode_TransitionResult_F34E39F44D4CEBF97783EBBDF62D9D64();
    UFUNCTION() void ExecuteUbergraph_1ST_CHA_RIG_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UBlendSpaceBase* GetCurrentLocoBlendspace();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIdleAnim(TSoftObjectPtr<UAnimSequence>& OutFPIdleAnim) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCurrentlyJumping();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSwimming();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnFocusedItemUpdated(AIcarusItem* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B70A336DF9(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B735D7183E(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateADS();
    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void WeaponFired(float Power);  // parameters 0x4
};
