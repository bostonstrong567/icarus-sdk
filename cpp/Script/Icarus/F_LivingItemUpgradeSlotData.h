// /Script/Icarus.LivingItemUpgradeSlotData
// size 0x50, declared in Icarus/Source/Icarus/Traits/Behaviours/LivingItem/LivingItemData.h

USTRUCT()
struct FLivingItemUpgradeSlotData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SlotPosition2D;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D PinPosition2D;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D PinBendPosition2D;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLivingItemUpgradesRowHandle> AvailableUpgrades;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FChallengesRowHandle ChallengeToUnlock;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMeshCustomisationData> DefaultSlotMeshes;  // 0x0040, size 0x10
};
