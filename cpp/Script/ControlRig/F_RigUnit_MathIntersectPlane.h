// /Script/ControlRig.RigUnit_MathIntersectPlane
// size 0x48, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
    UPROPERTY() FVector Start;  // 0x0008, size 0xC
    UPROPERTY() FVector Direction;  // 0x0014, size 0xC
    UPROPERTY() FVector PlanePoint;  // 0x0020, size 0xC
    UPROPERTY() FVector PlaneNormal;  // 0x002C, size 0xC
    UPROPERTY() FVector Result;  // 0x0038, size 0xC
    UPROPERTY() float Distance;  // 0x0044, size 0x4
};
