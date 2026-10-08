// /Game/ASS/VHC/Speeder_Bike/SK_VHC_Speeder_Bike_AnimBP.SK_VHC_Speeder_Bike_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x12CC, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_VHC_Speeder_Bike_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x03D8, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x04E0, size 0x20
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0500, size 0x80
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x0580, size 0x108
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0688, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x06D0, size 0x48
    UPROPERTY() FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;  // 0x0718, size 0xD0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;  // 0x07E8, size 0x108
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x08F0, size 0x108
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x09F8, size 0xA0
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0A98, size 0x20
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0AB8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0AE8, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0E50, size 0x368
    UPROPERTY() FTransform __CustomProperty_InterpolatedWorldPosition_778F051B4E3973B579C2C59E9C6F1577;  // 0x11C0, size 0x30
    UPROPERTY() float __CustomProperty_DesiredFloorDistance_778F051B4E3973B579C2C59E9C6F1577;  // 0x11F0, size 0x4
    UPROPERTY() FTransform __CustomProperty_InterpolatedWorldPosition_BBF3D394469D6BC23078C5B3555E0567;  // 0x1200, size 0x30
    UPROPERTY() float __CustomProperty_DesiredFloorDistance_BBF3D394469D6BC23078C5B3555E0567;  // 0x1230, size 0x4
    UPROPERTY() FVector __CustomProperty_Trace_Length_BBF3D394469D6BC23078C5B3555E0567;  // 0x1234, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BankingRate;  // 0x1240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAcceleration;  // 0x1244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GameTime;  // 0x1248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFrameVelocity;  // 0x124C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory History;  // 0x1250, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActive;  // 0x1280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform InterpolatedTransform;  // 0x1290, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x12C0, size 0xC, named "Trace Length"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_283471A0460803CC47FF859D75810814();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_30FEAC154C4C2FD83E85C49407EC8C6F();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_9A230EE540B2F8A39C650D912E2F1F60();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP_AnimGraphNode_ModifyBone_CC4A0F19445C90246FC25996A747D4CA();
    UFUNCTION() void ExecuteUbergraph_SK_VHC_Speeder_Bike_AnimBP(int32 EntryPoint);  // parameters 0x4
};
