// /Game/ASS/WEP/SK_BOW_Sandworm/SK_BOW_Recurve_Sandworm_Skeleton_AnimBP.SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_C
// Derives from: UIcarusBowAnimInstance > UIcarusFirearmAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x19B1, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_BOW_Recurve_Sandworm_Skeleton_AnimBP_C : public UIcarusBowAnimInstance
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
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_CBF8F8EF4BEB74386EB6ACA94F356F3C;  // 0x1870, size 0xC
    UPROPERTY() FTransform __CustomProperty_String_Global_Position_CBF8F8EF4BEB74386EB6ACA94F356F3C;  // 0x1880, size 0x30
    UPROPERTY() FVector __CustomProperty_ArrowPlacment_4C4BCC8942975016EC07D680B25CE1CF;  // 0x18B0, size 0xC
    UPROPERTY() FTransform __CustomProperty_AttachArrowToHand_4C4BCC8942975016EC07D680B25CE1CF;  // 0x18C0, size 0x30
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_C* FirearmActionable;  // 0x18F0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_FocusableBehaviour_C* FocusableRef;  // 0x18F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;  // 0x1900, size 0x8, named "Fire Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;  // 0x1908, size 0x8, named "Ammo Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;  // 0x1910, size 0x8, named "Aim Controller"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x1918, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Focusing;  // 0x1920, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform StringWorldPosition;  // 0x1930, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandArrowPlacment;  // 0x1960, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsArrowDetached;  // 0x196C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachOffset;  // 0x1970, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is3RDCha;  // 0x19A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* Owning_Player;  // 0x19A8, size 0x8, named "Owning Player"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ThirdPerson;  // 0x19B0, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_AttachArrow();
    UFUNCTION(BlueprintCallable) void AnimNotify_Bow_DetachArrow();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CacheFocusing();
    UFUNCTION(BlueprintCallable) void CacheHandArrowPlacement();
    UFUNCTION(BlueprintCallable) void CacheStringPosition();
    UFUNCTION(BlueprintCallable) void CacheThirdPerson();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_523F55D64AA4735B4437C1A96C51B4EC();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_E92FB9D7447CBDC43E7E1180FA904DC8();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequenceEvaluator_04EFE18147B71418128A7B97F0494F02();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequenceEvaluator_3F3021A94EE473410BFBB7B60E219331();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_027BD3E946F928B992A76FBFA01F1E91();
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_95B1DA8C469BE84BE2FB62B66F466039();
    UFUNCTION() void ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHandConnectedToString();  // parameters 0x1
};
