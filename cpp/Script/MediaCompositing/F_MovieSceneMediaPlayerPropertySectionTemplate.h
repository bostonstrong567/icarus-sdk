// /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// size 0x48, declared in Engine/Plugins/Media/MediaCompositing/Source/MediaCompositing/Private/MovieScene/MovieSceneMediaPlayerPropertyTemplate.h

USTRUCT()
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    UPROPERTY() UMediaSource* MediaSource;  // 0x0038, size 0x8
    UPROPERTY() FFrameNumber SectionStartFrame;  // 0x0040, size 0x4
    UPROPERTY() bool bLoop;  // 0x0044, size 0x1
};
