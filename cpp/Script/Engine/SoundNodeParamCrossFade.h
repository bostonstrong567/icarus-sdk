// /Script/Engine.SoundNodeParamCrossFade
// Derives from: USoundNodeDistanceCrossFade > USoundNode > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeParamCrossFade.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
    UPROPERTY(EditAnywhere) FName ParamName;  // 0x0058, size 0x8
};
