// /Game/ASS/WEP/SK_BOW_Crossbow_02/SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x8D8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_BOW_Crossbow_02_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x02F8, size 0x80
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0378, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x03C0, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x03E8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0488, size 0x80
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0508, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0660, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0688, size 0x158
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x07E0, size 0xA0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0880, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_C* FirearmBehaviour;  // 0x08A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x08B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Reloading;  // 0x08B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Loaded;  // 0x08B2, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase;  // 0x08B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;  // 0x08C0, size 0x8, named "Fire Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;  // 0x08C8, size 0x8, named "Ammo Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;  // 0x08D0, size 0x8, named "Aim Controller"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP(int32 EntryPoint);  // parameters 0x4
};
