// /Script/ControlRig.RigUnit_MathVectorClampSpatially
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() TEnumAsByte<EAxis> Axis;  // 0x0014, size 0x1
    UPROPERTY() TEnumAsByte<EControlRigClampSpatialMode> Type;  // 0x0015, size 0x1
    UPROPERTY() float Minimum;  // 0x0018, size 0x4
    UPROPERTY() float Maximum;  // 0x001C, size 0x4
    UPROPERTY() FTransform Space;  // 0x0020, size 0x30
    UPROPERTY() bool bDrawDebug;  // 0x0050, size 0x1
    UPROPERTY() FLinearColor DebugColor;  // 0x0054, size 0x10
    UPROPERTY() float DebugThickness;  // 0x0064, size 0x4
    UPROPERTY() FVector Result;  // 0x0068, size 0xC
};
