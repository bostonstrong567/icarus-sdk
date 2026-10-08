// /Game/ASS/CRE/Orka/Animation/SK-Orka_AnimBP.SK-Orka_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1538, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Orka_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x0408, size 0xB0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x04B8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0538, size 0xA0
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x05D8, size 0xE8
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x06C0, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0740, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x07E0, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0800, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0908, size 0x20
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0928, size 0xE8
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0A10, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x0A40, size 0xB0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0AF0, size 0x158
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0C48, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0C90, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0CB8, size 0x158
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0E10, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1178, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x11A0, size 0x368
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_11C751C24482AB57BF38B497ABA056E4;  // 0x1508, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_11C751C24482AB57BF38B497ABA056E4;  // 0x150C, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_11C751C24482AB57BF38B497ABA056E4;  // 0x1510, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_11C751C24482AB57BF38B497ABA056E4;  // 0x151C, size 0x1
    UPROPERTY() FVector __CustomProperty_Trace_Length_98E8520B4908724257AD03933E958F53;  // 0x1520, size 0xC
    UPROPERTY() float __CustomProperty_Trace_Offset_98E8520B4908724257AD03933E958F53;  // 0x152C, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_98E8520B4908724257AD03933E958F53;  // 0x1530, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_98E8520B4908724257AD03933E958F53;  // 0x1534, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Orka_AnimBP_AnimGraphNode_BlendListByBool_9D0D7A024E58D0BA2C6FCFB1E94615CE();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Orka_AnimBP_AnimGraphNode_BlendListByBool_9D0D7A024E58D0BA2C6FCFB1E94615CE"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Orka_AnimBP_AnimGraphNode_BlendSpacePlayer_1D4BD3C64C881BB437F336959A62AE1D();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Orka_AnimBP_AnimGraphNode_BlendSpacePlayer_1D4BD3C64C881BB437F336959A62AE1D"
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Orka_AnimBP_AnimGraphNode_BlendSpacePlayer_E9AA1EF6486E4994CE89F2B35E5B0A11();  // named "EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Orka_AnimBP_AnimGraphNode_BlendSpacePlayer_E9AA1EF6486E4994CE89F2B35E5B0A11"
    UFUNCTION() void ExecuteUbergraph_SK_Orka_AnimBP(int32 EntryPoint);  // parameters 0x4, named "ExecuteUbergraph_SK-Orka_AnimBP"
};
