// /Script/Engine.SoundNodeOscillator
// Derives from: USoundNode > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeOscillator.h

UCLASS(EditInlineNew)
class USoundNodeOscillator : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) uint8 bModulateVolume : 1;  // 0x0048, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bModulatePitch : 1;  // 0x0048, mask 0x02
    UPROPERTY(EditAnywhere) float AmplitudeMin;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float AmplitudeMax;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) float FrequencyMin;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) float FrequencyMax;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) float OffsetMin;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere) float OffsetMax;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) float CenterMin;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) float CenterMax;  // 0x0068, size 0x4
};
