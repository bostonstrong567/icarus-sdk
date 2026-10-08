// /Script/Icarus.GreatHuntCreatureInfo
// size 0xE0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/GreatHuntCreatureInfoLibrary.generated.h

USTRUCT()
struct FGreatHuntCreatureInfo : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* WeaponImage;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* BackgroundImage;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* BackgroundVerticalImage;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* BossImage;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentTreesRowHandle GreatHunt;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorldBossesRowHandle WorldBoss;  // 0x0068, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle LegendaryWeapon;  // 0x0080, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLCData;  // 0x0098, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTerrainsRowHandle Terrain;  // 0x00B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGreatHuntItemDisplay> ItemDisplays;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isComingSoon;  // 0x00D8, size 0x1
};
