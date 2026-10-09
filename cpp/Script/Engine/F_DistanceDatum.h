// /Script/Engine.DistanceDatum
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDistanceCrossFade.h

USTRUCT()
struct FDistanceDatum
{
public:
    UPROPERTY(EditAnywhere) float FadeInDistanceStart;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float FadeInDistanceEnd;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float FadeOutDistanceStart;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float FadeOutDistanceEnd;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float Volume;  // 0x0010, size 0x4
};
