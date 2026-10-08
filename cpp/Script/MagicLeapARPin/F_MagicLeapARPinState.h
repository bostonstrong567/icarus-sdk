// /Script/MagicLeapARPin.MagicLeapARPinState
// size 0x14, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/MagicLeapARPin/MagicLeapARPinFunctionLibrary.generated.h

USTRUCT()
struct FMagicLeapARPinState
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Confidence;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ValidRadius;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RotationError;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TranslationError;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EMagicLeapARPinType PinType;  // 0x0010, size 0x1
};
