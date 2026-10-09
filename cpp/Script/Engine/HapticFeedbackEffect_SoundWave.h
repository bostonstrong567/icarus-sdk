// /Script/Engine.HapticFeedbackEffect_SoundWave
// Derives from: UHapticFeedbackEffect_Base > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_SoundWave.h

UCLASS(MinimalAPI)
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
public:
    UPROPERTY(EditAnywhere) USoundWave* SoundWave;  // 0x0028, size 0x8
private:
    bool bPrepared;  // 0x0030, not reflected
    FHapticFeedbackBuffer HapticBuffer;  // 0x0038, not reflected
};
