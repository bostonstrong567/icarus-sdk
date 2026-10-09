// /Script/ControlRig.RigUnit_DebugPointMutable
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugPoint.h

USTRUCT()
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
public:
    UPROPERTY() FVector Vector;  // 0x0068, size 0xC
    UPROPERTY() ERigUnitDebugPointMode Mode;  // 0x0074, size 0x1
    UPROPERTY() FLinearColor Color;  // 0x0078, size 0x10
    UPROPERTY() float Scale;  // 0x0088, size 0x4
    UPROPERTY() float Thickness;  // 0x008C, size 0x4
    UPROPERTY() FName Space;  // 0x0090, size 0x8
    UPROPERTY() FTransform WorldOffset;  // 0x00A0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00D0, size 0x1
};
