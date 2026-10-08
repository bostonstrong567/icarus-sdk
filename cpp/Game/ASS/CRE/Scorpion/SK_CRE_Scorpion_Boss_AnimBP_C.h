// /Game/ASS/CRE/Scorpion/SK_CRE_Scorpion_Boss_AnimBP.SK_CRE_Scorpion_Boss_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x158C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Scorpion_Boss_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x03D8, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0420, size 0x158
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0578, size 0x158
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x06D0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x06F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0720, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0748, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x0770, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x07F0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x0820, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x08A0, size 0x30
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x08D0, size 0x50
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0920, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0950, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x09D0, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0A50, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;  // 0x0AD0, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;  // 0x0B70, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;  // 0x0C10, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0CB0, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0D50, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0DA0, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0E40, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0F28, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x1010, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x10B0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x10D0, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x11D8, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x11F8, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x12E0, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1310, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x13C0, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x13E8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1468, size 0xA0
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x1508, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUnderground;  // 0x1538, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* DormantAnim;  // 0x1540, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsStingerExposed;  // 0x1548, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x1549, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x154C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x1550, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastRotation;  // 0x1580, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Scorpion_Boss_AnimBP_AnimGraphNode_BlendListByBool_64C0CAE44FE08A47FAA655A8D879FA49();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Scorpion_Boss_AnimBP_AnimGraphNode_BlendListByBool_8824384942024FA0A3288D80B795EF20();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Scorpion_Boss_AnimBP_AnimGraphNode_BlendListByBool_9532E0A445BF0ADE610655BC08BC86AD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Scorpion_Boss_AnimBP_AnimGraphNode_BlendListByBool_BBAB89A947EDE956D179ADB83C6ABD5D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Scorpion_Boss_AnimBP_AnimGraphNode_BlendSpacePlayer_69101FE4436426F4C50965BE1F6883EE();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Scorpion_Boss_AnimBP_AnimGraphNode_TransitionResult_940620EB4313E6452CB7A494FF2399F4();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Scorpion_Boss_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDormantAnim(UAnimSequence*& DormantAnim);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetIsDormant(bool& IsDormant);  // parameters 0x1
};
