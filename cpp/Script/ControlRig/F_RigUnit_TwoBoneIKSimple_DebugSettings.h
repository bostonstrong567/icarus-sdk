// /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h

USTRUCT()
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
    UPROPERTY(EditAnywhere) bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float Scale;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FTransform WorldOffset;  // 0x0010, size 0x30
};
