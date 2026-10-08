// /Game/ASS/CRE/Irradiated_Prospector/SK_CRE_Irradiated_Prospector_AnimBP.SK_CRE_Irradiated_Prospector_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1A7A, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Irradiated_Prospector_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x03D8, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0530, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0558, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05A0, size 0x158
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x06F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0720, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0748, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0770, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0798, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x07C0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x0840, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0870, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x08F0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x0920, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x09A0, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;  // 0x09D0, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0AB8, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;  // 0x0AE8, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0BD0, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x0C70, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0D58, size 0xA0
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;  // 0x0DF8, size 0xD0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x0EC8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x0FB0, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1098, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1138, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x1158, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x1260, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1280, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1368, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1398, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1448, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1470, size 0x368
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x17D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x1808, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x1888, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x1908, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x1950, size 0xD0
    UPROPERTY() FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;  // 0x1A20, size 0x38
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_1BA482DA4335520A2E931585E2B6447B;  // 0x1A58, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_1BA482DA4335520A2E931585E2B6447B;  // 0x1A5C, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_1BA482DA4335520A2E931585E2B6447B;  // 0x1A60, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_1BA482DA4335520A2E931585E2B6447B;  // 0x1A6C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBlendSpaceBase* LocoBlendSpace;  // 0x1A70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSprinting;  // 0x1A78, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCrawling;  // 0x1A79, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Irradiated_Prospector_AnimBP_AnimGraphNode_BlendListByBool_1D7155E441413D9F82FB85AA94799596();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Irradiated_Prospector_AnimBP_AnimGraphNode_BlendSpacePlayer_4197D4494C32563DF40D279A286C157F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Irradiated_Prospector_AnimBP_AnimGraphNode_BlendSpacePlayer_E26A6E734B6E3F996BA2BA99283C236F();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Irradiated_Prospector_AnimBP(int32 EntryPoint);  // parameters 0x4
};
