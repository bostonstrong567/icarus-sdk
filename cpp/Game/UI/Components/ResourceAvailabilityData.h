// /Game/UI/Components/ResourceAvailabilityData.ResourceAvailabilityData
// size 0x28

USTRUCT()
struct ResourceAvailabilityData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ResourceName;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* ResourceIcon;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasResource;  // 0x0020, size 0x1
};
