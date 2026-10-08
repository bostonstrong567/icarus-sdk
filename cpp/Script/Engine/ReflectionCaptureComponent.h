// /Script/Engine.ReflectionCaptureComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/Components/ReflectionCaptureComponent.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class UReflectionCaptureComponent : public USceneComponent
{
public:
    UPROPERTY(Instanced) UBillboardComponent* CaptureOffsetComponent;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EReflectionSourceType ReflectionSourceType;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EMobileReflectionCompression MobileReflectionCompression;  // 0x0201, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTextureCube* Cubemap;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SourceCubemapAngle;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Brightness;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bModifyMaxValueRGBM;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxValueRGBM;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CaptureOffset;  // 0x0220, size 0xC
    UPROPERTY() FGuid MapBuildDataId;  // 0x022C, size 0x10
    UPROPERTY(Transient) UTextureCube* CachedEncodedHDRCubemap;  // 0x0250, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FReflectionCaptureProxy * SceneProxy;  // 0x0240
    bool bNeedsRecaptureOrUpload;  // 0x0248, private
    float CachedAverageBrightness;  // 0x0258, private
    FRenderCommandFence ReleaseResourcesFence;  // 0x0260, private

    // Virtual functions that start here:
    //   GetInfluenceBoundingRadius, UpdatePreviewShape
};
