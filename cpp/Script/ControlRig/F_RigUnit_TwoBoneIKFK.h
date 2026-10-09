// /Script/ControlRig.RigUnit_TwoBoneIKFK
// size 0x220, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Deprecated/RigUnit_TwoBoneIKFK.h

USTRUCT()
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FName StartJoint;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) FName EndJoint;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere) FVector PoleTarget;  // 0x0078, size 0xC
    UPROPERTY(EditAnywhere) float Spin;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) FTransform EndEffector;  // 0x0090, size 0x30
    UPROPERTY(EditAnywhere) float IKBlend;  // 0x00C0, size 0x4
private:
    UPROPERTY(EditAnywhere) FTransform StartJointFKTransform;  // 0x00D0, size 0x30
    UPROPERTY(EditAnywhere) FTransform MidJointFKTransform;  // 0x0100, size 0x30
    UPROPERTY(EditAnywhere) FTransform EndJointFKTransform;  // 0x0130, size 0x30
    UPROPERTY(Transient) float PreviousFKIKBlend;  // 0x0160, size 0x4
    UPROPERTY(Transient) FTransform StartJointIKTransform;  // 0x0170, size 0x30
    UPROPERTY(Transient) FTransform MidJointIKTransform;  // 0x01A0, size 0x30
    UPROPERTY(Transient) FTransform EndJointIKTransform;  // 0x01D0, size 0x30
    UPROPERTY(Transient) int32 StartJointIndex;  // 0x0200, size 0x4
    UPROPERTY(Transient) int32 MidJointIndex;  // 0x0204, size 0x4
    UPROPERTY(Transient) int32 EndJointIndex;  // 0x0208, size 0x4
    UPROPERTY(Transient) float UpperLimbLength;  // 0x020C, size 0x4
    UPROPERTY(Transient) float LowerLimbLength;  // 0x0210, size 0x4
};
