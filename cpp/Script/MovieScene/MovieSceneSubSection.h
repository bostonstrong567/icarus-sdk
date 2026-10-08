// /Script/MovieScene.MovieSceneSubSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x168, declared in Engine/Source/Runtime/MovieScene/Public/Sections/MovieSceneSubSection.h

UCLASS(Config=EditorPerProjectUserSettings)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FMovieSceneSectionParameters Parameters;  // 0x00E8, size 0x24
    UPROPERTY(Deprecated) float StartOffset;  // 0x010C, size 0x4
    UPROPERTY(Deprecated) float TimeScale;  // 0x0110, size 0x4
    UPROPERTY(Deprecated) float PrerollTime;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere) uint8 NetworkMask;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere) UMovieSceneSequence* SubSequence;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere) TLazyObjectPtr<AActor> ActorToRecord;  // 0x0128, size 0x1C
    UPROPERTY(EditAnywhere) FString TargetSequenceName;  // 0x0148, size 0x10
    UPROPERTY(EditAnywhere) FDirectoryPath TargetPathToRecordTo;  // 0x0158, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) UMovieSceneSequence* GetSequence() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSequence(UMovieSceneSequence* Sequence);  // parameters 0x8

    // Virtual functions that start here:
    //   GenerateSubSequenceData
};
