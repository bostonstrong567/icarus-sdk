// /Game/ThirdPartyAssets/CharacterAnimations/Mesh/NPC_Soldier_AnimBP.NPC_Soldier_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x301F, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UNPC_Soldier_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_7;  // 0x0408, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_6;  // 0x0450, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0498, size 0x368
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization;  // 0x0800, size 0x70
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;  // 0x0870, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;  // 0x0898, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;  // 0x08C0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;  // 0x08E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x0910, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x0938, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x0960, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x0988, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x09B0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x09D8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x0A00, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x0A28, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x0A50, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0A78, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0AA0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0AC8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0AF0, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;  // 0x0B18, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_12;  // 0x0B98, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;  // 0x0BC8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_11;  // 0x0C48, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;  // 0x0C78, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_10;  // 0x0CF8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;  // 0x0D28, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_9;  // 0x0DA8, size 0x30
    UPROPERTY() FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;  // 0x0DD8, size 0x190
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;  // 0x0F68, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x0FE8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12;  // 0x1068, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6;  // 0x1108, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;  // 0x11F0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11;  // 0x12D8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10;  // 0x1378, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_8;  // 0x1418, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x1448, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x14C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x14F8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x1578, size 0x30
    UPROPERTY() FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;  // 0x15A8, size 0x190
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x1738, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x17B8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x18A0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9;  // 0x1988, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8;  // 0x1A28, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x1AC8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x1AF8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x1B78, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x1BA8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x1C28, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x1C58, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x1CD8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7;  // 0x1D58, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x1DF8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x1EE0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;  // 0x1FC8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x2068, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x2108, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x2138, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x21B8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x22A0, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x2340, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x2370, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x23A0, size 0xB0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x2450, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x25A8, size 0x28
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x25D0, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x26A0, size 0xA0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_5;  // 0x2740, size 0x48
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x2788, size 0xA0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x2828, size 0xC0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_4;  // 0x28E8, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x2930, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_3;  // 0x2958, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x29A0, size 0xD0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x2A70, size 0xA0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;  // 0x2B10, size 0xC0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x2BD0, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_2;  // 0x2BF8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x2C40, size 0x48
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x2C88, size 0xA0
    UPROPERTY() FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x2D28, size 0xC0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x2DE8, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x2E30, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x2E58, size 0x158
    UPROPERTY() bool __CustomProperty_IgnoreNeckMovement_C71BE11B4C87529C8C16C2ABFF5F1A61;  // 0x2FB0, size 0x1
    UPROPERTY() float __CustomProperty_AdditionalTargetHeight_C71BE11B4C87529C8C16C2ABFF5F1A61;  // 0x2FB4, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_C71BE11B4C87529C8C16C2ABFF5F1A61;  // 0x2FB8, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_C71BE11B4C87529C8C16C2ABFF5F1A61;  // 0x2FC4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LookAtTarget;  // 0x2FC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtAlpha;  // 0x2FD0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NPCLookAtAllowed;  // 0x2FD4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENPC_InjuredStates> Injured_State;  // 0x2FD5, size 0x1, named "Injured State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Stable;  // 0x2FD6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Do_Look_At;  // 0x2FD7, size 0x1, named "Do Look At"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Look_at_Target_Location;  // 0x2FD8, size 0xC, named "Look at Target Location"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreNeckMovement;  // 0x2FE4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* OverrideAnimation;  // 0x2FE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldOverrideInjuredStates;  // 0x2FF0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* OverrideLookAtAnimation;  // 0x2FF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCustomLookAtAnimation;  // 0x3000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LookAtWithinRange;  // 0x3001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Direction;  // 0x3004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Soldier_C* SoldierRef;  // 0x3008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x3010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x3014, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCrouched;  // 0x3015, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxLookAtAlpha;  // 0x3018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSprinting;  // 0x301C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDead;  // 0x301D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SoldierMovementState> MovementSpeedState;  // 0x301E, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_BlendListByBool_39C0CFE24A807F4BB0A4CBA1128E2E93();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_BlendListByBool_3F0B0CAA42B33EE05E71EAA1F3FEE7BC();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_BlendListByBool_85CE83CC42523F9A7D0A659C81F48BAB();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_BlendListByBool_88B5CC744FD1718C9D3598A83FD31699();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_BlendListByBool_942AC9DF4BF761B30E47D298EFB53FF1();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_BlendListByBool_AE34075D4726899E4DD7769B66DE3E94();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_ControlRig_C71BE11B4C87529C8C16C2ABFF5F1A61();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_TransitionResult_176D53EB4B9B4EAA386753B7D8B2631F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_TransitionResult_47D9CEDD46D807A47D757E85D24E84F3();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_TransitionResult_50AFDC64453ADF5F98503DA0AC6E76B6();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_Soldier_AnimBP_AnimGraphNode_TransitionResult_9746C3C144AFC768A25A4CB32E3F786F();
    UFUNCTION() void ExecuteUbergraph_NPC_Soldier_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindTargetToLookAt();
};
