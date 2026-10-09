// /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x90, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Private/Systems/TemplateSequenceSystem.h

UCLASS(MinimalAPI)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
private:
    TMap<TTuple<UE::MovieScene::FInstanceHandle,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0> > PropertyScales;  // 0x0040, not reflected
};
