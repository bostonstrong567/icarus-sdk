// /Script/Icarus.ItemClassificationsIconsData
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ItemClassificationsIconsLibrary.generated.h

USTRUCT()
struct FItemClassificationsIconsData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle TagQuery;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Icon;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Tooltip;  // 0x0038, size 0x18
};
