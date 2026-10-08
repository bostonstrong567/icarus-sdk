// /Game/ASS/CRE/Mini_Lava_Bomber/SK_CRE_LavaBomber_Flyer_AnimBP.SK_CRE_LavaBomber_Flyer_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x804, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_LavaBomber_Flyer_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0488, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x04A8, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x05B0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x05D0, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x06D8, size 0x108
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator VelocityRotation;  // 0x07E0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlutterSpeed;  // 0x07EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlutterIntensity;  // 0x07F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetRoll;  // 0x07F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GameTimeInSeconds;  // 0x07F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDetonating;  // 0x07FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DetonationProgress;  // 0x0800, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_LavaBomber_Flyer_AnimBP_AnimGraphNode_ModifyBone_5308CB814E196874021305AFE60407BD();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_LavaBomber_Flyer_AnimBP_AnimGraphNode_ModifyBone_D5DDF523405E8DF3CA8A37A75D4FC8B2();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_LavaBomber_Flyer_AnimBP_AnimGraphNode_ModifyBone_F8ECA6F44FADE94FFA90D3949F00FD5C();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_LavaBomber_Flyer_AnimBP(int32 EntryPoint);  // parameters 0x4
};
