// /Script/TemplateSequence.TemplateSectionPropertyScale
// size 0xC8, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/Sections/TemplateSequenceSection.h

USTRUCT()
struct FTemplateSectionPropertyScale
{
    UPROPERTY() FGuid ObjectBinding;  // 0x0000, size 0x10
    UPROPERTY() FMovieScenePropertyBinding PropertyBinding;  // 0x0010, size 0x14
    UPROPERTY() ETemplateSectionPropertyScaleType PropertyScaleType;  // 0x0024, size 0x4
    UPROPERTY() FMovieSceneFloatChannel FloatChannel;  // 0x0028, size 0xA0
};
