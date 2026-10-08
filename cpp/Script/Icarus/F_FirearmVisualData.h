// /Script/Icarus.FirearmVisualData
// size 0x560, declared in Icarus/Source/Icarus/DataStructs/Tools/FirearmData.h

USTRUCT()
struct FFirearmVisualData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUsesPreviewItem;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFirearmAttachType PreviewItemAttachType;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName PreviewItemAttachSocket1P;  // 0x0004, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName PreviewItemAttachSocket3P;  // 0x000C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UMatineeCameraShake> FireShake;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFireShakeHold;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireShakeScale;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireShakeAimScale;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireShakeCrouchScale;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UMatineeCameraShake> ChargeShake;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeShakeScale;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeShakeAimScale;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeShakeCrouchScale;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeShakeStartDelay;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeShakeApplyDelay;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeShakeAccuracyMultiplier;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFXSystemAsset> FireParticle;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFXSystemAsset> TrailParticle;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VisualRecoil;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IdleFOVMultiplier;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimFOVMultiplier;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeFOVMultiplier;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmAnimData SkeletalItemAnimData;  // 0x00B0, size 0x118
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmAnimData FirstPersonAnimData;  // 0x01C8, size 0x118
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearm3PAnimData ThirdPersonAnimData;  // 0x02E0, size 0x140
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearm3PNewAnimData NewThirdPersonAnimData;  // 0x0420, size 0x140
};
