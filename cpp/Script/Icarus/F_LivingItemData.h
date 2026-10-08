// /Script/Icarus.LivingItemData
// size 0x90, declared in Icarus/Source/Icarus/Traits/Behaviours/LivingItem/LivingItemData.h

USTRUCT()
struct FLivingItemData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLivingItemUpgradeSlotData> UpgradeSlots;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ItemPreviewOffset;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator ItemPreviewRotation;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> PreviewMeshOverride;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<ULivingItemComponent> BehaviourOverride;  // 0x0068, size 0x28
};
