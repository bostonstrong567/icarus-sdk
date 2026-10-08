// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x270, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneSkeletalAnimationSection.h

UCLASS(MinimalAPI)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMovieSceneSkeletalAnimationParams Params;  // 0x00E8, size 0xD8
    UPROPERTY(Deprecated) UAnimSequence* AnimSequence;  // 0x01C0, size 0x8
    UPROPERTY(Deprecated) UAnimSequenceBase* Animation;  // 0x01C8, size 0x8
    UPROPERTY(Deprecated) float StartOffset;  // 0x01D0, size 0x4
    UPROPERTY(Deprecated) float EndOffset;  // 0x01D4, size 0x4
    UPROPERTY(Deprecated) float PlayRate;  // 0x01D8, size 0x4
    UPROPERTY(Deprecated) uint8 bReverse : 1;  // 0x01DC, mask 0x01
    UPROPERTY(Deprecated) FName SlotName;  // 0x01E0, size 0x8
    UPROPERTY(EditAnywhere) FVector StartLocationOffset;  // 0x01E8, size 0xC
    UPROPERTY(EditAnywhere) FRotator StartRotationOffset;  // 0x01F4, size 0xC
    UPROPERTY() bool bMatchWithPrevious;  // 0x0200, size 0x1
    UPROPERTY() FName MatchedBoneName;  // 0x0204, size 0x8
    UPROPERTY() FVector MatchedLocationOffset;  // 0x020C, size 0xC
    UPROPERTY() FRotator MatchedRotationOffset;  // 0x0218, size 0xC
    UPROPERTY() bool bMatchTranslation;  // 0x0224, size 0x1
    UPROPERTY() bool bMatchIncludeZHeight;  // 0x0225, size 0x1
    UPROPERTY() bool bMatchRotationYaw;  // 0x0226, size 0x1
    UPROPERTY() bool bMatchRotationPitch;  // 0x0227, size 0x1
    UPROPERTY() bool bMatchRotationRoll;  // 0x0228, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FTransform TempOffsetTransform;  // 0x0230
    TOptional<int> TempRootBoneIndex;  // 0x0260
};
