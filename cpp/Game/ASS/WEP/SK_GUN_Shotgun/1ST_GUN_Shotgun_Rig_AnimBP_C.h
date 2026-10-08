// /Game/ASS/WEP/SK_GUN_Shotgun/1ST_GUN_Shotgun_Rig_AnimBP.1ST_GUN_Shotgun_Rig_AnimBP_C
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0x350, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class U_1ST_GUN_Shotgun_Rig_AnimBP_C : public UIcarusAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02D8, size 0x30
    UPROPERTY() FAnimNode_Slot AnimGraphNode_Slot;  // 0x0308, size 0x48

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_1ST_GUN_Shotgun_Rig_AnimBP(int32 EntryPoint);  // parameters 0x4
};
