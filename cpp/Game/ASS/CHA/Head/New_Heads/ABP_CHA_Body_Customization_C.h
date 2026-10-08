// /Game/ASS/CHA/Head/New_Heads/ABP_CHA_Body_Customization.ABP_CHA_Body_Customization_C
// Derives from: UAnimInstance > UObject
// size 0x370, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UABP_CHA_Body_Customization_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;  // 0x02F8, size 0x78

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_ABP_CHA_Body_Customization(int32 EntryPoint);  // parameters 0x4
};
