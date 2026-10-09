// /Script/ControlRig.FKControlRig
// Derives from: UControlRig > UObject
// size 0x668, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/FKControlRig.h

UCLASS(EditInlineNew)
class UFKControlRig : public UControlRig
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<bool> IsControlActive;  // 0x0650, size 0x10
    UPROPERTY() EControlRigFKRigExecuteMode ApplyMode;  // 0x0660, size 0x1
};
