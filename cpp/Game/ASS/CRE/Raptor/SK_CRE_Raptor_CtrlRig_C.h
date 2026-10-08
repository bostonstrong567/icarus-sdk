// /Game/ASS/CRE/Raptor/SK_CRE_Raptor_CtrlRig.SK_CRE_Raptor_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x674, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Raptor_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTargetLocation;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoLookAt;  // 0x065C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendStart;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendEnd;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalTargetHeight;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugTarget;  // 0x066C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOnFourLegs;  // 0x066D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NeckScale;  // 0x0670, size 0x4
};
