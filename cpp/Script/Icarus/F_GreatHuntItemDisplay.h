// /Script/Icarus.GreatHuntItemDisplay
// size 0x20, declared in Icarus/Source/Icarus/AI/Epic/GreatHuntCreatureInfo.h

USTRUCT()
struct FGreatHuntItemDisplay
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* IconOverride;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemReward;  // 0x0008, size 0x18
};
