// /Game/ASS/CRE/Orka/SK_CRE_Orka_Arctic_CtrlRig.SK_CRE_Orka_Arctic_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x688, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Orka_Arctic_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Root_Bone;  // 0x0650, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Pelvis_Bone;  // 0x0658, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_Speed_Dec;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_Speed_Inc;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Offset;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorRF;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorLF;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorLH;  // 0x0674, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorRH;  // 0x0678, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x067C, size 0xC
};
