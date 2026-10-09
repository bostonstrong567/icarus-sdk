// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// size 0x20, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h

USTRUCT()
struct FMovieSceneCameraShakeSourceTrigger
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UCameraShakeBase> ShakeClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECameraShakePlaySpace PlaySpace;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator UserDefinedPlaySpace;  // 0x0010, size 0xC
};
