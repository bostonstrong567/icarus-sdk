// /Game/ASS/MTK/Drone_Hunter/SK_MTK_Drone_Hunter_Skeleton_AnimBP.SK_MTK_Drone_Hunter_Skeleton_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xA58, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_MTK_Drone_Hunter_Skeleton_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0408, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x0428, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0530, size 0x20
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0550, size 0xD0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x0620, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x0728, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0830, size 0x108
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0938, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x09B8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0A00, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFrameVelocity;  // 0x0A48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GameTime;  // 0x0A4C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BankingRate;  // 0x0A50, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAcceleration;  // 0x0A54, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_5E8490404FB778AADBDDCD93C99B7BEE();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_7FFBF6414A27FB44621C0F9E7E908B03();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_F6628B574B4410B2AC30679976B37250();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP_AnimGraphNode_ModifyBone_FE9ED1564680E298B40219B437CC3709();
    UFUNCTION() void ExecuteUbergraph_SK_MTK_Drone_Hunter_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
