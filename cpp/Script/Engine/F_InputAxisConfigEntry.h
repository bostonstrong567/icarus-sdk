// /Script/Engine.InputAxisConfigEntry
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

USTRUCT()
struct FInputAxisConfigEntry
{
public:
    UPROPERTY(EditAnywhere) FName AxisKeyName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FInputAxisProperties AxisProperties;  // 0x0008, size 0x10
};
