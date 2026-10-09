// /Script/IcarusGenerated.ReqBackToHab
// size 0x48, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqBackToHab.h

USTRUCT()
struct FReqBackToHab
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LeftWithShip;  // 0x0024, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaItem> MetaItems;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> MetaResources;  // 0x0038, size 0x10
};
