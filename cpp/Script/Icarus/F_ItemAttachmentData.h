// /Script/Icarus.ItemAttachmentData
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FItemAttachmentData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TPAttachmentSocketName;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FPAttachmentSocketName;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BackAttachmentSocketName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EHandedness EquippableHandedness;  // 0x0030, size 0x1
};
