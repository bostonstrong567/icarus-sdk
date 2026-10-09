// /Script/MovieSceneCapture.MovieSceneCaptureSettings
// size 0x70, declared in Engine/Source/Runtime/MovieSceneCapture/Public/MovieSceneCaptureSettings.h

USTRUCT()
struct FMovieSceneCaptureSettings
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FDirectoryPath OutputDirectory;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) TSubclassOf<AGameModeBase> GameModeOverride;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString OutputFormat;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bOverwriteExisting;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bUseRelativeFrameNumbers;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 HandleFrames;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString MovieExtension;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) uint8 ZeroPadFrameNumbers;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameRate FrameRate;  // 0x0044, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bUseCustomFrameRate;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FFrameRate CustomFrameRate;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FCaptureResolution Resolution;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bEnableTextureStreaming;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bCinematicEngineScalability;  // 0x0061, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bCinematicMode;  // 0x0062, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bAllowMovement;  // 0x0063, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bAllowTurning;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bShowPlayer;  // 0x0065, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bShowHUD;  // 0x0066, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bUsePathTracer;  // 0x0067, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 PathTracerSamplePerPixel;  // 0x0068, size 0x4
};
