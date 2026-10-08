// /Script/MovieScene.MovieSceneCompiledDataManager
// Derives from: UObject
// size 0x230, declared in Engine/Source/Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h

UCLASS()
class UMovieSceneCompiledDataManager : public UObject
{
public:
    UPROPERTY() TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;  // 0x00D8, size 0x50
    UPROPERTY() TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;  // 0x0128, size 0x50
    UPROPERTY() TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;  // 0x0178, size 0x50
    UPROPERTY() TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;  // 0x01C8, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection AsyncLoadCriticalSection;  // 0x0028, private
    TMap<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0> > SequenceToDataIDs;  // 0x0050, private
    TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator> CompiledDataEntries;  // 0x00A0, private
    FGuid CompilerVersion;  // 0x0218, private
    uint32 ReallocationVersion;  // 0x0228, private
    EMovieSceneServerClientMask NetworkMask;  // 0x022C, private
};
