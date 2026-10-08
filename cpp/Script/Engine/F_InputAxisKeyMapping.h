// /Script/Engine.InputAxisKeyMapping
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

USTRUCT()
struct FInputAxisKeyMapping
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AxisName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey Key;  // 0x0010, size 0x18
};
