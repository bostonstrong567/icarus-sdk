// /Script/Icarus.AttachmentIcon
// size 0x58, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/AttachmentIconsLibrary.generated.h

USTRUCT()
struct FAttachmentIcon : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle TagQuery;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0030, size 0x28
};
