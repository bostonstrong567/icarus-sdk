// /Script/MediaCompositing.MovieSceneMediaSectionTemplate
// size 0x50, declared in Engine/Plugins/Media/MediaCompositing/Source/MediaCompositing/Private/MovieScene/MovieSceneMediaTemplate.h

USTRUCT()
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneMediaSectionParams Params;  // 0x0020, size 0x30
};
