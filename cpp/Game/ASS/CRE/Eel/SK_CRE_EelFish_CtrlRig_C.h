// /Game/ASS/CRE/Eel/SK_CRE_EelFish_CtrlRig.SK_CRE_EelFish_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x664, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_EelFish_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SwimmingAmount;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SwimmingSpeed;  // 0x0654, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SwimStraight_;  // 0x0658, size 0x1, named "SwimStraight?"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TurnAngle;  // 0x065C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeathRoll;  // 0x0660, size 0x4
};
