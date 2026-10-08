// /Game/ASS/WEP/SK_GUN_HuntingRifle/SK_GUN_CHACRifle_AnimBP.SK_GUN_CHACRifle_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x498, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_GUN_CHACRifle_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x02F8, size 0x48
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0340, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0360, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0468, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BulletBoneLocation;  // 0x0488, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BulletOffset;  // 0x0494, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_CHACRifle_AnimBP_AnimGraphNode_ModifyBone_1CDC1C8A4324F54288DC53B8AB92CE22();
    UFUNCTION() void ExecuteUbergraph_SK_GUN_CHACRifle_AnimBP(int32 EntryPoint);  // parameters 0x4
};
