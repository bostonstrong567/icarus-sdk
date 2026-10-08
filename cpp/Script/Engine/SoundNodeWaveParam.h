// /Script/Engine.SoundNodeWaveParam
// Derives from: USoundNode > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeWaveParam.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeWaveParam : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) FName WaveParameterName;  // 0x0048, size 0x8
};
