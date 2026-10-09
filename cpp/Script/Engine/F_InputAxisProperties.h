// /Script/Engine.InputAxisProperties
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

USTRUCT()
struct FInputAxisProperties
{
public:
    UPROPERTY(EditAnywhere) float DeadZone;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float Sensitivity;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float Exponent;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) uint8 bInvert : 1;  // 0x000C, mask 0x01
};
