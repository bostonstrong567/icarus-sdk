// /Script/LiveLinkMovieScene.LiveLinkPropertyData
// size 0x58, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkStructProperties.h

USTRUCT()
struct FLiveLinkPropertyData
{
public:
    UPROPERTY() FName PropertyName;  // 0x0000, size 0x8
    UPROPERTY() TArray<FMovieSceneFloatChannel> FloatChannel;  // 0x0008, size 0x10
    UPROPERTY() TArray<FMovieSceneStringChannel> StringChannel;  // 0x0018, size 0x10
    UPROPERTY() TArray<FMovieSceneIntegerChannel> IntegerChannel;  // 0x0028, size 0x10
    UPROPERTY() TArray<FMovieSceneBoolChannel> BoolChannel;  // 0x0038, size 0x10
    UPROPERTY() TArray<FMovieSceneByteChannel> ByteChannel;  // 0x0048, size 0x10
};
