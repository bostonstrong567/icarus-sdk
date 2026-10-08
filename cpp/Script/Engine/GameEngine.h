// /Script/Engine.GameEngine
// Derives from: UEngine > UObject
// size 0xD48, declared in Engine/Source/Runtime/Engine/Classes/Engine/GameEngine.h

UCLASS(Transient, Config=Engine)
class UGameEngine : public UEngine
{
public:
    UPROPERTY(Config) float MaxDeltaTime;  // 0x0CF8, size 0x4
    UPROPERTY(Config) float ServerFlushLogInterval;  // 0x0CFC, size 0x4
    UPROPERTY(Transient) UGameInstance* GameInstance;  // 0x0D00, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TWeakPtr<SWindow,0> GameViewportWindow;  // 0x0D08
    TSharedPtr<FSceneViewport,0> SceneViewport;  // 0x0D18
    TSharedPtr<SViewport,0> GameViewportWidget;  // 0x0D28
    FMovieSceneCaptureHandle StartupMovieCaptureHandle;  // 0x0D38, protected
    double LastTimeLogsFlushed;  // 0x0D40, private
};
