// /Script/ControlRig.RigUnit_DebugPoint
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugPoint.h

USTRUCT()
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
    UPROPERTY() FVector Vector;  // 0x0008, size 0xC
    UPROPERTY() ERigUnitDebugPointMode Mode;  // 0x0014, size 0x1
    UPROPERTY() FLinearColor Color;  // 0x0018, size 0x10
    UPROPERTY() float Scale;  // 0x0028, size 0x4
    UPROPERTY() float Thickness;  // 0x002C, size 0x4
    UPROPERTY() FName Space;  // 0x0030, size 0x8
    UPROPERTY() FTransform WorldOffset;  // 0x0040, size 0x30
    UPROPERTY() bool bEnabled;  // 0x0070, size 0x1
};
