// /Script/MediaCompositing.MovieSceneMediaSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x118, declared in Engine/Plugins/Media/MediaCompositing/Source/MediaCompositing/Public/MovieSceneMediaSection.h

UCLASS(MinimalAPI)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMediaSource* MediaSource;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLooping;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber StartFrameOffset;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMediaTexture* MediaTexture;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UMediaSoundComponent* MediaSoundComponent;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseExternalMediaPlayer;  // 0x0108, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMediaPlayer* ExternalMediaPlayer;  // 0x0110, size 0x8
};
