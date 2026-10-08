// /Game/ASS/CHA/Human/3RD/SK_CHA_3RD_MAL_01_Mounted_CtrlRig.SK_CHA_3RD_MAL_01_Mounted_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x69C, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_CHA_3RD_MAL_01_Mounted_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeFeetOffset;  // 0x0650, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpineCurlAmount;  // 0x065C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeHandsOffset;  // 0x0660, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HandSpaceTargetLocation;  // 0x066C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeHandSpaceOffset;  // 0x0678, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoLookAt;  // 0x0684, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtDirection;  // 0x0688, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerletAlpha;  // 0x0694, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerletStrength;  // 0x0698, size 0x4
};
