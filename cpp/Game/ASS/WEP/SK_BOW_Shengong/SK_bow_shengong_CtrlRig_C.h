// /Game/ASS/WEP/SK_BOW_Shengong/SK_bow_shengong_CtrlRig.SK_bow_shengong_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x6C1, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_bow_shengong_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachArrowToHand;  // 0x0650, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ArrowPlacment;  // 0x0680, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is3RD;  // 0x068C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform String_Global_Position;  // 0x0690, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isGlobal;  // 0x06C0, size 0x1
};
