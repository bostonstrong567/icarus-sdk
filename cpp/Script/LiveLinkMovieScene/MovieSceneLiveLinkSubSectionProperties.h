// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// Derives from: UMovieSceneLiveLinkSubSection > UObject
// size 0x60, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSubSectionProperties.h

UCLASS()
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,0>,TSizedDefaultAllocator<32> > PropertyHandlers;  // 0x0050, protected
};
