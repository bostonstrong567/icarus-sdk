// /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x98, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Private/Systems/TemplateSequenceSystem.h

UCLASS(MinimalAPI)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<UE::MovieScene::FInstanceHandle,TArray<UE::MovieScene::FMovieSceneEntityID,TInlineAllocator<2,TSizedDefaultAllocator<32> > >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UE::MovieScene::FMovieSceneEntityID,TInlineAllocator<2,TSizedDefaultAllocator<32> > >,0> > PropertyScaledInstances;  // 0x0040, private
    int32 FloatScaleUseCount;  // 0x0090, private
    int32 TransformScaleUseCount;  // 0x0094, private
};
