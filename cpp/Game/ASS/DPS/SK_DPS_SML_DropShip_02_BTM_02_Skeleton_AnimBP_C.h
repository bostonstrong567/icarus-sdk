// /Game/ASS/DPS/SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x7C1, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;  // 0x02F8, size 0x28
    UPROPERTY() FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x0320, size 0x28
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult_1;  // 0x0348, size 0x30
    UPROPERTY() FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x0378, size 0x30
    UPROPERTY() FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x03A8, size 0xB0
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x0458, size 0x368
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDeployed;  // 0x07C0, size 0x1

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AnimNotify_PlaySound();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
};
