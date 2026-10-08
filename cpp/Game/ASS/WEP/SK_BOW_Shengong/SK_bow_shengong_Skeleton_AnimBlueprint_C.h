// /Game/ASS/WEP/SK_BOW_Shengong/SK_bow_shengong_Skeleton_AnimBlueprint.SK_bow_shengong_Skeleton_AnimBlueprint_C
// Derives from: UIcarusBowAnimInstance > UIcarusFirearmAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x19C8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_bow_shengong_Skeleton_AnimBlueprint_C : public UIcarusBowAnimInstance
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
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0F58, size 0xA0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig_1;  // 0x0FF8, size 0x368
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x1360, size 0x368
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x16C8, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x1820, size 0x28
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1848, size 0x28
    UPROPERTY() bool __CustomProperty_isGlobal_5B74CA51454847B82219A1A49797DED6;  // 0x1870, size 0x1
    UPROPERTY() FTransform __CustomProperty_String_Global_Position_5B74CA51454847B82219A1A49797DED6;  // 0x1880, size 0x30
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_5B74CA51454847B82219A1A49797DED6;  // 0x18B0, size 0xC
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_06897A514FA8436F80812F918B05CF73;  // 0x18BC, size 0xC
    UPROPERTY() FTransform __CustomProperty_AttachArrowToHand_06897A514FA8436F80812F918B05CF73;  // 0x18D0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Focusing;  // 0x1900, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform StringWorldPosition;  // 0x1910, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandArrowPlacment;  // 0x1940, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsArrowDetached;  // 0x194C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachOffset;  // 0x1950, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is3RDCha;  // 0x1980, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* Owning_Player;  // 0x1988, size 0x8, named "Owning Player"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ThirdPerson;  // 0x1990, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x1998, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_C* FirearmActionable;  // 0x19A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_FocusableBehaviour_C* FocusableRef;  // 0x19A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;  // 0x19B0, size 0x8, named "Fire Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;  // 0x19B8, size 0x8, named "Ammo Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;  // 0x19C0, size 0x8, named "Aim Controller"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_AttachArrow();
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_DetachArrow();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CacheFocusing();
    UFUNCTION(BlueprintCallable) void CacheHandArrowPlacement();
    UFUNCTION(BlueprintCallable) void CacheStringPosition();
    UFUNCTION(BlueprintCallable) void CacheThirdPerson();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_476CBC634E2A301922C9199E742A3D5E();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_6904242543F0A35D218E5087B95B0AC6();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequenceEvaluator_ACEB6FBD42C018B55C391FA1BA382EC6();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequenceEvaluator_F17106794D80E5565FE1C7BF96E3C549();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_D4B5B3BE431B9543F3B5A6B3EB3355BF();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E260FAD04030F706707B36883C600625();
    UFUNCTION() void ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHandConnectedToString();  // parameters 0x1
};
