// /Script/Engine.SoundNodeDelay
// Derives from: USoundNode > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDelay.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeDelay : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) float DelayMin;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float DelayMax;  // 0x004C, size 0x4
};
