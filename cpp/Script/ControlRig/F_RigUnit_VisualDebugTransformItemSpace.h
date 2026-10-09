// /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_VisualDebug.h

USTRUCT()
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
public:
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
    UPROPERTY() bool bEnabled;  // 0x0040, size 0x1
    UPROPERTY() float Thickness;  // 0x0044, size 0x4
    UPROPERTY() float Scale;  // 0x0048, size 0x4
    UPROPERTY() FRigElementKey Space;  // 0x004C, size 0xC
};
