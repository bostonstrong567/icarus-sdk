// /Game/ASS/CRE/Wyrm_Queen/SK_CRE_Wyrm_Queen_AnimBP.SK_CRE_Wyrm_Queen_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x18BB, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Wyrm_Queen_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_2;  // 0x03D8, size 0x48
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x0420, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x0448, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x0470, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x0498, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x04C0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x04E8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0510, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0538, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0560, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0588, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x0608, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0638, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x06B8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x06E8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0768, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0798, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0880, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0968, size 0xA0
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0A08, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0A38, size 0xB0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0AE8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0B18, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0E80, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x11E8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x1288, size 0x80
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1308, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1460, size 0x28
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;  // 0x1488, size 0xC8
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_1;  // 0x1550, size 0x38
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;  // 0x1588, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;  // 0x15D8, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x1628, size 0x50
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x1678, size 0x48
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x16C0, size 0xC8
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x1788, size 0x38
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x17C0, size 0x48
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x1808, size 0x50
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_C8408F7449D38B1FEE50E6B3E25F0997;  // 0x1858, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_C8408F7449D38B1FEE50E6B3E25F0997;  // 0x185C, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_C8408F7449D38B1FEE50E6B3E25F0997;  // 0x1860, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_C8408F7449D38B1FEE50E6B3E25F0997;  // 0x186C, size 0x1
    UPROPERTY() FVector __CustomProperty_Trace_Length_3F3673854AB30A0DCB4547A67DDF1B22;  // 0x1870, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_3F3673854AB30A0DCB4547A67DDF1B22;  // 0x187C, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_3F3673854AB30A0DCB4547A67DDF1B22;  // 0x1880, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_3F3673854AB30A0DCB4547A67DDF1B22;  // 0x1884, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDiving;  // 0x1888, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TorsoTargetLocation;  // 0x188C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMoving;  // 0x1898, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsGliding;  // 0x1899, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Sandwyrm_Queen_Character_C* QueenRef;  // 0x18A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<WyrmQueenState> QueenState;  // 0x18A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x18AC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x18B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> CurrentMovementMode;  // 0x18B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x18BA, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_BlendListByBool_2A50504E4E7CAAC2F7B30883B906F920();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_BlendSpacePlayer_C78310734D8DC5BAD7A5CF9535E10FB4();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_ControlRig_3F3673854AB30A0DCB4547A67DDF1B22();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_ControlRig_C8408F7449D38B1FEE50E6B3E25F0997();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_0E5D7D564049D3155C8128A218CCE21C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_15880F954612A984F9A975937F9C2F37();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_5328FA6B4839053803031686CE5385E0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_583F40EA42A04E93FCB8BF836E33F331();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_8AF7C8464D42F89710E618B5D66D9796();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_9426C9724FF161EDC8B05398FE0F653D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_B6B8C83D4473D3E5EDDA6997E39B0E4E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_B92101C64ED4E5315FD7148984D7F2C0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP_AnimGraphNode_TransitionResult_E6D7AF8C465BDD47D25B0DB68A0C2C15();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Wyrm_Queen_AnimBP(int32 EntryPoint);  // parameters 0x4
};
