// /Script/Icarus.AmmoTypeData
// size 0x78, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FAmmoTypeData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProjectileCount;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProjectileDamage;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ProjectileAccuracy;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0028, size 0x50
};
