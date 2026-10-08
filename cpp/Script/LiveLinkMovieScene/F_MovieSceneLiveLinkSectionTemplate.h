// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// size 0xB8, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkMovieScene/Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h

USTRUCT()
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
    UPROPERTY() FLiveLinkSubjectPreset SubjectPreset;  // 0x0038, size 0x38
    UPROPERTY() TArray<bool> ChannelMask;  // 0x0070, size 0x10
    UPROPERTY() TArray<FLiveLinkSubSectionData> SubSectionsData;  // 0x0080, size 0x10

    // Not reflected:
    bool bMustDoInterpolation;  // 0x0090
    bool bIsSectionUsable;  // 0x0091
    TArray<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,0>,TSizedDefaultAllocator<32> > PropertyHandlers;  // 0x0098
    TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,0> StaticData;  // 0x00A8
};
