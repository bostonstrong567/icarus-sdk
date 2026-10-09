// /Script/Engine.SoundNodeWavePlayer
// Derives from: USoundNodeAssetReferencer > USoundNode > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeWavePlayer.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) uint8 bLooping : 1;  // 0x0080, mask 0x01
private:
    UPROPERTY(EditAnywhere) TSoftObjectPtr<USoundWave> SoundWaveAssetPtr;  // 0x0048, size 0x28
    UPROPERTY(Transient) USoundWave* SoundWave;  // 0x0070, size 0x8
    uint8 : 1 bAsyncLoading;  // 0x0078, not reflected
    FThreadSafeBool bAsyncLoadRequestPending;  // 0x007C, not reflected
};
