// /Script/Icarus.PaintingData
// size 0x98, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/PaintingsLibrary.generated.h

USTRUCT()
struct FPaintingData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> SmallPaintingImage;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> LargePaintingImage;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsMonitor;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInstance> MonitorMaterial;  // 0x0070, size 0x28
};
