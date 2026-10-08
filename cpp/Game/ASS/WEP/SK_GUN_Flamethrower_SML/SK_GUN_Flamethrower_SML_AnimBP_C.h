// /Game/ASS/WEP/SK_GUN_Flamethrower_SML/SK_GUN_Flamethrower_SML_AnimBP.SK_GUN_Flamethrower_SML_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x42C, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_GUN_Flamethrower_SML_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x02F8, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0318, size 0x108
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StoredUnits;  // 0x0420, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxStoredUnits;  // 0x0424, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RemainingFuel;  // 0x0428, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_Flamethrower_SML_AnimBP_AnimGraphNode_ModifyBone_BF19EC624A254267036FD085E3F7A43A();
    UFUNCTION() void ExecuteUbergraph_SK_GUN_Flamethrower_SML_AnimBP(int32 EntryPoint);  // parameters 0x4
};
