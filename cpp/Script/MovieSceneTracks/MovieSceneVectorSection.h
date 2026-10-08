// /Script/MovieSceneTracks.MovieSceneVectorSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x378, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h

UCLASS(MinimalAPI)
class UMovieSceneVectorSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneFloatChannel Curves;  // 0x00F0, size 0xA0
    UPROPERTY() int32 ChannelsUsed;  // 0x0370, size 0x4
};
