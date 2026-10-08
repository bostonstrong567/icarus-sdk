// /Script/Engine.StereoLayerComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x2E0, declared in Engine/Source/Runtime/Engine/Classes/Components/StereoLayerComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UStereoLayerComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLiveTexture : 1;  // 0x01F8, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSupportsDepth : 1;  // 0x01F8, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNoAlphaChannel : 1;  // 0x01F8, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTexture* Texture;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTexture* LeftTexture;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bQuadPreserveTextureRatio : 1;  // 0x0210, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D QuadSize;  // 0x0214, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBox2D UVRect;  // 0x021C, size 0x14
    UPROPERTY(Deprecated) float CylinderRadius;  // 0x0230, size 0x4
    UPROPERTY(Deprecated) float CylinderOverlayArc;  // 0x0234, size 0x4
    UPROPERTY(Deprecated) int32 CylinderHeight;  // 0x0238, size 0x4
    UPROPERTY(Deprecated) FEquirectProps EquirectProps;  // 0x023C, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EStereoLayerType> StereoLayerType;  // 0x0284, size 0x1
    UPROPERTY(Deprecated) TEnumAsByte<EStereoLayerShape> StereoLayerShape;  // 0x0285, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStereoLayerShape* Shape;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Priority;  // 0x0290, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bIsDirty;  // 0x0294, private
    bool bTextureNeedsUpdate;  // 0x0295, private
    uint32 LayerId;  // 0x0298, private
    FTransform LastTransform;  // 0x02A0, private
    bool bLastVisible;  // 0x02D0, private
    bool bNeedsPostLoadFixup;  // 0x02D1, private

    UFUNCTION(BlueprintCallable, BlueprintPure) UTexture* GetLeftTexture() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPriority() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetQuadSize() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UTexture* GetTexture() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FBox2D GetUVRect() const;  // parameters 0x14
    UFUNCTION(BlueprintCallable) void MarkTextureForUpdate();
    UFUNCTION(BlueprintCallable) void SetEquirectProps(FEquirectProps InScaleBiases);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void SetLeftTexture(UTexture* InTexture);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPriority(int32 InPriority);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetQuadSize(FVector2D InQuadSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTexture(UTexture* InTexture);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetUVRect(FBox2D InUVRect);  // parameters 0x14
};
