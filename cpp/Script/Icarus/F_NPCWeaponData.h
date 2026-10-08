// /Script/Icarus.NPCWeaponData
// size 0x138, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/NPCWeaponLibrary.generated.h

USTRUCT()
struct FNPCWeaponData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsRangedWeapon;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> WeaponStats;  // 0x0038, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAmmoTypesRowHandle AmmoType;  // 0x0088, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> AttackMontage;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> ReloadMontage;  // 0x00C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProjectileSpawnSocket;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFXSystemAsset> MuzzleFX;  // 0x00F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmAudioDataRowHandle AudioData;  // 0x0120, size 0x18
};
