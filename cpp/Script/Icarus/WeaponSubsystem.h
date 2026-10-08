// /Script/Icarus.WeaponSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/WeaponSubsystem.h

UCLASS()
class UWeaponSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FProjectileFiredNotifySignature OnProjectileFiredNotify;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastProjectileFiredDelegate(AIcarusPlayerCharacter* Player, AIcarusItem* Projectile);  // parameters 0x10
};
