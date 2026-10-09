// /Script/UMG.MovieSceneWidgetMaterialTrack
// Derives from: UMovieSceneMaterialTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xC0, declared in Engine/Source/Runtime/UMG/Public/Animation/MovieSceneWidgetMaterialTrack.h

UCLASS(MinimalAPI)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FName> BrushPropertyNamePath;  // 0x00A8, size 0x10
    UPROPERTY() FName TrackName;  // 0x00B8, size 0x8
};
