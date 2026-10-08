// /Game/ThirdPartyAssets/CharacterAnimations/Mesh/SK_NPC_LookAt_CtrlRig.SK_NPC_LookAt_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x68A, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_NPC_LookAt_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTarget;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoLookAt;  // 0x065C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTargetLocation;  // 0x0660, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendStart;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtDistanceBlendEnd;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalTargetHeight;  // 0x0674, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtLerp;  // 0x0678, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtInterpSpeedWithTarget;  // 0x067C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtInterpSpeedWithoutTarget;  // 0x0680, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpSpeed;  // 0x0684, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoLookAt_Internal;  // 0x0688, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreNeckMovement;  // 0x0689, size 0x1
};
