// /Script/ControlRig.RigUnit_DebugRectangleItemSpace
// size 0x110, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugPrimitives.h

USTRUCT()
struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
public:
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
    UPROPERTY() FLinearColor Color;  // 0x00A0, size 0x10
    UPROPERTY() float Scale;  // 0x00B0, size 0x4
    UPROPERTY() float Thickness;  // 0x00B4, size 0x4
    UPROPERTY() FRigElementKey Space;  // 0x00B8, size 0xC
    UPROPERTY() FTransform WorldOffset;  // 0x00D0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x0100, size 0x1
};
