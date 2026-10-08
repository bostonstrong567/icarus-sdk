// /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
// Derives from: UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0xC0, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/CompositionGraphCaptureProtocol.h

UCLASS(Config=EditorPerProjectUserSettings)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FCompositionGraphCapturePasses IncludeRenderPasses;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bCaptureFramesInHDR;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 HDRCompressionQuality;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) TEnumAsByte<EHDRCaptureGamut> CaptureGamut;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FSoftObjectPath PostProcessingMaterial;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bDisableScreenPercentage;  // 0x0090, size 0x1
    UPROPERTY(Transient) UMaterialInterface* PostProcessingMaterialPtr;  // 0x0098, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TWeakPtr<FSceneViewport,0> SceneViewport;  // 0x00A0, private
    TSharedPtr<FFrameCaptureViewExtension,1> ViewExtension;  // 0x00B0, private
};
