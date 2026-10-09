// /Script/MovieScene.MovieSceneBindingOverrides
// Derives from: UObject
// size 0x90, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneBindingOverrides.h

UCLASS(EditInlineNew)
class UMovieSceneBindingOverrides : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TArray<FMovieSceneBindingOverrideData> BindingData;  // 0x0028, size 0x10
    bool bLookupDirty;  // 0x0038, not reflected
    TMultiMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1> > LookupMap;  // 0x0040, not reflected
};
