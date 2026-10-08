// /Game/ASS/CRE/Flesh_Sack_Floater/SK_CRE_Flesh_Sack_Floater_V2_AnimBP.SK_CRE_Flesh_Sack_Floater_V2_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xE7C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Flesh_Sack_Floater_V2_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0408, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0428, size 0x20
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0448, size 0x48
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0490, size 0x108
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0598, size 0x80
    UPROPERTY() FAnimNode_RigidBody AnimGraphNode_RigidBody;  // 0x0620, size 0x830
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator TargetRotation;  // 0x0E50, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SmoothMovementDirection;  // 0x0E5C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmoothSpeed;  // 0x0E68, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaSeconds;  // 0x0E6C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LocalRootRotation;  // 0x0E70, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Flesh_Sack_Floater_V2_AnimBP_AnimGraphNode_SequencePlayer_1324842243C2D380722E9C88CBDF94B0();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Flesh_Sack_Floater_V2_AnimBP(int32 EntryPoint);  // parameters 0x4
};
