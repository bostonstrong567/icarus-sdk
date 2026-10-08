// /Script/Engine.VolumetricLightmapDensityVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x260, declared in Engine/Source/Runtime/Engine/Classes/Lightmass/VolumetricLightmapDensityVolume.h

UCLASS(MinimalAPI, Config=Engine)
class AVolumetricLightmapDensityVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere) FInt32Interval AllowedMipLevelRange;  // 0x0258, size 0x8
};
