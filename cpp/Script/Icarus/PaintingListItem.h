// /Script/Icarus.PaintingListItem
// Derives from: UObject
// size 0x40, declared in Icarus/Source/Icarus/Paintings/PaintingListItem.h

UCLASS()
class UPaintingListItem : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPaintingsRowHandle PaintingRowHandle;  // 0x0028, size 0x18
};
