// /Game/ASS/DPS/SK_DPS_SML_DropShip_02_MID_CtrlRig.SK_DPS_SML_DropShip_02_MID_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x674, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_DPS_SML_DropShip_02_MID_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorExtend;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorInit;  // 0x0654, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorCurrent;  // 0x0658, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoorOpen_;  // 0x065C, size 0x1, named "DoorOpen?"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorHeight;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorRelative;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LadderExtention;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentLadderExtention;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorSpeed;  // 0x0670, size 0x4
};
