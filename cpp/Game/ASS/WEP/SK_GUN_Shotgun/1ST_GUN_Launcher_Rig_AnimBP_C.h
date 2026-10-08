// /Game/ASS/WEP/SK_GUN_Shotgun/1ST_GUN_Launcher_Rig_AnimBP.1ST_GUN_Launcher_Rig_AnimBP_C
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0x4A4, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_1ST_GUN_Launcher_Rig_AnimBP_C : public UIcarusAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0308, size 0x48
    UPROPERTY() FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x0350, size 0x20
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0370, size 0x20
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x0390, size 0x108
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsADS;  // 0x0498, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentInterp;  // 0x049C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Interp_Speed;  // 0x04A0, size 0x4, named "Interp Speed"

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_1ST_GUN_Launcher_Rig_AnimBP(int32 EntryPoint);  // parameters 0x4
};
