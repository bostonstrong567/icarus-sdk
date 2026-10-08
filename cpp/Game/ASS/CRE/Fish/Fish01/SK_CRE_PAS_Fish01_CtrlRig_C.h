// /Game/ASS/CRE/Fish/Fish01/SK_CRE_PAS_Fish01_CtrlRig.SK_CRE_PAS_Fish01_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x668, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_PAS_Fish01_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AnimateFins;  // 0x0650, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InterpolatedDelta;  // 0x0654, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NewSpeed;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x0664, size 0x4
};
