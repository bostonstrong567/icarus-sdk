// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// Derives from: UObject
// size 0x50, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSubSection.h

UCLASS(Abstract)
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
    UPROPERTY() FLiveLinkSubSectionData SubSectionData;  // 0x0028, size 0x10
    UPROPERTY() TSubclassOf<ULiveLinkRole> SubjectRole;  // 0x0038, size 0x8
protected:
    TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,0> StaticData;  // 0x0040, not reflected

    // Virtual functions that start here:
    //   CreateChannelProxy, FinalizeSection, GetChannelCount, Initialize, IsRoleSupported, RecordFrame
};
