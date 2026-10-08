// /Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x78, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/WeightAndEasingEvaluatorSystem.h

UCLASS()
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSparseArray<UE::MovieScene::FHierarchicalEasingChannelData,FDefaultSparseArrayAllocator> EasingChannels;  // 0x0040, private
};
