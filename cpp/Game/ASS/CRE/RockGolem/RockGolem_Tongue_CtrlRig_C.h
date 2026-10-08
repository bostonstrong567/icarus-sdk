// /Game/ASS/CRE/RockGolem/RockGolem_Tongue_CtrlRig.RockGolem_Tongue_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x668, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class URockGolem_Tongue_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TongueTarget;  // 0x065C, size 0xC
};
