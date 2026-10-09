// /Script/ControlRig.CRSimSoftCollision
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Math/Simulation/CRSimSoftCollision.h

USTRUCT()
struct FCRSimSoftCollision
{
public:
    UPROPERTY() FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY() ECRSimSoftCollisionType ShapeType;  // 0x0030, size 0x1
    UPROPERTY() float MinimumDistance;  // 0x0034, size 0x4
    UPROPERTY() float MaximumDistance;  // 0x0038, size 0x4
    UPROPERTY() EControlRigAnimEasingType FalloffType;  // 0x003C, size 0x1
    UPROPERTY() float Coefficient;  // 0x0040, size 0x4
    UPROPERTY() bool bInverted;  // 0x0044, size 0x1
};
