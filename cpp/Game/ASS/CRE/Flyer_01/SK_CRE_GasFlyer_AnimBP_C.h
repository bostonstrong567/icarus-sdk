// /Game/ASS/CRE/Flyer_01/SK_CRE_GasFlyer_AnimBP.SK_CRE_GasFlyer_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x764, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_GasFlyer_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0488, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x04A8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x04C8, size 0x108
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x05D0, size 0x48
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0618, size 0x108
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SmoothMovementDirection;  // 0x0720, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator TargetRotation;  // 0x072C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaSeconds;  // 0x0738, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SmoothMovementDirection_0;  // 0x073C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator RootRotation;  // 0x0748, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LocalRootRotation;  // 0x0754, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmoothSpeed;  // 0x0760, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_GasFlyer_AnimBP_AnimGraphNode_ModifyBone_8783789941B5DAF29BD7EEB457A31241();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_GasFlyer_AnimBP_AnimGraphNode_SequencePlayer_E47468E1415463B0A20A40B3AB7189C7();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_GasFlyer_AnimBP(int32 EntryPoint);  // parameters 0x4
};
