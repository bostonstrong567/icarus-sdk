// /Script/IcarusGenerated.ResUnlockWorkshopItem
// size 0x28, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResUnlockWorkshopItem.h

USTRUCT()
struct FResUnlockWorkshopItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UnlockedTalent;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> CurrencyDelta;  // 0x0018, size 0x10
};
