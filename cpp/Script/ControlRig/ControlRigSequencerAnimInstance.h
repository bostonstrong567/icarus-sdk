// /Script/ControlRig.ControlRigSequencerAnimInstance
// Derives from: UAnimSequencerInstance > UAnimInstance > UObject
// size 0x2D0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/ControlRigSequencerAnimInstance.h

UCLASS(Transient)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UControlRig,FWeakObjectPtr> CachedControlRig;  // 0x02C0

    // Virtual functions that start here:
    //   SetAnimationAsset
};
