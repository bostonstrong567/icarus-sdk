// /Script/Engine.InputScaleBiasClamp
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/InputScaleBias.h

USTRUCT()
struct FInputScaleBiasClamp
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMapRange;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bClampResult;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInterpResult;  // 0x0002, size 0x1
    bool bInitialized;  // 0x0003, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputRange InRange;  // 0x0004, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputRange OutRange;  // 0x000C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scale;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bias;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClampMin;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClampMax;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpSpeedIncreasing;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpSpeedDecreasing;  // 0x0028, size 0x4
    float InterpolatedResult;  // 0x002C, not reflected
};
