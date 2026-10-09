// /Script/ControlRig.RigUnit_ChainHarmonics_Reach
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h

USTRUCT()
struct FRigUnit_ChainHarmonics_Reach
{
public:
    UPROPERTY() bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY() FVector ReachTarget;  // 0x0004, size 0xC
    UPROPERTY() FVector ReachAxis;  // 0x0010, size 0xC
    UPROPERTY() float ReachMinimum;  // 0x001C, size 0x4
    UPROPERTY() float ReachMaximum;  // 0x0020, size 0x4
    UPROPERTY() EControlRigAnimEasingType ReachEase;  // 0x0024, size 0x1
};
