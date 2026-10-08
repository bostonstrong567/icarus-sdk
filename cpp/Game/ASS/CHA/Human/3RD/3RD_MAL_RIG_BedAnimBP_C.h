// /Game/ASS/CHA/Human/3RD/3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C
// Derives from: UAnimInstance > UObject
// size 0xC94, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_3RD_MAL_RIG_BedAnimBP_C : public UAnimInstance, public IAnim_VehicleLayerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_2;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;  // 0x02F8, size 0x118
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0410, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0438, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x04B8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x04E8, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x0568, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine_1;  // 0x0598, size 0xB0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x0648, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;  // 0x0750, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;  // 0x0770, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root_1;  // 0x0790, size 0x30
    UPROPERTY() FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x07C0, size 0x118
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x08D8, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0900, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0980, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x09B0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0A30, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0A60, size 0xB0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0B10, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0C18, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0C38, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0C58, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Offset;  // 0x0C88, size 0xC

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void VehicleLowerBody(FPoseLink LowerInPose, FPoseLink& VehicleLowerBody);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void VehicleUpperBody(FPoseLink UpperInPose, FPoseLink& VehicleUpperBody);  // parameters 0x20
};
