// /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// Derives from: UObject
// size 0x78, declared in Engine/Plugins/Blendables/LightPropagationVolume/Source/LightPropagationVolumeRuntime/Public/LightPropagationVolumeBlendable.h

UCLASS(MinimalAPI)
class ULightPropagationVolumeBlendable : public UObject, public IBlendableInterface
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLightPropagationVolumeSettings Settings;  // 0x0030, size 0x40
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BlendWeight;  // 0x0070, size 0x4
};
