// /Script/IcarusGenerated.ReqAddMetaInventoryItem
// size 0x58, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqAddMetaInventoryItem.h

USTRUCT()
struct FReqAddMetaInventoryItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMetaInventoryID SrcMetaInventoryID;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaItem Item;  // 0x0018, size 0x40
};
