// /Script/Engine.SoundNodeDialoguePlayer
// Derives from: USoundNode > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDialoguePlayer.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) FDialogueWaveParameter DialogueWaveParameter;  // 0x0048, size 0x20
    UPROPERTY(EditAnywhere) uint8 bLooping : 1;  // 0x0068, mask 0x01
};
