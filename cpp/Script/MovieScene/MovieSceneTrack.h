// /Script/MovieScene.MovieSceneTrack
// Derives from: UMovieSceneSignedObject > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneTrack.h

UCLASS(Abstract, MinimalAPI)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
    UPROPERTY(EditAnywhere) FMovieSceneTrackEvalOptions EvalOptions;  // 0x0050, size 0x4
    UPROPERTY() bool bIsEvalDisabled;  // 0x0055, size 0x1
    UPROPERTY() TArray<int32> RowsDisabled;  // 0x0058, size 0x10
    UPROPERTY() FGuid EvaluationFieldGuid;  // 0x006C, size 0x10
    UPROPERTY() FMovieSceneTrackEvaluationField EvaluationField;  // 0x0080, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FMovieSceneBlendTypeField SupportedBlendTypes;  // 0x0054, protected
    UMovieSceneTrack::ETreePopulationMode BuiltInTreePopulationMode;  // 0x0068, protected

    // Virtual functions that start here:
    //   AddSection, CreateNewSection, GetAllSections, GetEvaluationFieldVersion, GetRowSegmentBlender
    //   GetSectionToKey, GetTrackName, GetTrackSegmentBlender, HasSection, IsEmpty, PopulateEvaluationTree
    //   PreCompileImpl, RemoveAllAnimationData, RemoveSection, RemoveSectionAt, SetSectionToKey
    //   SupportsEasing, SupportsMultipleRows, SupportsType, UpdateEasing
};
