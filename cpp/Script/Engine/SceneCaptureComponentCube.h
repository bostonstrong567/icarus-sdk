// /Script/Engine.SceneCaptureComponentCube
// Derives from: USceneCaptureComponent > USceneComponent > UActorComponent > UObject
// size 0x2E0, declared in Engine/Source/Runtime/Engine/Classes/Components/SceneCaptureComponentCube.h

UCLASS(EditInlineNew, Config=Engine)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTargetCube* TextureTarget;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCaptureRotation;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTargetCube* TextureTargetLeft;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTargetCube* TextureTargetRight;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTarget2D* TextureTargetODS;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IPD;  // 0x02D8, size 0x4

    UFUNCTION(BlueprintCallable) void CaptureScene();
};
