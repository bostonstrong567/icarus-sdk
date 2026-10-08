// /Script/Icarus.TurretData
// size 0xB8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FTurretData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MuzzlePitchExtents;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MuzzleYawExtents;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MuzzleMoveSpeed;  // 0x0024, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MuzzleSpread;  // 0x002C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PermitBeginFireAngle;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxRange;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BurstFireRate;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BurstFireShots;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LaunchForce;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CheckTargetPeriod;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CoolDownPeriod;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFXSystemAsset> FireParticle;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> FireSound;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FValidAmmoTypesRowHandle ValidAmmoTypes;  // 0x00A0, size 0x18
};
