// /Script/Engine.SoundNodeEnveloper
// Derives from: USoundNode > UObject
// size 0x190, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeEnveloper.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeEnveloper : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) float LoopStart;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float LoopEnd;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float DurationAfterLoop;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) int32 LoopCount;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) uint8 bLoopIndefinitely : 1;  // 0x0058, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bLoop : 1;  // 0x0058, mask 0x02
    UPROPERTY(Instanced, Deprecated) UDistributionFloatConstantCurve* VolumeInterpCurve;  // 0x0060, size 0x8
    UPROPERTY(Instanced, Deprecated) UDistributionFloatConstantCurve* PitchInterpCurve;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve VolumeCurve;  // 0x0070, size 0x88
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve PitchCurve;  // 0x00F8, size 0x88
    UPROPERTY(EditAnywhere) float PitchMin;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere) float PitchMax;  // 0x0184, size 0x4
    UPROPERTY(EditAnywhere) float VolumeMin;  // 0x0188, size 0x4
    UPROPERTY(EditAnywhere) float VolumeMax;  // 0x018C, size 0x4
};
