// /Script/Landscape.LandscapeSettings
// Derives from: UDeveloperSettings > UObject
// size 0x40, declared in Engine/Source/Runtime/Landscape/Public/LandscapeSettings.h

UCLASS(Config=Engine)
class ULandscapeSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) int32 MaxNumberOfLayers;  // 0x0038, size 0x4
};
