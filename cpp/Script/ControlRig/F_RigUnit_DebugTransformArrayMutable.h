// /Script/ControlRig.RigUnit_DebugTransformArrayMutable
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugTransform.h

USTRUCT()
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
public:
    UPROPERTY() TArray<FTransform> Transforms;  // 0x0068, size 0x10
    UPROPERTY() ERigUnitDebugTransformMode Mode;  // 0x0078, size 0x1
    UPROPERTY() FLinearColor Color;  // 0x007C, size 0x10
    UPROPERTY() float Thickness;  // 0x008C, size 0x4
    UPROPERTY() float Scale;  // 0x0090, size 0x4
    UPROPERTY() FName Space;  // 0x0094, size 0x8
    UPROPERTY() FTransform WorldOffset;  // 0x00A0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00D0, size 0x1
    UPROPERTY(Transient) FRigUnit_DebugTransformArrayMutable_WorkData WorkData;  // 0x00D8, size 0x10
};
