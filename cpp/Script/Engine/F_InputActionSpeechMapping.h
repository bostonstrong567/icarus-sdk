// /Script/Engine.InputActionSpeechMapping
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

USTRUCT()
struct FInputActionSpeechMapping
{
    UPROPERTY(EditAnywhere) FName ActionName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FName SpeechKeyword;  // 0x0008, size 0x8
};
