// /Game/ASS/CRE/Scorpion/SK_CRE_Scorpion_CtrlRig.SK_CRE_Scorpion_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x674, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Scorpion_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TracedHeightFront;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TracedHeightMid;  // 0x0654, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TracedHeightRear;  // 0x0658, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Offset;  // 0x065C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x0660, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PelvisSpeedInc;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PelvisSpeedDec;  // 0x0670, size 0x4
};
