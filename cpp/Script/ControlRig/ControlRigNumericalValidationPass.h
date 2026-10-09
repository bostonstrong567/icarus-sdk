// /Script/ControlRig.ControlRigNumericalValidationPass
// Derives from: UControlRigValidationPass > UObject
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Validation/ControlRigNumericalValidationPass.h

UCLASS()
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) bool bCheckControls;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) bool bCheckBones;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere) bool bCheckCurves;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere) float TranslationPrecision;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float RotationPrecision;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) float ScalePrecision;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float CurvePrecision;  // 0x0038, size 0x4
private:
    UPROPERTY(Transient) FName EventNameA;  // 0x003C, size 0x8
    UPROPERTY(Transient) FName EventNameB;  // 0x0044, size 0x8
    UPROPERTY(Transient) FRigPose Pose;  // 0x0050, size 0x10
};
