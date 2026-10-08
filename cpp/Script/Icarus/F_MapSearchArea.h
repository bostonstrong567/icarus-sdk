// /Script/Icarus.MapSearchArea
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/MapSearchAreaLibrary.generated.h

USTRUCT()
struct FMapSearchArea : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Color;  // 0x0040, size 0x10
};
