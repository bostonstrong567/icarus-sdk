// /Game/BP/Objects/World/Items/Deployables/ProcessorPreviewData.ProcessorPreviewData
// size 0x1F8

USTRUCT()
struct ProcessorPreviewData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0000, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ProcessorPreview> State;  // 0x01F0, size 0x1
};
