// /Game/ASS/WEP/Gun_FlameThrower_LavaHunter/SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP.SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x42C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x02F8, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0400, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StoredUnits;  // 0x0420, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxStoredUnits;  // 0x0424, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RemainingFuel;  // 0x0428, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP_AnimGraphNode_ModifyBone_EBC781D94CA8D8FA0460DE8E1447B646();
    UFUNCTION() void ExecuteUbergraph_SK_WEP_GUN_FlameThrower_LavaHunter_Core_AnimBP(int32 EntryPoint);  // parameters 0x4
};
