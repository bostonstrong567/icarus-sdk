// /Game/ASS/WEP/GUN_FlareGun/SK_GUN_FLAREGUN_Skeleton_AnimBlueprint.SK_GUN_FLAREGUN_Skeleton_AnimBlueprint_C
// Derives from: UAnimInstance > UObject
// size 0x521, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_GUN_FLAREGUN_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x02F8, size 0x48
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x0340, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;  // 0x03E0, size 0x80
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0460, size 0x80
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Loaded;  // 0x04E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LoadedBulletTransform;  // 0x04F0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ThirdPerson;  // 0x0520, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_GUN_FLAREGUN_Skeleton_AnimBlueprint(int32 EntryPoint);  // parameters 0x4
};
