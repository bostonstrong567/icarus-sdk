// /Script/MovieSceneTracks.MovieScene3DAttachSection
// Derives from: UMovieScene3DConstraintSection > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x130, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DAttachSection.h

UCLASS(MinimalAPI)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachSocketName;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachComponentName;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AttachmentLocationRule;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AttachmentRotationRule;  // 0x0129, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AttachmentScaleRule;  // 0x012A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDetachmentRule DetachmentLocationRule;  // 0x012B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDetachmentRule DetachmentRotationRule;  // 0x012C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDetachmentRule DetachmentScaleRule;  // 0x012D, size 0x1
};
