// /Script/Icarus.GraphicsTierDescriptionMods
// size 0x38, declared in Icarus/Source/Icarus/Systems/Settings/GraphicsTier.h

USTRUCT()
struct FGraphicsTierDescriptionMods : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGraphicsCardVendor CardVendor;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CardDescriptionModProbe;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CardModPercent;  // 0x0030, size 0x4
};
