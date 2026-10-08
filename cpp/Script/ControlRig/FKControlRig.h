// /Script/ControlRig.FKControlRig
// Derives from: UControlRig > UObject
// size 0x668, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/FKControlRig.h

UCLASS(EditInlineNew)
class UFKControlRig : public UControlRig
{
public:
    UPROPERTY() TArray<bool> IsControlActive;  // 0x0650, size 0x10
    UPROPERTY() EControlRigFKRigExecuteMode ApplyMode;  // 0x0660, size 0x1
};
