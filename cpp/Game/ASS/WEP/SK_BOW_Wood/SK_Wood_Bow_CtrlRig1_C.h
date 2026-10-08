// /Game/ASS/WEP/SK_BOW_Wood/SK_Wood_Bow_CtrlRig1.SK_Wood_Bow_CtrlRig1_C
// Derives from: UControlRig > UObject
// size 0x68D, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_Wood_Bow_CtrlRig1_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform String_Global_Position;  // 0x0650, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ArrowPlacment;  // 0x0680, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is3RD;  // 0x068C, size 0x1
};
