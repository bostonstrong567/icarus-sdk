// /Game/ASS/DPS/SK_DPS_SML_DropShip_02_INT_AnimBP.SK_DPS_SML_DropShip_02_INT_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x438, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DPS_SML_DropShip_02_INT_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x02F8, size 0xA0
    UPROPERTY() FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x0398, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Shake;  // 0x0418, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* SFX_MediumShake;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* SFX_RattleSmall;  // 0x0428, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* SFX_RattleC;  // 0x0430, size 0x8

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DPS_SML_DropShip_02_INT_AnimBP(int32 EntryPoint);  // parameters 0x4
};
