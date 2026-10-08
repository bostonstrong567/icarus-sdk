// /Game/ASS/CRE/Irradiated_Mutation/SK_CRE_Irradiated_Mutation_LookAt_CtrlRig.SK_CRE_Irradiated_Mutation_LookAt_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x674, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CRE_Irradiated_Mutation_LookAt_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTarget;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoLookAt;  // 0x065C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtTargetLocation;  // 0x0660, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalTargetHeight;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpSpeed;  // 0x0670, size 0x4
};
