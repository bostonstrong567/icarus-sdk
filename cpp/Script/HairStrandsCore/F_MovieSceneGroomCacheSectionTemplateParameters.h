// /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
// size 0x28, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Private/MovieSceneGroomCacheTemplate.h

USTRUCT()
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
public:
    UPROPERTY() FFrameNumber SectionStartTime;  // 0x0020, size 0x4
    UPROPERTY() FFrameNumber SectionEndTime;  // 0x0024, size 0x4
};
