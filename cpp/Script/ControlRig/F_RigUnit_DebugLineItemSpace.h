// /Script/ControlRig.RigUnit_DebugLineItemSpace
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugLine.h

USTRUCT()
struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
public:
    UPROPERTY() FVector A;  // 0x0068, size 0xC
    UPROPERTY() FVector B;  // 0x0074, size 0xC
    UPROPERTY() FLinearColor Color;  // 0x0080, size 0x10
    UPROPERTY() float Thickness;  // 0x0090, size 0x4
    UPROPERTY() FRigElementKey Space;  // 0x0094, size 0xC
    UPROPERTY() FTransform WorldOffset;  // 0x00A0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00D0, size 0x1
};
