// /Script/Icarus.BallisticSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x80, declared in Icarus/Source/Icarus/Subsystems/World/BallisticSubsystem.h

UCLASS()
class UBallisticSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<AIcarusPlayerCharacter*, FFiredProjectileInfo> PreviouslyFiredProjectiles;  // 0x0030, size 0x50

    UFUNCTION(BlueprintCallable) bool GetLastFiredProjectileInfo(AIcarusPlayerCharacter* Player, FFiredProjectileInfo& ProjectileInfo);  // parameters 0x51
    UFUNCTION(BlueprintCallable) void RecordFiredProjectileInfo(AIcarusPlayerCharacter* PlayerInstigator, AIcarusItem* FiredProjectile);  // parameters 0x10
};
