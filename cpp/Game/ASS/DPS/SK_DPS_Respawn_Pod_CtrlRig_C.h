// /Game/ASS/DPS/SK_DPS_Respawn_Pod_CtrlRig.SK_DPS_Respawn_Pod_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x67C, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_DPS_Respawn_Pod_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Offset;  // 0x065C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Floor_Leg1_H;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorOpenPosition;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Floor_Leg2_H;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Floor_Leg3_H;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Floor_Leg4_H;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeightVOffset;  // 0x0674, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeightHOffset;  // 0x0678, size 0x4
};
