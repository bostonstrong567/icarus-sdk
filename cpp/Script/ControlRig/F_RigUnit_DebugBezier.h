// /Script/ControlRig.RigUnit_DebugBezier
// size 0x100, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugBezier.h

USTRUCT()
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
public:
    UPROPERTY() FCRFourPointBezier Bezier;  // 0x0068, size 0x30
    UPROPERTY() float MinimumU;  // 0x0098, size 0x4
    UPROPERTY() float MaximumU;  // 0x009C, size 0x4
    UPROPERTY() FLinearColor Color;  // 0x00A0, size 0x10
    UPROPERTY() float Thickness;  // 0x00B0, size 0x4
    UPROPERTY() int32 Detail;  // 0x00B4, size 0x4
    UPROPERTY() FName Space;  // 0x00B8, size 0x8
    UPROPERTY() FTransform WorldOffset;  // 0x00C0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00F0, size 0x1
};
