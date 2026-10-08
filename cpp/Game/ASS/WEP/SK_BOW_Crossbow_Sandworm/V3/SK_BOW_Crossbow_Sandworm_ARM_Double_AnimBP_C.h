// /Game/ASS/WEP/SK_BOW_Crossbow_Sandworm/V3/SK_BOW_Crossbow_Sandworm_ARM_Double_AnimBP.SK_BOW_Crossbow_Sandworm_ARM_Double_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x8D8, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_BOW_Crossbow_Sandworm_ARM_Double_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x02F8, size 0x48
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x0340, size 0x28
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x0368, size 0xA0
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;  // 0x0408, size 0x158
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;  // 0x0560, size 0x28
    UPROPERTY() FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x0588, size 0x158
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x06E0, size 0xA0
    UPROPERTY() FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x0780, size 0x28
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x07A8, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0828, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Loaded;  // 0x08A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Reloading;  // 0x08A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x08AA, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;  // 0x08B0, size 0x8, named "Ammo Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;  // 0x08B8, size 0x8, named "Aim Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;  // 0x08C0, size 0x8, named "Fire Controller"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase;  // 0x08C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_C* FirearmBehaviour;  // 0x08D0, size 0x8

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_BOW_Crossbow_Sandworm_ARM_Double_AnimBP(int32 EntryPoint);  // parameters 0x4
};
