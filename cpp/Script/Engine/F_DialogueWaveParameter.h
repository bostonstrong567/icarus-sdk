// /Script/Engine.DialogueWaveParameter
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/DialogueTypes.h

USTRUCT()
struct FDialogueWaveParameter
{
public:
    UPROPERTY(EditAnywhere) UDialogueWave* DialogueWave;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FDialogueContext Context;  // 0x0008, size 0x18
};
