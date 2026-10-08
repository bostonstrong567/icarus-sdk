// /Game/ASS/CRE/Suzie/SK_CRE_Suzie_CtrlRig.SK_CRE_Suzie_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x690, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Suzie_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator OffsetRotation;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_MainB;  // 0x065C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_MainBM;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_MainFM;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_MainF;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_F;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_FM;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_MF;  // 0x0674, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_MB;  // 0x0678, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_BM;  // 0x067C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorH_B;  // 0x0680, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TraceLength;  // 0x0684, size 0xC
};
