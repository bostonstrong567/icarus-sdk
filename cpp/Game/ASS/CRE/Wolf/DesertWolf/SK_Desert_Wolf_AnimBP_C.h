// /Game/ASS/CRE/Wolf/DesertWolf/SK_Desert_Wolf_AnimBP.SK_Desert_Wolf_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1229, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Desert_Wolf_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0408, size 0x80
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0488, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x04A8, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x05B0, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x05D0, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x06B8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0738, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x07D8, size 0xA0
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0878, size 0xB0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0928, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0A10, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0A40, size 0xB0
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0AF0, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0B38, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0EA0, size 0x368
    UPROPERTY() bool __CustomProperty_DoLookAt_FC737F594D01C688654279A44529201A;  // 0x1208, size 0x1
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_FC737F594D01C688654279A44529201A;  // 0x120C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMovementState Current_Movement_State;  // 0x1218, size 0x1, named "Current Movement State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x1219, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x121C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x1228, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_BlendListByBool_128B444E415F16FC38C222AAEFEB06F0();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_38B68DAB487E52F829BFDF832E9709C8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_B3863DA049C4A74B971F619B0FD61247();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Desert_Wolf_AnimBP_AnimGraphNode_ControlRig_FC737F594D01C688654279A44529201A();
    UFUNCTION() void ExecuteUbergraph_SK_Desert_Wolf_AnimBP(int32 EntryPoint);  // parameters 0x4
};
