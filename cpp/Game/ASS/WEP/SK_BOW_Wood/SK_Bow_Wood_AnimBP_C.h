// /Game/ASS/WEP/SK_BOW_Wood/SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C
// Derives from: UIcarusBowAnimInstance > UIcarusFirearmAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1D19, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Bow_Wood_AnimBP_C : public UIcarusBowAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0AA0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x0AA8, size 0x30
    UPROPERTY() FAnimNode_Inertialization AnimGraphNode_Inertialization;  // 0x0AD8, size 0x70
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x0B48, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x0BE8, size 0x80
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0C68, size 0xA0
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;  // 0x0D08, size 0x50
    UPROPERTY() FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x0D58, size 0x50
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0DA8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0E48, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot_1;  // 0x0EC8, size 0x48
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0F10, size 0x48
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_2;  // 0x0F58, size 0x368
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x12C0, size 0xA0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1360, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x16C8, size 0x368
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1A30, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1B88, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1BB0, size 0x28
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_1AFC6DC841DF1B33A148B680C698303C;  // 0x1BD8, size 0xC
    UPROPERTY() FTransform __CustomProperty_String_Global_Position_1AFC6DC841DF1B33A148B680C698303C;  // 0x1BF0, size 0x30
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_762D9D894231EBD747476CA4B48DD47C;  // 0x1C20, size 0xC
    UPROPERTY() FTransform __CustomProperty_AttachArrowToHand_762D9D894231EBD747476CA4B48DD47C;  // 0x1C30, size 0x30
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_C* FirearmActionable;  // 0x1C60, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x1C68, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform StringWorldPosition;  // 0x1C70, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandArrowPlacment;  // 0x1CA0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ArrowSwitch;  // 0x1CAC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsArrowDetached;  // 0x1CAD, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_FocusableBehaviour_C* FocusableRef;  // 0x1CB0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Focusing;  // 0x1CB8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachOffset;  // 0x1CC0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is3RDCha;  // 0x1CF0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;  // 0x1CF8, size 0x8, named "Fire Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;  // 0x1D00, size 0x8, named "Ammo Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;  // 0x1D08, size 0x8, named "Aim Controller"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* Owning_Player;  // 0x1D10, size 0x8, named "Owning Player"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ThirdPerson;  // 0x1D18, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_AttachArrow();
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_DetachArrow();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CacheFocusing();
    UFUNCTION(BlueprintCallable) void CacheHandArrowPlacement();
    UFUNCTION(BlueprintCallable) void CacheStringPosition();
    UFUNCTION(BlueprintCallable) void CacheThirdPerson();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_64FCB31F4605BEED61D62A8CB5B4B258();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_70413D204D31EB91B5FDB9A182B588B7();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_6DD8745D426A6F38770086BF085F12DF();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_7C9B176D4A593DD24D7ABFA297A8BA37();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_0B0929B943D728A6B691ABBCA2363390();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_32A8F6624DF7992ABC9209A21EF8085F();
    UFUNCTION() void ExecuteUbergraph_SK_Bow_Wood_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHandConnectedToString();  // parameters 0x1
};
