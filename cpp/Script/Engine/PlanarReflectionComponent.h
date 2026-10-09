// /Script/Engine.PlanarReflectionComponent
// Derives from: USceneCaptureComponent > USceneComponent > UActorComponent > UObject
// size 0x3A0, declared in Engine/Source/Runtime/Engine/Classes/Components/PlanarReflectionComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class UPlanarReflectionComponent : public USceneCaptureComponent
{
public:
    UPROPERTY(Instanced) UBoxComponent* PreviewBox;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere) float NormalDistortionStrength;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere) float PrefilterRoughness;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere) float PrefilterRoughnessDistance;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere) int32 ScreenPercentage;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere) float ExtraFOV;  // 0x02C8, size 0x4
    UPROPERTY(Deprecated) float DistanceFromPlaneFadeStart;  // 0x02CC, size 0x4
    UPROPERTY(Deprecated) float DistanceFromPlaneFadeEnd;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere) float DistanceFromPlaneFadeoutStart;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere) float DistanceFromPlaneFadeoutEnd;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere) float AngleFromPlaneFadeStart;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere) float AngleFromPlaneFadeEnd;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere) bool bShowPreviewPlane;  // 0x02E4, size 0x1
    UPROPERTY(EditAnywhere) bool bRenderSceneTwoSided;  // 0x02E5, size 0x1
private:
    FRenderCommandFence ReleaseResourcesFence;  // 0x02E8, not reflected
    FPlanarReflectionSceneProxy * SceneProxy;  // 0x02F8, not reflected
    FPlanarReflectionRenderTarget * RenderTarget;  // 0x0300, not reflected
    FMatrix[2] ProjectionWithExtraFOV;  // 0x0310, not reflected
    int32 PlanarReflectionId;  // 0x0390, not reflected
};
