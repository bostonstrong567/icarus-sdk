// /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
// size 0x3C, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h

USTRUCT()
struct FRigUnit_ChainHarmonics_Pendulum
{
public:
    UPROPERTY() bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY() float PendulumStiffness;  // 0x0004, size 0x4
    UPROPERTY() FVector PendulumGravity;  // 0x0008, size 0xC
    UPROPERTY() float PendulumBlend;  // 0x0014, size 0x4
    UPROPERTY() float PendulumDrag;  // 0x0018, size 0x4
    UPROPERTY() float PendulumMinimum;  // 0x001C, size 0x4
    UPROPERTY() float PendulumMaximum;  // 0x0020, size 0x4
    UPROPERTY() EControlRigAnimEasingType PendulumEase;  // 0x0024, size 0x1
    UPROPERTY() FVector UnwindAxis;  // 0x0028, size 0xC
    UPROPERTY() float UnwindMinimum;  // 0x0034, size 0x4
    UPROPERTY() float UnwindMaximum;  // 0x0038, size 0x4
};
