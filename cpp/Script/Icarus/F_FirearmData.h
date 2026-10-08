// /Script/Icarus.FirearmData
// size 0x690, declared in Icarus/Source/Icarus/DataStructs/Tools/FirearmData.h

USTRUCT()
struct FFirearmData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D HipAccuracy;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D AimAccuracy;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LaunchForce;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmChargeData ChargeData;  // 0x0030, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmVisualData VisualData;  // 0x0050, size 0x560
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmStaminaData StaminaData;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D RecoilAmount;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageMultiplier;  // 0x05C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EFireMode> FireModes;  // 0x05C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EReloadType ReloadType;  // 0x05D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FValidAmmoTypesRowHandle ValidAmmoTypes;  // 0x05DC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUnlimitedAmmo;  // 0x05F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AmmoCapacity;  // 0x05F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RoundsPerMinute;  // 0x05FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReloadTime;  // 0x0600, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0608, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmAudioDataRowHandle AudioData;  // 0x0658, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeaponLoudness;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmScopeDataRowHandle ScopeRow;  // 0x0674, size 0x18
};
