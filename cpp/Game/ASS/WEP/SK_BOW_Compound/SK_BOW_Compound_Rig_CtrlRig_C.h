// /Game/ASS/WEP/SK_BOW_Compound/SK_BOW_Compound_Rig_CtrlRig.SK_BOW_Compound_Rig_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x691, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_BOW_Compound_Rig_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachArrowToHand;  // 0x0650, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ArrowPlacment;  // 0x0680, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimBlend;  // 0x068C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is3RD;  // 0x0690, size 0x1
};
