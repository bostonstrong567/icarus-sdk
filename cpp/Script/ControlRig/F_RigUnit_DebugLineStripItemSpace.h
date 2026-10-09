// /Script/ControlRig.RigUnit_DebugLineStripItemSpace
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugLineStrip.h

USTRUCT()
struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
public:
    UPROPERTY() TArray<FVector> Points;  // 0x0068, size 0x10
    UPROPERTY() FLinearColor Color;  // 0x0078, size 0x10
    UPROPERTY() float Thickness;  // 0x0088, size 0x4
    UPROPERTY() FRigElementKey Space;  // 0x008C, size 0xC
    UPROPERTY() FTransform WorldOffset;  // 0x00A0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00D0, size 0x1
};
