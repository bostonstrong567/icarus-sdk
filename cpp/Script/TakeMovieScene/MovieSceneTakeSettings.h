// /Script/TakeMovieScene.MovieSceneTakeSettings
// Derives from: UObject
// size 0x88, declared in Engine/Plugins/VirtualProduction/Takes/Source/TakeMovieScene/Public/MovieSceneTakeSettings.h

UCLASS(MinimalAPI, Config=EditorSettings)
class UMovieSceneTakeSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString HoursName;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString MinutesName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString SecondsName;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString FramesName;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString SubFramesName;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString SlateName;  // 0x0078, size 0x10
};
