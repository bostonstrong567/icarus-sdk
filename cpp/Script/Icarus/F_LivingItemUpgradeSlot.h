// /Script/Icarus.LivingItemUpgradeSlot
// size 0x18, declared in Icarus/Source/Icarus/Traits/Behaviours/LivingItem/LivingItemData.h

USTRUCT()
struct FLivingItemUpgradeSlot
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemUpgradesEnum UpgradeSelection;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnlockProgress;  // 0x0010, size 0x4
};
