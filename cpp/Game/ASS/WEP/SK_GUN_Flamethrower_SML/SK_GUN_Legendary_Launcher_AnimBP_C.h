// /Game/ASS/WEP/SK_GUN_Flamethrower_SML/SK_GUN_Legendary_Launcher_AnimBP.SK_GUN_Legendary_Launcher_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x341, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_GUN_Legendary_Launcher_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x02F8, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x0340, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_GUN_Legendary_Launcher_AnimBP(int32 EntryPoint);  // parameters 0x4
};
