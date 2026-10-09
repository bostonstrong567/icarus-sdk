// /Script/Icarus.RadarMapGridBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/UI/Map/RadarMapGridBase.h

UCLASS(EditInlineNew)
class URadarMapGridBase : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FSlateFontInfo FontInfo;  // 0x0260, size 0x58
    UPROPERTY(EditAnywhere) FVector2D NameOffset;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere) FLinearColor GridTint;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GridNumX;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GridNumY;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere) float GridThickness;  // 0x02D8, size 0x4
    bool bRenderImage;  // 0x02DC, not reflected
public:
    UFUNCTION(BlueprintImplementableEvent) void OnRenderGridImage(bool bInRenderImage);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RenderGridImage(bool bInRenderImage);  // parameters 0x1
};
