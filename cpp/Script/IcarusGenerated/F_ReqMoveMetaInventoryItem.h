// /Script/IcarusGenerated.ReqMoveMetaInventoryItem
// size 0x40, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqMoveMetaInventoryItem.h

USTRUCT()
struct FReqMoveMetaInventoryItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CharacterSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMetaInventoryID SrcMetaInventoryID;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMetaInventoryID DstMetaInventoryID;  // 0x0015, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ScrItemId;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DstItemId;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0038, size 0x4
};
