// /Game/ASS/CRE/SwampBird/SK_CRE_SwampBird_LookAt_CtrlRig.SK_CRE_SwampBird_LookAt_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x688, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_SwampBird_LookAt_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoLookAt;  // 0x0650, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTargetLocation;  // 0x0654, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendStart;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendEnd;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalTargetHeight;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtLerp;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTarget;  // 0x0670, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtInterpSpeedWithTarget;  // 0x067C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtInterpSpeedWithoutTarget;  // 0x0680, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpSpeed;  // 0x0684, size 0x4
};
