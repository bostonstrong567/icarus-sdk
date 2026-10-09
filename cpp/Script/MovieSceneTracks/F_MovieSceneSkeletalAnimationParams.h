// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
// size 0xD8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneSkeletalAnimationSection.h

USTRUCT()
struct FMovieSceneSkeletalAnimationParams
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequenceBase* Animation;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber FirstLoopStartFrameOffset;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber StartFrameOffset;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber EndFrameOffset;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayRate;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReverse : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SlotName;  // 0x001C, size 0x8
    UPROPERTY() FMovieSceneFloatChannel Weight;  // 0x0028, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSkipAnimNotifiers;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere) bool bForceCustomMode;  // 0x00C9, size 0x1
    UPROPERTY(Deprecated) float StartOffset;  // 0x00CC, size 0x4
    UPROPERTY(Deprecated) float EndOffset;  // 0x00D0, size 0x4
};
