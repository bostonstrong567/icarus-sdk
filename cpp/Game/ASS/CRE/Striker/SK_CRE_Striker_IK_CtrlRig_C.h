// /Game/ASS/CRE/Striker/SK_CRE_Striker_IK_CtrlRig.SK_CRE_Striker_IK_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x679, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Striker_IK_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Offset;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x0654, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceBR;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceBL;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceFR;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceFL;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_Speed_Inc;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_Speed_Dec;  // 0x0674, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FourLeg;  // 0x0678, size 0x1
};
