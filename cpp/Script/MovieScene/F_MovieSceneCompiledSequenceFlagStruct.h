// /Script/MovieScene.MovieSceneCompiledSequenceFlagStruct
// size 0x1, declared in Engine/Source/Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h

USTRUCT()
struct FMovieSceneCompiledSequenceFlagStruct
{
public:
    UPROPERTY() uint8 bParentSequenceRequiresLowerFence : 1;  // 0x0000, mask 0x01
    UPROPERTY() uint8 bParentSequenceRequiresUpperFence : 1;  // 0x0000, mask 0x02
};
