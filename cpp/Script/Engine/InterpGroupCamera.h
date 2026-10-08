// /Script/Engine.InterpGroupCamera
// Derives from: UInterpGroup > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroupCamera.h

UCLASS(MinimalAPI)
class UInterpGroupCamera : public UInterpGroup
{
public:
    UPROPERTY(Transient) UCameraAnim* CameraAnimInst;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) float CompressTolerance;  // 0x0058, size 0x4
};
