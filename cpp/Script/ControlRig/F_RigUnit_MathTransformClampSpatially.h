// /Script/ControlRig.RigUnit_MathTransformClampSpatially
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
public:
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
    UPROPERTY() TEnumAsByte<EAxis> Axis;  // 0x0040, size 0x1
    UPROPERTY() TEnumAsByte<EControlRigClampSpatialMode> Type;  // 0x0041, size 0x1
    UPROPERTY() float Minimum;  // 0x0044, size 0x4
    UPROPERTY() float Maximum;  // 0x0048, size 0x4
    UPROPERTY() FTransform Space;  // 0x0050, size 0x30
    UPROPERTY() bool bDrawDebug;  // 0x0080, size 0x1
    UPROPERTY() FLinearColor DebugColor;  // 0x0084, size 0x10
    UPROPERTY() float DebugThickness;  // 0x0094, size 0x4
    UPROPERTY() FTransform Result;  // 0x00A0, size 0x30
};
