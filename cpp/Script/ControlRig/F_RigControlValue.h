// /Script/ControlRig.RigControlValue
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigControlHierarchy.h

USTRUCT()
struct FRigControlValue
{
    UPROPERTY() FRigControlValueStorage FloatStorage;  // 0x0000, size 0x44
    UPROPERTY(Deprecated) FTransform Storage;  // 0x0050, size 0x30
};
