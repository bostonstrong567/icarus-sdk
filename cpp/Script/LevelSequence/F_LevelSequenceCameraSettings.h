// /Script/LevelSequence.LevelSequenceCameraSettings
// size 0x2, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequencePlayer.h

USTRUCT()
struct FLevelSequenceCameraSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverrideAspectRatioAxisConstraint;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;  // 0x0001, size 0x1
};
