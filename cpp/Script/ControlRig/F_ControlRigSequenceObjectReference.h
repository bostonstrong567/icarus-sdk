// /Script/ControlRig.ControlRigSequenceObjectReference
// size 0x8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/ControlRigSequenceObjectReference.h

USTRUCT()
struct FControlRigSequenceObjectReference
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TSubclassOf<UControlRig> ControlRigClass;  // 0x0000, size 0x8
};
