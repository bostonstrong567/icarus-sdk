// /Script/MoviePlayer.MoviePlayerSettings
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/MoviePlayer/Public/MoviePlayerSettings.h

UCLASS(Config=Game)
class UMoviePlayerSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool bWaitForMoviesToComplete;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bMoviesAreSkippable;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FString> StartupMovies;  // 0x0030, size 0x10
};
