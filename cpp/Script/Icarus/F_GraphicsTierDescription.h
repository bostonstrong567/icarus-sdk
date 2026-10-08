// /Script/Icarus.GraphicsTierDescription
// size 0x38, declared in Icarus/Source/Icarus/Systems/Settings/GraphicsTier.h

USTRUCT()
struct FGraphicsTierDescription : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGraphicsCardVendor CardVendor;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CardDescriptionProbe;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CardPercent;  // 0x0030, size 0x4
};
