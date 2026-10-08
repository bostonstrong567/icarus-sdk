// /Script/ControlRig.RigUnit_DebugTransform
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugTransform.h

USTRUCT()
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
    UPROPERTY() FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY() ERigUnitDebugTransformMode Mode;  // 0x0040, size 0x1
    UPROPERTY() FLinearColor Color;  // 0x0044, size 0x10
    UPROPERTY() float Thickness;  // 0x0054, size 0x4
    UPROPERTY() float Scale;  // 0x0058, size 0x4
    UPROPERTY() FName Space;  // 0x005C, size 0x8
    UPROPERTY() FTransform WorldOffset;  // 0x0070, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00A0, size 0x1
};
