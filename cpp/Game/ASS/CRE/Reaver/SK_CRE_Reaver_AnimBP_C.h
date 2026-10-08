// /Game/ASS/CRE/Reaver/SK_CRE_Reaver_AnimBP.SK_CRE_Reaver_AnimBP_C
// Derives from: UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x2130, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_CRE_Reaver_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x03D8, size 0x30
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0560, size 0x28
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0588, size 0x48
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x05D0, size 0x158
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;  // 0x0728, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;  // 0x0750, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;  // 0x0778, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;  // 0x07A0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x07C8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x07F0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x0818, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x0840, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x0868, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x0890, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x08B8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x08E0, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x0908, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x0930, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x0958, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x0980, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x09A8, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;  // 0x09D0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_12;  // 0x0A50, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;  // 0x0A80, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_11;  // 0x0B00, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;  // 0x0B30, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_10;  // 0x0BB0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x0BE0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_9;  // 0x0C60, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x0C90, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_8;  // 0x0D10, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x0D40, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x0DC0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x0DF0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x0E70, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x0EA0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x0F20, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x0F50, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x0FD0, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x1000, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x1080, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x10B0, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1130, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x1160, size 0x80
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x11E0, size 0x30
    UPROPERTY() FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1210, size 0xC8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;  // 0x12D8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x13C0, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;  // 0x14A8, size 0xE8
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1590, size 0xE8
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x1678, size 0xA0
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1718, size 0xA0
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x17B8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x17D8, size 0x108
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x18E0, size 0x20
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1900, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1930, size 0xB0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x19E0, size 0x28
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1A08, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1D70, size 0x368
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithoutTarget_3808F2644E588D9244A0FFA9FCC22DF9;  // 0x20D8, size 0x4
    UPROPERTY() float __CustomProperty_LookAtInterpSpeedWithTarget_3808F2644E588D9244A0FFA9FCC22DF9;  // 0x20DC, size 0x4
    UPROPERTY() FVector __CustomProperty_LookAtTargetLocation_3808F2644E588D9244A0FFA9FCC22DF9;  // 0x20E0, size 0xC
    UPROPERTY() bool __CustomProperty_DoLookAt_3808F2644E588D9244A0FFA9FCC22DF9;  // 0x20EC, size 0x1
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Dec_5D16A7564B9B22E7433F8BB9737EAB90;  // 0x20F0, size 0x4
    UPROPERTY() float __CustomProperty_Pelvis_Speed_Inc_5D16A7564B9B22E7433F8BB9737EAB90;  // 0x20F4, size 0x4
    UPROPERTY() FVector __CustomProperty_Trace_Length_5D16A7564B9B22E7433F8BB9737EAB90;  // 0x20F8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasViewTarget;  // 0x2104, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ViewTargetLocation;  // 0x2108, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBurrowed;  // 0x2114, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRangedAttacking;  // 0x2115, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Reaver_Character_C* ReaverRef;  // 0x2118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ReaverState> ReaverState;  // 0x2120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x2124, size 0xC, named "Trace Length"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_BlendListByBool_F891089143FBB57445316BAE7E4D7767();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_BlendSpacePlayer_1BAEB04440AFF720B3C8F3AB327DE6CF();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_BlendSpacePlayer_983E8EB74382B451B5762B81B5990FF7();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_ControlRig_3808F2644E588D9244A0FFA9FCC22DF9();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_2C81E2EB45469E0910A9D89A40903335();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_5022880D40365663C92D0FB1EAF10D04();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_6321052449CA185CCEDE5A8243A611D9();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_648F652546538A37CBB15A85AFF07B5A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_8E492E18421B8739D35F5D93C2F28674();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_99355CB84980AA8CAA0627A74BF37629();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_DBCBE8254DAAFA03809738A86E25FE60();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_E2FCF7BA4819D7DE8F2C41B8A5C7994A();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_F1E41EE744F3E052FEE062A6494BF3DE();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Reaver_AnimBP_AnimGraphNode_TransitionResult_F3178EA446BD4951D912BA8B6095EAAC();
    UFUNCTION() void ExecuteUbergraph_SK_CRE_Reaver_AnimBP(int32 EntryPoint);  // parameters 0x4
};
