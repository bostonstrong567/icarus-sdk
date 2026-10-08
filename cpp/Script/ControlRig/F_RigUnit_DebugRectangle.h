// /Script/ControlRig.RigUnit_DebugRectangle
// size 0x100, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugPrimitives.h

USTRUCT()
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
    UPROPERTY() FLinearColor Color;  // 0x00A0, size 0x10
    UPROPERTY() float Scale;  // 0x00B0, size 0x4
    UPROPERTY() float Thickness;  // 0x00B4, size 0x4
    UPROPERTY() FName Space;  // 0x00B8, size 0x8
    UPROPERTY() FTransform WorldOffset;  // 0x00C0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00F0, size 0x1
};
