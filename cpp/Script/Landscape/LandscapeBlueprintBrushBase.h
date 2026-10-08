// /Script/Landscape.LandscapeBlueprintBrushBase
// Derives from: AActor > UObject
// size 0x220, declared in Engine/Source/Runtime/Landscape/Public/LandscapeBlueprintBrushBase.h

UCLASS(Abstract, Config=Engine)
class ALandscapeBlueprintBrushBase : public AActor
{
public:

    UFUNCTION(BlueprintImplementableEvent) void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void Initialize(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize);  // parameters 0x40
    UFUNCTION(BlueprintNativeEvent) UTextureRenderTarget2D* Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void RequestLandscapeUpdate();

    // Virtual functions that start here:
    //   Initialize_Implementation, Initialize_Native, Render_Implementation, Render_Native
};
