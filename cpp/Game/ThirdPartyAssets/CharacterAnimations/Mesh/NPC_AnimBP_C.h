// /Game/ThirdPartyAssets/CharacterAnimations/Mesh/NPC_AnimBP.NPC_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x1EC7, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UNPC_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x02C8, size 0x368
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x0630, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x0658, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x0680, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x06A8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x06D0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x06F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x0720, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x0748, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0770, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18;  // 0x0798, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_16;  // 0x0818, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17;  // 0x0848, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_15;  // 0x08C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16;  // 0x08F8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_14;  // 0x0978, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15;  // 0x09A8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_13;  // 0x0A28, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14;  // 0x0A58, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_12;  // 0x0AD8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;  // 0x0B08, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_11;  // 0x0B88, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;  // 0x0BB8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_10;  // 0x0C38, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;  // 0x0C68, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_9;  // 0x0CE8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;  // 0x0D18, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_8;  // 0x0D98, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;  // 0x0DC8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x0E48, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x0E78, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x0EF8, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0F28, size 0x20
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0F48, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x0F68, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x0FE8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x1018, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x1098, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_1;  // 0x10C8, size 0xB0
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization;  // 0x1178, size 0x70
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7;  // 0x11E8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x1288, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;  // 0x1308, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x13A8, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x1428, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x1470, size 0x48
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x14B8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x14E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x1510, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x1538, size 0x28
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x1560, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1590, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x15C0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x1660, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x1700, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x17A0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x1840, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x18E0, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x1960, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x19E0, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x1A60, size 0x80
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x1AE0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1BC8, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x1CB0, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1CE0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1D10, size 0xB0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1DC0, size 0xA0
    UPROPERTY() bool __CustomProperty_IgnoreNeckMovement_EE39C32944E0D15FE807D78EA5D12ED0;  // 0x1E60, size 0x1
    UPROPERTY() float __CustomProperty_AdditionalTargetHeight_EE39C32944E0D15FE807D78EA5D12ED0;  // 0x1E64, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_EE39C32944E0D15FE807D78EA5D12ED0;  // 0x1E68, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_EE39C32944E0D15FE807D78EA5D12ED0;  // 0x1E74, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* LookAtTarget;  // 0x1E78, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtAlpha;  // 0x1E80, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NPCLookAtAllowed;  // 0x1E84, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENPC_InjuredStates> Injured_State;  // 0x1E85, size 0x1, named "Injured State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Stable;  // 0x1E86, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Do_Look_At;  // 0x1E87, size 0x1, named "Do Look At"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Look_at_Target_Location;  // 0x1E88, size 0xC, named "Look at Target Location"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreNeckMovement;  // 0x1E94, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* OverrideAnimation;  // 0x1E98, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldOverrideInjuredStates;  // 0x1EA0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* OverrideLookAtAnimation;  // 0x1EA8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCustomLookAtAnimation;  // 0x1EB0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LookAtWithinRange;  // 0x1EB1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Direction;  // 0x1EB4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Mission_NPC_Base_C* NPCRef;  // 0x1EB8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x1EC0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSoldier;  // 0x1EC4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x1EC5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCrouched;  // 0x1EC6, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_BlendListByBool_06F00C4247FFCA92AFF141BF24F05723();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_BlendListByBool_813C882243EE5C2DE49E35829EF98BF4();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_116E6BBA46A603A552DC76A09E5A651C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_1E0F70C14F0493C513F24D911A57EB45();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_9B0F7DED456BC3DCF5F350B7C8EEE306();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_9BB1302449576D01FCD40FBB053E76EC();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_AE6285EF4A6C64F7B5049A80F5553A67();
    UFUNCTION() void ExecuteUbergraph_NPC_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindPlayerToLookAt();
};
