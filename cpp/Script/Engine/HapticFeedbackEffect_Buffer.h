// /Script/Engine.HapticFeedbackEffect_Buffer
// Derives from: UHapticFeedbackEffect_Base > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Buffer.h

UCLASS(MinimalAPI)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
public:
    UPROPERTY(EditAnywhere) TArray<uint8> Amplitudes;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) int32 SampleRate;  // 0x0038, size 0x4
private:
    FHapticFeedbackBuffer HapticBuffer;  // 0x0040, not reflected
};
