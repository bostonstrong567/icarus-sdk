// /Script/MediaCompositing.MovieSceneMediaSectionParams
// size 0x30, declared in Engine/Plugins/Media/MediaCompositing/Source/MediaCompositing/Private/MovieScene/MovieSceneMediaTemplate.h

USTRUCT()
struct FMovieSceneMediaSectionParams
{
public:
    UPROPERTY(Instanced) UMediaSoundComponent* MediaSoundComponent;  // 0x0000, size 0x8
    UPROPERTY() UMediaSource* MediaSource;  // 0x0008, size 0x8
    UPROPERTY() UMediaTexture* MediaTexture;  // 0x0010, size 0x8
    UPROPERTY() UMediaPlayer* MediaPlayer;  // 0x0018, size 0x8
    UPROPERTY() FFrameNumber SectionStartFrame;  // 0x0020, size 0x4
    UPROPERTY() FFrameNumber SectionEndFrame;  // 0x0024, size 0x4
    UPROPERTY() bool bLooping;  // 0x0028, size 0x1
    UPROPERTY() FFrameNumber StartFrameOffset;  // 0x002C, size 0x4
};
