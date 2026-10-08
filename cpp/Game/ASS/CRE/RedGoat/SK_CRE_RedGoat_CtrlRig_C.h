// /Game/ASS/CRE/RedGoat/SK_CRE_RedGoat_CtrlRig.SK_CRE_RedGoat_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x68C, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_RedGoat_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRigElementKeyCollection ToCopy;  // 0x0650, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRigElementKeyCollection ToRotate;  // 0x0660, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TraceL;  // 0x0670, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorRH;  // 0x067C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorLH;  // 0x0680, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorLF;  // 0x0684, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorRF;  // 0x0688, size 0x4
};
