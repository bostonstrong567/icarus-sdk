// /Script/Engine.DialogueContextMapping
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Sound/DialogueWave.h

USTRUCT()
struct FDialogueContextMapping
{
    UPROPERTY(EditAnywhere) FDialogueContext Context;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere) USoundWave* SoundWave;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) FString LocalizationKeyFormat;  // 0x0020, size 0x10
    UPROPERTY(Transient) UDialogueSoundWaveProxy* Proxy;  // 0x0030, size 0x8
};
