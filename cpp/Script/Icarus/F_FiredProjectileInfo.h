// /Script/Icarus.FiredProjectileInfo
// size 0x40, declared in Icarus/Source/Icarus/Subsystems/World/BallisticSubsystem.h

USTRUCT()
struct FFiredProjectileInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTransform SpawnTransform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SpawnTimeInGameSeconds;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TWeakObjectPtr<AIcarusItem> Projectile;  // 0x0034, size 0x8
};
