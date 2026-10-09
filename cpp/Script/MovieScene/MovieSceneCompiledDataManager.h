// /Script/MovieScene.MovieSceneCompiledDataManager
// Derives from: UObject
// size 0x230, declared in Engine/Source/Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h

UCLASS()
class UMovieSceneCompiledDataManager : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    FWindowsCriticalSection AsyncLoadCriticalSection;  // 0x0028, not reflected
    TMap<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0> > SequenceToDataIDs;  // 0x0050, not reflected
    TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator> CompiledDataEntries;  // 0x00A0, not reflected
    UPROPERTY() TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;  // 0x00D8, size 0x50
    UPROPERTY() TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;  // 0x0128, size 0x50
    UPROPERTY() TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;  // 0x0178, size 0x50
    UPROPERTY() TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;  // 0x01C8, size 0x50
    FGuid CompilerVersion;  // 0x0218, not reflected
    uint32 ReallocationVersion;  // 0x0228, not reflected
    EMovieSceneServerClientMask NetworkMask;  // 0x022C, not reflected
};
