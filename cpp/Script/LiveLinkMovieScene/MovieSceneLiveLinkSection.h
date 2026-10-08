// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x228, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSection.h

UCLASS()
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
    UPROPERTY() FLiveLinkSubjectPreset SubjectPreset;  // 0x00E8, size 0x38
    UPROPERTY() TArray<bool> ChannelMask;  // 0x0120, size 0x10
    UPROPERTY() TArray<UMovieSceneLiveLinkSubSection*> SubSections;  // 0x0130, size 0x10
    UPROPERTY(Deprecated) FName SubjectName;  // 0x0150, size 0x8
    UPROPERTY(Deprecated) FLiveLinkFrameData TemplateToPush;  // 0x0158, size 0x90
    UPROPERTY(Deprecated) FLiveLinkRefSkeleton RefSkeleton;  // 0x01E8, size 0x20
    UPROPERTY(Deprecated) TArray<FName> CurveNames;  // 0x0208, size 0x10
    UPROPERTY(Deprecated) TArray<FMovieSceneFloatChannel> PropertyFloatChannels;  // 0x0218, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,0> StaticData;  // 0x0140

    // Virtual functions that start here:
    //   CreateSectionTemplate, GetChannelCount
};
