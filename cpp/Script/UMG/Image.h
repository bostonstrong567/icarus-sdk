// /Script/UMG.Image
// Derives from: UWidget > UVisual > UObject
// size 0x210, declared in Engine/Source/Runtime/UMG/Public/Components/Image.h

UCLASS()
class UImage : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateBrush Brush;  // 0x0108, size 0x88
    UPROPERTY() FGetSlateBrush BrushDelegate;  // 0x0190, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor ColorAndOpacity;  // 0x01A0, size 0x10
    UPROPERTY() FGetLinearColor ColorAndOpacityDelegate;  // 0x01B0, size 0x10
    UPROPERTY(EditAnywhere) bool bFlipForRightToLeftFlowDirection;  // 0x01C0, size 0x1
    UPROPERTY(EditAnywhere) FOnPointerEvent OnMouseButtonDownEvent;  // 0x01C4, size 0x10
protected:
    TSharedPtr<SImage,0> MyImage;  // 0x01D8, not reflected
    TSharedPtr<FStreamableHandle,0> StreamingHandle;  // 0x01E8, not reflected
    FSoftObjectPath StreamingObjectPath;  // 0x01F8, not reflected
public:
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* GetDynamicMaterial();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrush(const FSlateBrush& InBrush);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetBrushFromAsset(USlateBrushAsset* Asset);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrushFromAtlasInterface(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetBrushFromMaterial(UMaterialInterface* Material);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrushFromSoftMaterial(TSoftObjectPtr<UMaterialInterface> SoftMaterial);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetBrushResourceObject(UObject* ResourceObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrushSize(FVector2D DesiredSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrushTintColor(FSlateColor TintColor);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetColorAndOpacity(FLinearColor InColorAndOpacity);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetOpacity(float InOpacity);  // parameters 0x4

    // Virtual functions that start here:
    //   CancelImageStreaming, OnImageStreamingComplete, OnImageStreamingStarted, RequestAsyncLoad, SetBrush
    //   SetBrushFromAsset, SetBrushFromAtlasInterface, SetBrushFromMaterial, SetBrushFromSoftMaterial
    //   SetBrushFromSoftTexture, SetBrushFromTexture, SetBrushFromTextureDynamic
};
