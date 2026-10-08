// /Script/ControlRig.ControlRigSequence
// Derives from: ULevelSequence > UMovieSceneSequence > UMovieSceneSignedObject > UObject
// size 0x220, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/ControlRigSequence.h

UCLASS(Config=Engine)
class UControlRigSequence : public ULevelSequence
{
public:
    UPROPERTY() TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;  // 0x01C8, size 0x28
    UPROPERTY() TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;  // 0x01F0, size 0x28
    UPROPERTY() float LastExportedFrameRate;  // 0x0218, size 0x4
};
