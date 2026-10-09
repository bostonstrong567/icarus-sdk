// /Script/Icarus.ProjectileFireParams
// size 0x10, declared in Icarus/Source/Icarus/Traits/BallisticComponent.h

USTRUCT()
struct FProjectileFireParams
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RangedWeaponDamageMultiplier;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUnbreakable;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EProjectileBreakModifier ProjectileBreakModifier;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStealthAttackType StealthAttack;  // 0x0006, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOwnerHighlightProjectile;  // 0x0007, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RicochetCount;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PierceCount;  // 0x000C, size 0x4
};
