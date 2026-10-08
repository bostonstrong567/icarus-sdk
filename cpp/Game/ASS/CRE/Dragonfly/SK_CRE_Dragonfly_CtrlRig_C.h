// /Game/ASS/CRE/Dragonfly/SK_CRE_Dragonfly_CtrlRig.SK_CRE_Dragonfly_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x69C, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Dragonfly_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTargetLocation;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OffsetTargetLocation;  // 0x065C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugTarget;  // 0x0668, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoLookAt;  // 0x0669, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendStart;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendEnd;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalTargetHeight;  // 0x0674, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InternalLookAtAlpha;  // 0x0678, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EnableTorsoLookAt;  // 0x067C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TorsoLookAtTargetLocation;  // 0x0680, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BodyBone;  // 0x068C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HeadBone;  // 0x0694, size 0x8
};
