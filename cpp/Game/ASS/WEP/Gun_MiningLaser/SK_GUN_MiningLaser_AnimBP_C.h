// /Game/ASS/WEP/Gun_MiningLaser/SK_GUN_MiningLaser_AnimBP.SK_GUN_MiningLaser_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x3E4, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_GUN_MiningLaser_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x02F8, size 0xE8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Heat_Value;  // 0x03E0, size 0x4, named "Heat Value"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_GUN_MiningLaser_AnimBP(int32 EntryPoint);  // parameters 0x4
};
