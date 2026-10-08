// /Script/MovieScene.MovieSceneBindingOverrides
// Derives from: UObject
// size 0x90, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneBindingOverrides.h

UCLASS(EditInlineNew)
class UMovieSceneBindingOverrides : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FMovieSceneBindingOverrideData> BindingData;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bLookupDirty;  // 0x0038, private
    TMultiMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1> > LookupMap;  // 0x0040, private
};
