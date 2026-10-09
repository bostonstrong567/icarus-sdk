// /Script/Engine.DialogueSoundWaveProxy
// Derives from: USoundBase > UObject
// size 0x188, declared in Engine/Source/Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h

UCLASS(EditInlineNew)
class UDialogueSoundWaveProxy : public USoundBase
{
public:
    USoundWave * SoundWave;  // 0x0170, not reflected
    TArray<FSubtitleCue,TSizedDefaultAllocator<32> > Subtitles;  // 0x0178, not reflected
};
