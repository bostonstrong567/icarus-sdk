// /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0xF8, declared in Engine/Plugins/Media/MediaCompositing/Source/MediaCompositing/Public/MovieSceneMediaPlayerPropertySection.h

UCLASS(MinimalAPI)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMediaSource* MediaSource;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLoop;  // 0x00F0, size 0x1
};
