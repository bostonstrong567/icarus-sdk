// /Game/ASS/MTK/Drone_Carrier/SK_MTK_Drone_Carrier_SQ_AnimBP.SK_MTK_Drone_Carrier_SQ_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x918, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_MTK_Drone_Carrier_SQ_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x02C8, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x03D0, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x04D8, size 0x108
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x05E0, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0660, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x06A8, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x06F0, size 0xD0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x07C0, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x07E0, size 0xA0
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0880, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x08A0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFrameVelocity;  // 0x08D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GameTime;  // 0x08D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BankingRate;  // 0x08D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAcceleration;  // 0x08DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRepaired;  // 0x08E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PawnVelocity;  // 0x08E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x08E8, size 0x30

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Carrier_SQ_AnimBP_AnimGraphNode_ModifyBone_653AD8E14C7157D235EEB39DE43E6732();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Carrier_SQ_AnimBP_AnimGraphNode_ModifyBone_7AEA5CBA40106633CEB5F3A0E0D9BC50();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Carrier_SQ_AnimBP_AnimGraphNode_ModifyBone_D30FB59C419A16E3A5F1C4AEB96C2903();
    UFUNCTION() void ExecuteUbergraph_SK_MTK_Drone_Carrier_SQ_AnimBP(int32 EntryPoint);  // parameters 0x4
};
