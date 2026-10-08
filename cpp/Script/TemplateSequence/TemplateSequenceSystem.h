// /Script/TemplateSequence.TemplateSequenceSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0xB0, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Private/Systems/TemplateSequenceSystem.h

UCLASS(MinimalAPI)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::FCachedEntityFilterResult_Match ApplicableFilter;  // 0x0040, private
};
