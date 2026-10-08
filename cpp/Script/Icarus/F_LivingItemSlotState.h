// /Script/Icarus.LivingItemSlotState
// size 0x78, declared in Icarus/Source/Icarus/Traits/Behaviours/LivingItem/LivingItemBlueprintFunctionLibrary.h

USTRUCT()
struct FLivingItemSlotState
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SlotIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ChallengeProgress;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsActiveChallenge;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSlotUnlocked;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLivingItemUpgradeSlotData SlotData;  // 0x0010, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLivingItemUpgradesRowHandle CurrentUpgrade;  // 0x0060, size 0x18
};
