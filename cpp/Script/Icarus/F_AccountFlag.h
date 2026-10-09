// /Script/Icarus.AccountFlag
// size 0x68, declared in Icarus/Source/Icarus/Systems/Flags/AccountFlag.h

USTRUCT()
struct FAccountFlag : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FItemTemplateRowHandle> BlueprintUnlocks;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FWorkshopItemsRowHandle> WorkshopUnlocks;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FPlayerTalentModifiersRowHandle> TalentModifierUnlocks;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FLivingItemShopItemsRowHandle> LegendaryRewards;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FProspectListRowHandle> RewardedFromMissions;  // 0x0058, size 0x10
};
