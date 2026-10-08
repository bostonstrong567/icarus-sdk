// /Game/ThirdPartyAssets/CharacterAnimations/Mesh/NPC_SettlementCharacter_AnimBP.NPC_SettlementCharacter_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x4D6A, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UNPC_SettlementCharacter_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_7;  // 0x03D8, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0420, size 0x368
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization_2;  // 0x0788, size 0x70
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34;  // 0x07F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33;  // 0x0820, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32;  // 0x0848, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31;  // 0x0870, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30;  // 0x0898, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29;  // 0x08C0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28;  // 0x08E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27;  // 0x0910, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26;  // 0x0938, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25;  // 0x0960, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24;  // 0x0988, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23;  // 0x09B0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22;  // 0x09D8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21;  // 0x0A00, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20;  // 0x0A28, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19;  // 0x0A50, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;  // 0x0A78, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;  // 0x0AA0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;  // 0x0AC8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;  // 0x0AF0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;  // 0x0B18, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30;  // 0x0B40, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_27;  // 0x0BC0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29;  // 0x0BF0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_26;  // 0x0C70, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28;  // 0x0CA0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_25;  // 0x0D20, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27;  // 0x0D50, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_24;  // 0x0DD0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26;  // 0x0E00, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_23;  // 0x0E80, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25;  // 0x0EB0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_22;  // 0x0F30, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24;  // 0x0F60, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_21;  // 0x0FE0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23;  // 0x1010, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_20;  // 0x1090, size 0x30
    UPROPERTY() FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;  // 0x10C0, size 0x190
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22;  // 0x1250, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21;  // 0x12D0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19;  // 0x1350, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7;  // 0x13F0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6;  // 0x14D8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18;  // 0x15C0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17;  // 0x1660, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_19;  // 0x1700, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20;  // 0x1730, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_18;  // 0x17B0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19;  // 0x17E0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_17;  // 0x1860, size 0x30
    UPROPERTY() FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;  // 0x1890, size 0x190
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18;  // 0x1A20, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;  // 0x1AA0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x1B88, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16;  // 0x1C70, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15;  // 0x1D10, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_16;  // 0x1DB0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17;  // 0x1DE0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_15;  // 0x1E60, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16;  // 0x1E90, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_14;  // 0x1F10, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15;  // 0x1F40, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14;  // 0x1FC0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14;  // 0x2040, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x20E0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x21C8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13;  // 0x22B0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12;  // 0x2350, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_13;  // 0x23F0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;  // 0x2420, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x24A0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11;  // 0x2588, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_12;  // 0x2628, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_11;  // 0x2658, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_3;  // 0x2688, size 0xB0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;  // 0x2738, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x2890, size 0x28
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x28B8, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10;  // 0x2988, size 0xA0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_6;  // 0x2A28, size 0x48
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9;  // 0x2A70, size 0xA0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3;  // 0x2B10, size 0xC0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_5;  // 0x2BD0, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_4;  // 0x2C18, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_3;  // 0x2C60, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x2CA8, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8;  // 0x2D78, size 0xA0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x2E18, size 0xC0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0x2ED8, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_2;  // 0x2F00, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x2F48, size 0x48
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7;  // 0x2F90, size 0xA0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;  // 0x3030, size 0xC0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x30F0, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;  // 0x3138, size 0x158
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x3290, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x33E8, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x3410, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x3438, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;  // 0x3460, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x3500, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x3520, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x3628, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x3648, size 0xE8
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;  // 0x3730, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x3758, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x3780, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x37A8, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;  // 0x37D0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_10;  // 0x3850, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;  // 0x3880, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_9;  // 0x3900, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;  // 0x3930, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_8;  // 0x39B0, size 0x30
    UPROPERTY() FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;  // 0x39E0, size 0x78
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x3A58, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x3A88, size 0xB0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x3B38, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x3BD8, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_1;  // 0x3C08, size 0xB0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x3CB8, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x3D58, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x3EB0, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x3ED8, size 0x28
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x3F00, size 0xC0
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x3FC0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x3FE8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x4010, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x4038, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x4060, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x4088, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x40B0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x40D8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x4100, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x4128, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;  // 0x4150, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x41D0, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x4200, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x4220, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x4328, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x4348, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x43E8, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x4468, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x44E8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x4518, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x45B8, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x4638, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x46B8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x46E8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x4788, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x4808, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x4888, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x48B8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x4958, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x49D8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x4A58, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x4A88, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x4B08, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x4B38, size 0xB0
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization_1;  // 0x4BE8, size 0x70
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization;  // 0x4C58, size 0x70
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x4CC8, size 0x30
    UPROPERTY() bool __CustomProperty_IgnoreNeckMovement_6418D4EF4E8D512ED129A9BF9F584A58;  // 0x4CF8, size 0x1
    UPROPERTY() float __CustomProperty_AdditionalTargetHeight_6418D4EF4E8D512ED129A9BF9F584A58;  // 0x4CFC, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_6418D4EF4E8D512ED129A9BF9F584A58;  // 0x4D00, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_6418D4EF4E8D512ED129A9BF9F584A58;  // 0x4D0C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LookAtTarget;  // 0x4D10, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtAlpha;  // 0x4D18, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NPCLookAtAllowed;  // 0x4D1C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENPC_InjuredStates> Injured_State;  // 0x4D1D, size 0x1, named "Injured State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Stable;  // 0x4D1E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Do_Look_At;  // 0x4D1F, size 0x1, named "Do Look At"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Look_at_Target_Location;  // 0x4D20, size 0xC, named "Look at Target Location"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreNeckMovement;  // 0x4D2C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* OverrideAnimation;  // 0x4D30, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldOverrideInjuredStates;  // 0x4D38, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* OverrideLookAtAnimation;  // 0x4D40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCustomLookAtAnimation;  // 0x4D48, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LookAtWithinRange;  // 0x4D49, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Direction;  // 0x4D4C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x4D50, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x4D54, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCrouched;  // 0x4D55, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxLookAtAlpha;  // 0x4D58, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSprinting;  // 0x4D5C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDead;  // 0x4D5D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SoldierMovementState> MovementSpeedState;  // 0x4D5E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SettlementNPC_C* SettlerRef;  // 0x4D60, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInCombat;  // 0x4D68, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SettlementNPC_AnimState> SettlerAnimState;  // 0x4D69, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_033358394DE9E9F6C74EB4900DD4491E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_234546B44331FA7AEC4C7C869E1B55CA();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_3747846E4D3067D08B6890AD3F435299();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_5181D69647DFFE710BE6DEB31D069855();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_73858D8B4B7CA14F0C1D19B6CE598860();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_C055DBB64D4F7CC2DEC69FB0D94207A3();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_C4798F574C5296DA67598DB9AD833646();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_CE6BEDC1437505DFA89904B0D6C7105A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_D2DB57404D908E6B30C2AD9BC729870A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_E5400B5A48FCCF113B6B3093A6990BBF();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_ECA8534547062E7D25DDE3859955068D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_BlendListByBool_EFE258EC440CF9EB218B4FB034B04700();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_ControlRig_6418D4EF4E8D512ED129A9BF9F584A58();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_08109F8546D88C16B92054A406B39115();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_1760275F4DFE1CEBF79C36918378AE81();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_2ECB942F448A7D1C3327629FB1750A01();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_4ADEDBAF476E60B5F9E3C08E08F31204();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_564533EE4E8F22502D7EBB9E4A35B16F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_64B66F7E4D508DBCD68B16AA6C61EDD8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_71500EF8441389D7C14AF9A188C9D10B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_98B1C62E470C293FA613688F6E83F478();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_CD330B5F41227CC7B2E0D29C95F567C5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_DA38AEE84DF3B61858CB4E910C8B241B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_DE5A6B5F4F576E497A645E895B33A4C7();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_E0CEB5D94CC0F93D4325FC9F6342489A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_EBFC12DB4DD40DEE7ECFF8B94D2E6F37();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SettlementCharacter_AnimBP_AnimGraphNode_TransitionResult_EFD581E14BBC4B4B3AD876B7D79B21F7();
    UFUNCTION() void ExecuteUbergraph_NPC_SettlementCharacter_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindTargetToLookAt();
};
