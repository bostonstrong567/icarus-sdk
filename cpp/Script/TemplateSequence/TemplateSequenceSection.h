// /Script/TemplateSequence.TemplateSequenceSection
// Derives from: UMovieSceneSubSection > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x180, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/Sections/TemplateSequenceSection.h

UCLASS(Config=EditorPerProjectUserSettings)
class UTemplateSequenceSection : public UMovieSceneSubSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() TArray<FTemplateSectionPropertyScale> PropertyScales;  // 0x0170, size 0x10
};
