// /Script/Engine.CameraExposureSettings
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FCameraExposureSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAutoExposureMethod> Method;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LowPercent;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float HighPercent;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float MinBrightness;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float MaxBrightness;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SpeedUp;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SpeedDown;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Bias;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* BiasCurve;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* MeterMask;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float HistogramLogMin;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float HistogramLogMax;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CalibrationConstant;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 ApplyPhysicalCameraExposure : 1;  // 0x003C, mask 0x01
};
