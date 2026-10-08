// /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_VisualDebug.h

USTRUCT()
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() bool bEnabled;  // 0x0014, size 0x1
    UPROPERTY() ERigUnitVisualDebugPointMode Mode;  // 0x0015, size 0x1
    UPROPERTY() FLinearColor Color;  // 0x0018, size 0x10
    UPROPERTY() float Thickness;  // 0x0028, size 0x4
    UPROPERTY() float Scale;  // 0x002C, size 0x4
    UPROPERTY() FRigElementKey Space;  // 0x0030, size 0xC
};
