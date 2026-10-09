// /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
// size 0x270, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h

USTRUCT()
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
    UPROPERTY() FRigElementKey ChainRoot;  // 0x0068, size 0xC
    UPROPERTY() FVector Speed;  // 0x0074, size 0xC
    UPROPERTY() FRigUnit_ChainHarmonics_Reach Reach;  // 0x0080, size 0x28
    UPROPERTY() FRigUnit_ChainHarmonics_Wave Wave;  // 0x00A8, size 0x40
    UPROPERTY() FRuntimeFloatCurve WaveCurve;  // 0x00E8, size 0x88
    UPROPERTY() FRigUnit_ChainHarmonics_Pendulum Pendulum;  // 0x0170, size 0x3C
    UPROPERTY() bool bDrawDebug;  // 0x01AC, size 0x1
    UPROPERTY() FTransform DrawWorldOffset;  // 0x01B0, size 0x30
    UPROPERTY(Transient) FRigUnit_ChainHarmonics_WorkData WorkData;  // 0x01E0, size 0x90
};
