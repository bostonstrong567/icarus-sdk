// /Script/Engine.SoundNodeLooping
// Derives from: USoundNode > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeLooping.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeLooping : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) int32 LoopCount;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) uint8 bLoopIndefinitely : 1;  // 0x004C, mask 0x01
};
