// /Script/ControlRig.ControlRigSequenceObjectReferenceMap
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/ControlRigSequenceObjectReference.h

USTRUCT()
struct FControlRigSequenceObjectReferenceMap
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FGuid> BindingIds;  // 0x0000, size 0x10
    UPROPERTY() TArray<FControlRigSequenceObjectReferences> References;  // 0x0010, size 0x10
};
