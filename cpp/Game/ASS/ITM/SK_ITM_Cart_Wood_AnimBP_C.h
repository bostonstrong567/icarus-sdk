// /Game/ASS/ITM/SK_ITM_Cart_Wood_AnimBP.SK_ITM_Cart_Wood_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x840, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_ITM_Cart_Wood_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;  // 0x02F8, size 0x1D8
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x04D0, size 0x368
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* SourceMeshComponent;  // 0x0838, size 0x8

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_ITM_Cart_Wood_AnimBP(int32 EntryPoint);  // parameters 0x4
};
