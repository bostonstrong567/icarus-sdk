// /Script/Engine.SoundNodeWavePlayer
// Derives from: USoundNodeAssetReferencer > USoundNode > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeWavePlayer.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:
    UPROPERTY(EditAnywhere) TSoftObjectPtr<USoundWave> SoundWaveAssetPtr;  // 0x0048, size 0x28
    UPROPERTY(Transient) USoundWave* SoundWave;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere) uint8 bLooping : 1;  // 0x0080, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bAsyncLoading;  // 0x0078, private
    FThreadSafeBool bAsyncLoadRequestPending;  // 0x007C, private
};
