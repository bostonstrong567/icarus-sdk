// /Game/Assets/3DArt/Interactables/Items/DevHammer/SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x5F1, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_Dev_Hammer_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;  // 0x02F8, size 0xA0
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0398, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x04A0, size 0x20
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x04C0, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0560, size 0x80
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Flying_Hammer_C* Hammer;  // 0x05E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FlyingForward;  // 0x05E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x05EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Swinging;  // 0x05F0, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_FmodEvent();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_Dev_Hammer_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetHammerActionable(UBP_ActionableBehaviour_Flying_Hammer_C*& Hammer);  // parameters 0x8
};
