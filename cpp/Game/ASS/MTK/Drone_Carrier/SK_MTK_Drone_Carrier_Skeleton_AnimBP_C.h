// /Game/ASS/MTK/Drone_Carrier/SK_MTK_Drone_Carrier_Skeleton_AnimBP.SK_MTK_Drone_Carrier_Skeleton_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0xAF9, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_MTK_Drone_Carrier_Skeleton_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0408, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x0428, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0530, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0550, size 0xA0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x05F0, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x06F8, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0800, size 0x108
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0908, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0988, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x09D0, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0A18, size 0xD0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFrameVelocity;  // 0x0AE8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GameTime;  // 0x0AEC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BankingRate;  // 0x0AF0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAcceleration;  // 0x0AF4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAlive;  // 0x0AF8, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Carrier_Skeleton_AnimBP_AnimGraphNode_ModifyBone_3A1D326D40361D68B11366A9DAFC167B();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Carrier_Skeleton_AnimBP_AnimGraphNode_ModifyBone_7E38F245488B4F31EB43A594139B1D74();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Carrier_Skeleton_AnimBP_AnimGraphNode_ModifyBone_B53CB3EA48BDF8082158B384B9C50605();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_MTK_Drone_Carrier_Skeleton_AnimBP_AnimGraphNode_ModifyBone_B9ED08AF4E6DD6AF5A87A7A85AE4C042();
    UFUNCTION() void ExecuteUbergraph_SK_MTK_Drone_Carrier_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
