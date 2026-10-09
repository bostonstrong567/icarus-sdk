// /Script/Icarus.RangedWeaponData
// size 0xD0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FRangedWeaponData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D HipAccuracy;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D AdsAccuracy;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SwayCurve_X;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SwayCurve_Y;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdsSwayMultiplier;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UMatineeCameraShake> WeaponFireShake;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeaponFireShakeAdsScale;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeaponFireShakeCrouchScale;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeaponReloadTime;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HipFOVMultiplier;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdsFOVMultiplier;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinRequiredCharge;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinThrowCharge;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeSpeed;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* LaunchForceCurve;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> ValidAmmoItems;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0080, size 0x50
};
