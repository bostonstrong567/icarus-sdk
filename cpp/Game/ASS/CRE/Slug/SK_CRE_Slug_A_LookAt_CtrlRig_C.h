// /Game/ASS/CRE/Slug/SK_CRE_Slug_A_LookAt_CtrlRig.SK_CRE_Slug_A_LookAt_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x668, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Slug_A_LookAt_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Target;  // 0x065C, size 0xC
};
