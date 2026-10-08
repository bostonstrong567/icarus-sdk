// /Game/ASS/MTK/Drone/SK_MTK_Drone_GEN_AnimBP.SK_MTK_Drone_GEN_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xA88, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_MTK_Drone_GEN_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0488, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x04A8, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x05B0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x05D0, size 0x108
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x06D8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0720, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0768, size 0xD0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x0838, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0940, size 0x108
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x0A48, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFrameVelocity;  // 0x0A78, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAcceleration;  // 0x0A7C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BankingRate;  // 0x0A80, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GameTime;  // 0x0A84, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_5E780F6A49CC11CBAC711FBF8D875B12();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_AE66C5EC45A526A187B99F8D61BE9EEF();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_CD7A2A0745DD81E003CA418207B2716E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP_AnimGraphNode_ModifyBone_FE0C9629487E2F938DC37F8CEE8B0065();
    UFUNCTION() void ExecuteUbergraph_SK_MTK_Drone_GEN_AnimBP(int32 EntryPoint);  // parameters 0x4
};
