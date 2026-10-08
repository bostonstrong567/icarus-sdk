// /Game/ASS/WEP/SK_BOW_Lark/SK_BOW_Lark_AnimBP.SK_BOW_Lark_AnimBP_C
// Derives from: UIcarusBowAnimInstance > UIcarusFirearmAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x19A9, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_BOW_Lark_AnimBP_C : public UIcarusBowAnimInstance
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
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0F58, size 0x158
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x10B0, size 0xA0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x1150, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x14B8, size 0x368
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1820, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1848, size 0x28
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_A04C99374E296176B58EE4BAF0CD382D;  // 0x1870, size 0xC
    UPROPERTY() FTransform __CustomProperty_String_Global_Position_A04C99374E296176B58EE4BAF0CD382D;  // 0x1880, size 0x30
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_4893589A49F5C17B51A90AAE3EC27BAB;  // 0x18B0, size 0xC
    UPROPERTY() FTransform __CustomProperty_AttachArrowToHand_4893589A49F5C17B51A90AAE3EC27BAB;  // 0x18C0, size 0x30
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_C* FirearmActionable;  // 0x18F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x18F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_FocusableBehaviour_C* FocusableRef;  // 0x1900, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsArrowDetached;  // 0x1908, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Focusing;  // 0x1909, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform StringWorldPosition;  // 0x1910, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandArrowPlacment;  // 0x1940, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachOffset;  // 0x1950, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is3RDCha;  // 0x1980, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;  // 0x1988, size 0x8, named "Fire Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;  // 0x1990, size 0x8, named "Ammo Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;  // 0x1998, size 0x8, named "Aim Controller"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* Owning_Player;  // 0x19A0, size 0x8, named "Owning Player"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ThirdPerson;  // 0x19A8, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_AttachArrow();
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_DetachArrow();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CacheFocusing();
    UFUNCTION(BlueprintCallable) void CacheHandArrowPlacement();
    UFUNCTION(BlueprintCallable) void CacheStringPosition();
    UFUNCTION(BlueprintCallable) void CacheThirdPerson();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lark_AnimBP_AnimGraphNode_BlendListByBool_8D908383441A127FD259B3B3FA9A8A6D();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lark_AnimBP_AnimGraphNode_BlendListByBool_F8B70F86466B5785134A809163AC7B9C();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lark_AnimBP_AnimGraphNode_SequenceEvaluator_1E63E6C948BF3597E41439A70596781E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lark_AnimBP_AnimGraphNode_SequenceEvaluator_72F99F9649FC974E8CC86F9FE3005EA5();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lark_AnimBP_AnimGraphNode_SequencePlayer_62345ED44EFB05CE20A8F9BB38882F6E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Lark_AnimBP_AnimGraphNode_SequencePlayer_9C2544CD447396E1F325E181540CAF13();
    UFUNCTION() void ExecuteUbergraph_SK_BOW_Lark_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHandConnectedToString();  // parameters 0x1
};
